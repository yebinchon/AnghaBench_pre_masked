
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,char*,char const*,...) ;
 int FUNC_1 (char,int ) ;
 scalar_t__ FUNC_2 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 char* FUNC_5 (scalar_t__,scalar_t__ const) ;
 char* FUNC_6 (scalar_t__,scalar_t__,int) ;
 char* FUNC_7 (scalar_t__,scalar_t__ const) ;
 int VAR_4 ;
 char* FUNC_8 (scalar_t__ const) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_5 ;
 char* FUNC_11 (char const*,int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_12(bool VAR_7)
{
 if (!VAR_4 || VAR_6 < VAR_0)
  return;

 uint64_t VAR_8;
 uint64_t VAR_9;
 uint64_t VAR_10;
 FUNC_4(&VAR_8, &VAR_9, &VAR_10);






 if (!VAR_7 && !VAR_2
   && (VAR_9 == 0 || VAR_10 == 0))
  return;

 VAR_2 = 0;

 const uint64_t VAR_11 = FUNC_2();

 FUNC_9();




 if (VAR_3) {
  const char *VAR_12[5] = {
   VAR_7 ? "100 %" : FUNC_3(VAR_8),
   FUNC_6(VAR_9, VAR_10, 1),
   FUNC_7(VAR_10, VAR_11),
   FUNC_8(VAR_11),
   VAR_7 ? "" : FUNC_5(VAR_8, VAR_11),
  };
  FUNC_0(VAR_5, "\r %*s %*s   %*s %10s   %10s\n",
    FUNC_11(VAR_12[0], 6), VAR_12[0],
    FUNC_11(VAR_12[1], 35), VAR_12[1],
    FUNC_11(VAR_12[2], 9), VAR_12[2],
    VAR_12[3],
    VAR_12[4]);
 } else {

  FUNC_0(VAR_5, "%s: ", VAR_1);


  if (!VAR_7) {


   const char *VAR_13 = FUNC_3(VAR_8);
   if (VAR_13[0] != '-')
    FUNC_0(VAR_5, "%s, ", VAR_13);
  }


  FUNC_0(VAR_5, "%s", FUNC_6(
    VAR_9, VAR_10, 1));


  const char *VAR_14 = FUNC_7(VAR_10, VAR_11);
  if (VAR_14[0] != '\0')
   FUNC_0(VAR_5, ", %s", VAR_14);

  const char *VAR_15 = FUNC_8(VAR_11);
  if (VAR_15[0] != '\0')
   FUNC_0(VAR_5, ", %s", VAR_15);

  FUNC_1('\n', VAR_5);
 }

 FUNC_10();

 return;
}
