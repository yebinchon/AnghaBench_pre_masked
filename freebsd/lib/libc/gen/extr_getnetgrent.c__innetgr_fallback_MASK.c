
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* member_0; int member_1; } ;
typedef TYPE_1__ ns_src ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int ,char*,TYPE_1__ const*,...) ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 int VAR_9 ;
 char* FUNC_2 (size_t) ;
 char* FUNC_3 (char*,size_t) ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int
FUNC_5(void *VAR_11, void *VAR_12, const char *VAR_13, const char *VAR_14,
    const char *VAR_15, const char *VAR_16)
{
 const ns_src VAR_17[] = {
  { VAR_12, VAR_6 },
  { ((void*)0), 0 },
 };
 char *VAR_18, *VAR_19, *VAR_20;
 char *VAR_21;
 size_t VAR_22;
 int VAR_23, VAR_24;

 if (VAR_13 == ((void*)0) || VAR_13[0] == '\0')
  return (VAR_5);

 VAR_22 = VAR_1;
 VAR_21 = FUNC_2(VAR_22);
 if (VAR_21 == ((void*)0))
  return (VAR_7);

 *(int *)VAR_11 = 0;

 (void)FUNC_0(((void*)0), VAR_10, VAR_3, "setnetgrent",
     VAR_17, VAR_13);

 for (;;) {
  do {
   VAR_24 = 0;
   VAR_23 = FUNC_0(((void*)0), VAR_9, VAR_3,
       "getnetgrent_r", VAR_17, &VAR_18, &VAR_19, &VAR_20, VAR_21, VAR_22,
       &VAR_24);
   if (VAR_23 != VAR_6 && VAR_24 == VAR_0) {
    VAR_22 *= 2;
    if (VAR_22 > VAR_2 ||
        (VAR_21 = FUNC_3(VAR_21, VAR_22)) == ((void*)0))
     goto out;
   }
  } while (VAR_23 != VAR_6 && VAR_24 == VAR_0);

  if (VAR_23 != VAR_6) {
   if (VAR_23 == VAR_4 && VAR_24 == 0)
    VAR_23 = VAR_6;
   break;
  }

  if ((VAR_14 == ((void*)0) || VAR_18 == ((void*)0) || FUNC_4(VAR_14, VAR_18) == 0) &&
      (VAR_15 == ((void*)0) || VAR_19 == ((void*)0) || FUNC_4(VAR_15, VAR_19) == 0) &&
      (VAR_16 == ((void*)0) || VAR_20 == ((void*)0) || FUNC_4(VAR_16, VAR_20) == 0)) {
   *(int *)VAR_11 = 1;
   break;
  }
 }

out:
 FUNC_1(VAR_21);
 (void)FUNC_0(((void*)0), VAR_8, VAR_3, "endnetgrent",
     VAR_17);
 return (VAR_23);
}
