
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int dtrace_prog_t ;
struct TYPE_13__ {int dtld_loaded; int * dtld_library; } ;
struct TYPE_12__ {scalar_t__ dt_errno; scalar_t__ dt_errtag; int * dt_filetag; TYPE_2__ dt_lib_dep_sorted; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef TYPE_2__ dt_lib_depend_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int * FUNC_8 (TYPE_1__*,int *,int ,int ,int *) ;
 int VAR_4 ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,char*) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(dtrace_hdl_t *VAR_5)
{
 dtrace_prog_t *VAR_6;
 FILE *VAR_7;
 dt_lib_depend_t *VAR_8;






 if (FUNC_3(VAR_5) == -1)
  goto err;

 for (VAR_8 = FUNC_4(&VAR_5->dt_lib_dep_sorted); VAR_8 != ((void*)0);
     VAR_8 = FUNC_4(VAR_8)) {

  if ((VAR_7 = FUNC_10(VAR_8->dtld_library, "r")) == ((void*)0)) {
   FUNC_0("skipping library %s: %s\n",
       VAR_8->dtld_library, FUNC_11(VAR_4));
   continue;
  }

  VAR_5->dt_filetag = VAR_8->dtld_library;
  VAR_6 = FUNC_8(VAR_5, VAR_7, VAR_1, 0, ((void*)0));
  (void) FUNC_9(VAR_7);
  VAR_5->dt_filetag = ((void*)0);

  if (VAR_6 == ((void*)0) && (VAR_5->dt_errno != VAR_3 ||
      VAR_5->dt_errtag != FUNC_1(VAR_2)))
   goto err;

  if (VAR_6 == ((void*)0)) {
   FUNC_0("skipping library %s: %s\n",
       VAR_8->dtld_library,
       FUNC_6(VAR_5, FUNC_7(VAR_5)));
  } else {
   VAR_8->dtld_loaded = VAR_0;
   FUNC_5(VAR_5, VAR_6);
  }
 }

 FUNC_2(VAR_5);
 return (0);

err:
 FUNC_2(VAR_5);
 return (-1);
}
