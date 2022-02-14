
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dtrace_probedesc_t ;
typedef int dtrace_hdl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int *,int *,int ,int *) ;
 int FUNC_6 (int *,char*,char*) ;
 scalar_t__ FUNC_7 (int *,int ,char*,int *) ;
 int FUNC_8 (int ,char*,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int,char**,char*) ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (char*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 char* FUNC_11 (char*,char) ;

int
FUNC_12(int VAR_12, char *VAR_13[])
{
 dtrace_probedesc_t VAR_14, *VAR_15 = ((void*)0);
 dtrace_hdl_t *VAR_16;
 int VAR_17, VAR_18;
 char *VAR_19;

 VAR_6 = VAR_13[0];

 if ((VAR_16 = FUNC_4(VAR_1, 0, &VAR_17)) == ((void*)0)) {
  (void) FUNC_8(VAR_11, "%s: failed to open dtrace: %s\n",
      VAR_6, FUNC_2(VAR_16, VAR_17));
  return (1);
 }

 while ((VAR_18 = FUNC_9(VAR_12, VAR_13, "evx:")) != -1) {
  switch (VAR_18) {
  case 'e':
   VAR_3++;
   break;
  case 'v':
   VAR_7++;
   break;
  case 'x':
   if ((VAR_19 = FUNC_11(VAR_8, '=')) != ((void*)0))
    *VAR_19++ = '\0';

   if (FUNC_6(VAR_16, VAR_8, VAR_19) != 0) {
    (void) FUNC_8(VAR_11, "%s: failed to set "
        "option -x %s: %s\n", VAR_6, VAR_8,
        FUNC_2(VAR_16, FUNC_3(VAR_16)));
    return (2);
   }
   break;

  default:
   (void) FUNC_8(VAR_11, "Usage: %s [-ev] "
       "[-x opt[=arg]] [probedesc]\n", VAR_6);
   return (2);
  }
 }

 VAR_13 += VAR_9;
 VAR_12 -= VAR_9;

 if (VAR_12 > 0) {
  if (FUNC_7(VAR_16, VAR_0, VAR_13[0], &VAR_14)) {
   (void) FUNC_8(VAR_11, "%s: invalid probe description "
       "%s: %s\n", VAR_6, VAR_13[0],
       FUNC_2(VAR_16, FUNC_3(VAR_16)));
   return (2);
  }
  VAR_15 = &VAR_14;
 }

 VAR_5 = FUNC_1(VAR_16);
 (void) FUNC_5(VAR_16, VAR_15, VAR_10, ((void*)0));
 FUNC_0(VAR_16);

 (void) FUNC_10("\nTotal probes: %d\n", VAR_2);
 (void) FUNC_10("Total errors: %d\n\n", VAR_4);

 return (VAR_4 != 0);
}
