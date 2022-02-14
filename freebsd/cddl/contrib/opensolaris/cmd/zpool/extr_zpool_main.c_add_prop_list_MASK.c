
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zpool_prop_t ;
typedef scalar_t__ zfs_prop_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,char const*,char*) ;
 scalar_t__ FUNC_3 (int **,int ,int ) ;
 scalar_t__ FUNC_4 (int *,char const*) ;
 scalar_t__ FUNC_5 (int *,char const*,char**) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (char const*) ;
 char* FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char const*) ;
 char* FUNC_11 (scalar_t__) ;

__attribute__((used)) static int
FUNC_12(const char *VAR_6, char *VAR_7, nvlist_t **VAR_8,
    boolean_t VAR_9)
{
 zpool_prop_t VAR_10 = VAR_4;
 zfs_prop_t VAR_11;
 nvlist_t *VAR_12;
 const char *VAR_13;
 char *VAR_14;

 if (*VAR_8 == ((void*)0) &&
     FUNC_3(VAR_8, VAR_0, 0) != 0) {
  (void) FUNC_0(VAR_5,
      "%s", FUNC_1("internal error: out of memory\n"));
  return (1);
 }

 VAR_12 = *VAR_8;

 if (VAR_9) {
  const char *VAR_15 = FUNC_11(VAR_3);

  if ((VAR_10 = FUNC_9(VAR_6)) == VAR_4 &&
      !FUNC_10(VAR_6)) {
   (void) FUNC_0(VAR_5, FUNC_1("property '%s' is "
       "not a valid pool property\n"), VAR_6);
   return (2);
  }





  if ((VAR_10 == VAR_2 && FUNC_10(VAR_6) &&
      FUNC_4(VAR_12, VAR_15)) ||
      (VAR_10 == VAR_3 &&
      FUNC_6(VAR_12))) {
   (void) FUNC_0(VAR_5, "%s", FUNC_1("'feature@' and "
       "'version' properties cannot be specified "
       "together\n"));
   return (2);
  }


  if (FUNC_10(VAR_6))
   VAR_13 = VAR_6;
  else
   VAR_13 = FUNC_11(VAR_10);
 } else {
  if ((VAR_11 = FUNC_7(VAR_6)) != VAR_4) {
   VAR_13 = FUNC_8(VAR_11);
  } else {
   VAR_13 = VAR_6;
  }
 }

 if (FUNC_5(VAR_12, VAR_13, &VAR_14) == 0 &&
     VAR_10 != VAR_1) {
  (void) FUNC_0(VAR_5, FUNC_1("property '%s' "
      "specified multiple times\n"), VAR_6);
  return (2);
 }

 if (FUNC_2(VAR_12, VAR_13, VAR_7) != 0) {
  (void) FUNC_0(VAR_5, "%s", FUNC_1("internal "
      "error: out of memory\n"));
  return (1);
 }

 return (0);
}
