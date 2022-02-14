
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef char const* u_longlong_t ;
struct ps_prochandle {int dummy; } ;
struct TYPE_12__ {int pr_mflags; } ;
typedef TYPE_1__ prmap_t ;
typedef scalar_t__ pid_t ;
typedef int objname ;
typedef int name ;
struct TYPE_13__ {scalar_t__* dt_options; int * dt_vector; } ;
typedef TYPE_2__ dtrace_hdl_t ;
typedef char* caddr_t ;
typedef int c ;
struct TYPE_14__ {scalar_t__ st_value; } ;
typedef TYPE_3__ GElf_Sym ;
typedef int FILE ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_2 (struct ps_prochandle*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct ps_prochandle*,scalar_t__,char*,int,TYPE_3__*) ;
 scalar_t__ FUNC_4 (struct ps_prochandle*,scalar_t__,char*,int) ;
 int VAR_6 ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*,int *,char const*,...) ;
 struct ps_prochandle* FUNC_7 (TYPE_2__*,scalar_t__,int,int ) ;
 int FUNC_8 (TYPE_2__*,struct ps_prochandle*) ;
 int FUNC_9 (TYPE_2__*,struct ps_prochandle*) ;
 int FUNC_10 (TYPE_2__*,struct ps_prochandle*) ;
 int FUNC_11 (char*,int,char*,char const*,...) ;
 scalar_t__ FUNC_12 (char const*) ;

int
FUNC_13(dtrace_hdl_t *VAR_7, FILE *VAR_8, const char *VAR_9,
    caddr_t VAR_10, uint64_t VAR_11)
{

 uint64_t *VAR_12 = (uint64_t *)VAR_10;
 uint32_t VAR_13 = FUNC_0(VAR_11);
 uint32_t VAR_14 = FUNC_1(VAR_11);
 const char *VAR_15 = VAR_10 + (VAR_13 + 1) * sizeof (uint64_t);
 const char *VAR_16 = VAR_14 ? VAR_15 : ((void*)0);
 int VAR_17 = 0;

 char VAR_18[VAR_3], VAR_19[VAR_3], VAR_20[VAR_3 * 2];
 struct ps_prochandle *VAR_21;
 GElf_Sym VAR_22;
 int VAR_23, VAR_24;
 pid_t VAR_25;

 if (VAR_13 == 0)
  return (0);

 VAR_25 = (pid_t)*VAR_12++;

 if (FUNC_6(VAR_7, VAR_8, "\n") < 0)
  return (-1);

 if (VAR_9 == ((void*)0))
  VAR_9 = "%s";

 if (VAR_7->dt_options[VAR_0] != VAR_1)
  VAR_24 = (int)VAR_7->dt_options[VAR_0];
 else
  VAR_24 = VAR_6;






 if (VAR_7->dt_vector == ((void*)0))
  VAR_21 = FUNC_7(VAR_7, VAR_25, VAR_5 | VAR_4, 0);
 else
  VAR_21 = ((void*)0);

 if (VAR_21 != ((void*)0))
  FUNC_8(VAR_7, VAR_21);

 for (VAR_23 = 0; VAR_23 < VAR_13 && VAR_12[VAR_23] != 0; VAR_23++) {
  const prmap_t *VAR_26;

  if ((VAR_17 = FUNC_6(VAR_7, VAR_8, "%*s", VAR_24, "")) < 0)
   break;

  if (VAR_21 != ((void*)0) && FUNC_3(VAR_21, VAR_12[VAR_23],
      VAR_18, sizeof (VAR_18), &VAR_22) == 0) {
   (void) FUNC_4(VAR_21, VAR_12[VAR_23], VAR_19, sizeof (VAR_19));

   if (VAR_12[VAR_23] > VAR_22.st_value) {
    (void) FUNC_11(VAR_20, sizeof (VAR_20),
        "%s`%s+0x%llx", FUNC_5(VAR_19), VAR_18,
        (u_longlong_t)(VAR_12[VAR_23] - VAR_22.st_value));
   } else {
    (void) FUNC_11(VAR_20, sizeof (VAR_20),
        "%s`%s", FUNC_5(VAR_19), VAR_18);
   }
  } else if (VAR_16 != ((void*)0) && VAR_16[0] != '\0' && VAR_16[0] != '@' &&
      (VAR_21 != ((void*)0) && ((VAR_26 = FUNC_2(VAR_21, VAR_12[VAR_23])) == ((void*)0) ||
      (VAR_26->pr_mflags & VAR_2)))) {
   (void) FUNC_11(VAR_20, sizeof (VAR_20), "%s", VAR_16);
  } else {
   if (VAR_21 != ((void*)0) && FUNC_4(VAR_21, VAR_12[VAR_23], VAR_19,
       sizeof (VAR_19)) != 0) {
    (void) FUNC_11(VAR_20, sizeof (VAR_20), "%s`0x%llx",
        FUNC_5(VAR_19), (u_longlong_t)VAR_12[VAR_23]);
   } else {
    (void) FUNC_11(VAR_20, sizeof (VAR_20), "0x%llx",
        (u_longlong_t)VAR_12[VAR_23]);
   }
  }

  if ((VAR_17 = FUNC_6(VAR_7, VAR_8, VAR_9, VAR_20)) < 0)
   break;

  if ((VAR_17 = FUNC_6(VAR_7, VAR_8, "\n")) < 0)
   break;

  if (VAR_16 != ((void*)0) && VAR_16[0] == '@') {






   if ((VAR_17 = FUNC_6(VAR_7, VAR_8, "%*s", VAR_24, "")) < 0)
    break;

   (void) FUNC_11(VAR_20, sizeof (VAR_20), "  [ %s ]", &VAR_16[1]);

   if ((VAR_17 = FUNC_6(VAR_7, VAR_8, VAR_9, VAR_20)) < 0)
    break;

   if ((VAR_17 = FUNC_6(VAR_7, VAR_8, "\n")) < 0)
    break;
  }

  if (VAR_16 != ((void*)0)) {
   VAR_16 += FUNC_12(VAR_16) + 1;
   if (VAR_16 - VAR_15 >= VAR_14)
    VAR_16 = ((void*)0);
  }
 }

 if (VAR_21 != ((void*)0)) {
  FUNC_10(VAR_7, VAR_21);
  FUNC_9(VAR_7, VAR_21);
 }

 return (VAR_17);
}
