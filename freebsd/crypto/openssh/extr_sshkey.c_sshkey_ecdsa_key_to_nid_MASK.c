
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
typedef int EC_KEY ;
typedef int EC_GROUP ;
typedef int BN_CTX ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int const*,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int const*) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_9(EC_KEY *VAR_4)
{
 EC_GROUP *VAR_5;
 int VAR_6[] = {
  VAR_0,
  VAR_1,



  -1
 };
 int VAR_7;
 u_int VAR_8;
 BN_CTX *VAR_9;
 const EC_GROUP *VAR_10 = FUNC_7(VAR_4);
 if ((VAR_7 = FUNC_4(VAR_10)) > 0)
  return VAR_7;
 if ((VAR_9 = FUNC_1()) == ((void*)0))
  return -1;
 for (VAR_8 = 0; VAR_6[VAR_8] != -1; VAR_8++) {
  if ((VAR_5 = FUNC_5(VAR_6[VAR_8])) == ((void*)0)) {
   FUNC_0(VAR_9);
   return -1;
  }
  if (FUNC_2(VAR_10, VAR_5, VAR_9) == 0)
   break;
  FUNC_3(VAR_5);
 }
 FUNC_0(VAR_9);
 if (VAR_6[VAR_8] != -1) {

  FUNC_6(VAR_5, VAR_3);
  if (FUNC_8(VAR_4, VAR_5) != 1) {
   FUNC_3(VAR_5);
   return -1;
  }
 }
 return VAR_6[VAR_8];
}
