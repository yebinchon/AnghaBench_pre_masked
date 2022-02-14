
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sockaddr_u ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(
 sockaddr_u * VAR_6,
 int VAR_7
 )
{
 if (!FUNC_1(VAR_6) && FUNC_0(VAR_6)) {
  FUNC_4(VAR_0,
   "attempt to configure invalid address %s",
   FUNC_5(VAR_6));
  return 0;
 }





 if ((VAR_4 == VAR_7 || VAR_2 == VAR_7 || VAR_3 == VAR_7)
     && FUNC_3(VAR_6)) {
  FUNC_4(VAR_0,
   "attempt to configure invalid address %s",
   FUNC_5(VAR_6));
  return 0;
 }
 if (VAR_1 == VAR_7 && !FUNC_3(VAR_6)) {
  FUNC_4(VAR_0,
   "attempt to configure invalid address %s",
   FUNC_5(VAR_6));
  return 0;
 }

 if (FUNC_2(VAR_6) && !VAR_5)
  return 0;


 return 1;
}
