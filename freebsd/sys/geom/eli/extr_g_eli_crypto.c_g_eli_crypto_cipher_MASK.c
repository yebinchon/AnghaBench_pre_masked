
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int iv ;
typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;




 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int *,int*) ;
 int FUNC_5 (int *,int const*,int *,int const*,int *,int) ;
 scalar_t__ FUNC_6 (int *,int *,int*,int *,size_t) ;
 int * FUNC_7 () ;
 int * FUNC_8 () ;
 int * FUNC_9 () ;
 int * FUNC_10 () ;
 int * FUNC_11 () ;
 int * FUNC_12 () ;
 int * FUNC_13 () ;
 int * FUNC_14 () ;
 int * FUNC_15 () ;
 int FUNC_16 (int) ;
 int FUNC_17 (int *,int) ;

__attribute__((used)) static int
FUNC_18(u_int VAR_3, int VAR_4, u_char *VAR_5, size_t VAR_6,
    const u_char *VAR_7, size_t VAR_8)
{
 EVP_CIPHER_CTX *VAR_9;
 const EVP_CIPHER *VAR_10;
 u_char VAR_11[VAR_8];
 int VAR_12;

 FUNC_16(VAR_3 != VAR_0);

 switch (VAR_3) {
 case 128:
  VAR_10 = FUNC_15();
  break;
 case 131:
  switch (VAR_8) {
  case 128:
   VAR_10 = FUNC_7();
   break;
  case 192:
   VAR_10 = FUNC_8();
   break;
  case 256:
   VAR_10 = FUNC_9();
   break;
  default:
   return (VAR_1);
  }
  break;
 case 130:
  VAR_10 = FUNC_10();
  break;

 case 129:
  switch (VAR_8) {
  case 128:
   VAR_10 = FUNC_11();
   break;
  case 192:
   VAR_10 = FUNC_12();
   break;
  case 256:
   VAR_10 = FUNC_13();
   break;
  default:
   return (VAR_1);
  }
  break;

 case 132:
  VAR_10 = FUNC_14();
  break;
 default:
  return (VAR_1);
 }

 VAR_9 = FUNC_1();
 if (VAR_9 == ((void*)0))
  return (VAR_2);

 FUNC_5(VAR_9, VAR_10, ((void*)0), ((void*)0), ((void*)0), VAR_4);
 FUNC_2(VAR_9, VAR_8 / 8);
 FUNC_3(VAR_9, 0);
 FUNC_17(VAR_11, sizeof(VAR_11));
 FUNC_5(VAR_9, ((void*)0), ((void*)0), VAR_7, VAR_11, VAR_4);

 if (FUNC_6(VAR_9, VAR_5, &VAR_12, VAR_5, VAR_6) == 0) {
  FUNC_0(VAR_9);
  return (VAR_1);
 }
 FUNC_16(VAR_12 == (int)VAR_6);

 if (FUNC_4(VAR_9, VAR_5 + VAR_12, &VAR_12) == 0) {
  FUNC_0(VAR_9);
  return (VAR_1);
 }
 FUNC_16(VAR_12 == 0);

 FUNC_0(VAR_9);
 return (0);
}
