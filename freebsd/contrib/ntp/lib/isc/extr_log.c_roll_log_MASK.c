
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int new ;
typedef scalar_t__ isc_result_t ;
typedef int isc_logchannel_t ;
typedef int current ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *,int*) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,int,char*,char const*,...) ;
 int FUNC_7 (int ,char*,char const*,...) ;

__attribute__((used)) static isc_result_t
FUNC_8(isc_logchannel_t *VAR_7) {
 int VAR_8, VAR_9, VAR_10;
 char VAR_11[VAR_6 + 1];
 char VAR_12[VAR_6 + 1];
 const char *VAR_13;
 isc_result_t VAR_14;






 if (FUNC_1(VAR_7) == VAR_1)
  return (VAR_4);

 VAR_13 = FUNC_0(VAR_7);







 VAR_14 = FUNC_2(VAR_7, &VAR_10);
 if (VAR_14 != VAR_4)
  return (VAR_14);
 if (FUNC_1(VAR_7) == VAR_0 ||
     FUNC_1(VAR_7) > VAR_10)
  ;
 else





  while (--VAR_10 >= FUNC_1(VAR_7)) {
   VAR_9 = FUNC_6(VAR_11, sizeof(VAR_11), "%s.%d",
         VAR_13, VAR_10);
   if (VAR_9 >= (int)sizeof(VAR_11) || VAR_9 < 0)
    VAR_14 = VAR_3;
   else
    VAR_14 = FUNC_3(VAR_11);
   if (VAR_14 != VAR_4 &&
       VAR_14 != VAR_2)
    FUNC_7(VAR_5,
           "unable to remove log file '%s.%d': %s",
           VAR_13, VAR_10,
           FUNC_5(VAR_14));
  }

 for (VAR_8 = VAR_10; VAR_8 > 0; VAR_8--) {
  VAR_14 = VAR_4;
  VAR_9 = FUNC_6(VAR_11, sizeof(VAR_11), "%s.%d", VAR_13, VAR_8 - 1);
  if (VAR_9 >= (int)sizeof(VAR_11) || VAR_9 < 0)
   VAR_14 = VAR_3;
  if (VAR_14 == VAR_4) {
   VAR_9 = FUNC_6(VAR_12, sizeof(VAR_12), "%s.%d", VAR_13, VAR_8);
   if (VAR_9 >= (int)sizeof(VAR_12) || VAR_9 < 0)
    VAR_14 = VAR_3;
  }
  if (VAR_14 == VAR_4)
   VAR_14 = FUNC_4(VAR_11, VAR_12);
  if (VAR_14 != VAR_4 &&
      VAR_14 != VAR_2)
   FUNC_7(VAR_5,
          "unable to rename log file '%s.%d' to "
          "'%s.%d': %s", VAR_13, VAR_8 - 1, VAR_13, VAR_8,
          FUNC_5(VAR_14));
 }

 if (FUNC_1(VAR_7) != 0) {
  VAR_9 = FUNC_6(VAR_12, sizeof(VAR_12), "%s.0", VAR_13);
  if (VAR_9 >= (int)sizeof(VAR_12) || VAR_9 < 0)
   VAR_14 = VAR_3;
  else
   VAR_14 = FUNC_4(VAR_13, VAR_12);
  if (VAR_14 != VAR_4 &&
      VAR_14 != VAR_2)
   FUNC_7(VAR_5,
          "unable to rename log file '%s' to '%s.0': %s",
          VAR_13, VAR_13, FUNC_5(VAR_14));
 } else {
  VAR_14 = FUNC_3(VAR_13);
  if (VAR_14 != VAR_4 &&
      VAR_14 != VAR_2)
   FUNC_7(VAR_5, "unable to remove log file '%s': %s",
          VAR_13, FUNC_5(VAR_14));
 }

 return (VAR_4);
}
