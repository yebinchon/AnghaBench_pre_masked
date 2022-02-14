
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sockaddr_u ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__* FUNC_2 (int const*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int const*) ;

__attribute__((used)) static int
FUNC_5(
 const sockaddr_u * VAR_0,
 const sockaddr_u * VAR_1
 )
{
 int VAR_2;

 FUNC_3(FUNC_0(VAR_0) == FUNC_0(VAR_1));

 if (FUNC_1(VAR_0)) {
  if (FUNC_4(VAR_0) < FUNC_4(VAR_1))
   return -1;
  else if (FUNC_4(VAR_0) == FUNC_4(VAR_1))
   return 0;
  else
   return 1;
 }

 for (VAR_2 = 0; VAR_2 < (int)sizeof(FUNC_2(VAR_0)); VAR_2++) {
  if (FUNC_2(VAR_0)[VAR_2] < FUNC_2(VAR_1)[VAR_2])
   return -1;
  else if (FUNC_2(VAR_0)[VAR_2] > FUNC_2(VAR_1)[VAR_2])
   return 1;
 }

 return 0;
}
