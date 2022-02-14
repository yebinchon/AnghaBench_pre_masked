
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sockaddr_u ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int ,size_t) ;
 char* FUNC_6 (int ,size_t) ;

const char *
FUNC_7(
 sockaddr_u * VAR_1,
 size_t VAR_2,
 int VAR_3
 )
{
 const char * VAR_4;

 if (!VAR_0 || FUNC_1(VAR_1)) {
  if (VAR_3)
   VAR_4 = FUNC_5(FUNC_4(VAR_1), VAR_2);
  else
   VAR_4 = FUNC_6(FUNC_4(VAR_1), VAR_2);
 } else if (FUNC_0(VAR_1)) {
  VAR_4 = FUNC_2(VAR_1);
 } else {
  VAR_4 = FUNC_6(FUNC_3(VAR_1), VAR_2);
 }
 return VAR_4;
}
