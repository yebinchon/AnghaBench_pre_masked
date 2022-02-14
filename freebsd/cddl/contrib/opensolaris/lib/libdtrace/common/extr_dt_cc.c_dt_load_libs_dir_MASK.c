
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct dirent {char* d_name; } ;
typedef int fname ;
struct TYPE_12__ {char* dtld_library; } ;
struct TYPE_11__ {char* dt_filetag; scalar_t__ dt_errno; scalar_t__ dt_errtag; TYPE_2__ dt_lib_dep; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef TYPE_2__ dt_lib_depend_t ;
typedef int FILE ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (TYPE_1__*,int ,int ,int *,int,int ,int *,int *,int *) ;
 int FUNC_3 (char*,char const*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,TYPE_2__*,char*) ;
 TYPE_2__* FUNC_6 (TYPE_2__*) ;
 char* FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (char*,char*) ;
 int * FUNC_11 (char const*) ;
 struct dirent* FUNC_12 (int *) ;
 int FUNC_13 (char*,int,char*,char const*,char*) ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 char* FUNC_15 (int ) ;
 char* FUNC_16 (char*,char) ;

__attribute__((used)) static int
FUNC_17(dtrace_hdl_t *VAR_8, const char *VAR_9)
{
 struct dirent *VAR_10;
 const char *VAR_11, *VAR_12;
 DIR *VAR_13;

 char VAR_14[VAR_6];
 FILE *VAR_15;
 void *VAR_16;
 dt_lib_depend_t *VAR_17;

 if ((VAR_13 = FUNC_11(VAR_9)) == ((void*)0)) {
  FUNC_3("skipping lib dir %s: %s\n", VAR_9, FUNC_15(VAR_7));
  return (0);
 }


 while ((VAR_10 = FUNC_12(VAR_13)) != ((void*)0)) {
  if ((VAR_11 = FUNC_16(VAR_10->d_name, '.')) == ((void*)0) || FUNC_14(VAR_11, ".d"))
   continue;

  (void) FUNC_13(VAR_14, sizeof (VAR_14),
      "%s/%s", VAR_9, VAR_10->d_name);

  if ((VAR_15 = FUNC_10(VAR_14, "r")) == ((void*)0)) {
   FUNC_3("skipping library %s: %s\n",
       VAR_14, FUNC_15(VAR_7));
   continue;
  }




  for (VAR_17 = FUNC_6(&VAR_8->dt_lib_dep); VAR_17 != ((void*)0);
      VAR_17 = FUNC_6(VAR_17)) {
   VAR_12 = FUNC_16(VAR_17->dtld_library, '/');

   FUNC_0(VAR_12 != ((void*)0));
   if (FUNC_14(VAR_12 + 1, VAR_10->d_name) == 0)
    break;
  }

  if (VAR_17 != ((void*)0)) {
   FUNC_3("skipping library %s, already processed "
       "library with the same name: %s", VAR_10->d_name,
       VAR_17->dtld_library);
   (void) FUNC_9(VAR_15);
   continue;
  }

  VAR_8->dt_filetag = VAR_14;
  if (FUNC_5(VAR_8, &VAR_8->dt_lib_dep, VAR_14) != 0) {
   (void) FUNC_9(VAR_15);
   return (-1);
  }

  VAR_16 = FUNC_2(VAR_8, VAR_3,
      VAR_2, ((void*)0),
      VAR_1 | VAR_0, 0, ((void*)0), VAR_15, ((void*)0));

  if (VAR_16 != ((void*)0) && VAR_8->dt_errno &&
      (VAR_8->dt_errno != VAR_5 ||
      VAR_8->dt_errtag != FUNC_4(VAR_4))) {
   (void) FUNC_9(VAR_15);
   return (-1);
  }

  if (VAR_8->dt_errno)
   FUNC_3("error parsing library %s: %s\n",
       VAR_14, FUNC_7(VAR_8, FUNC_8(VAR_8)));

  (void) FUNC_9(VAR_15);
  VAR_8->dt_filetag = ((void*)0);
 }

 (void) FUNC_1(VAR_13);

 return (0);
}
