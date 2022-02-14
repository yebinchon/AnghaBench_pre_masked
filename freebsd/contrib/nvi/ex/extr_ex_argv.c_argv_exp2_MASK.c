
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCR ;
typedef int EXCMD ;
typedef int CHAR_T ;


 int FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (int *,int *,size_t,int) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_4 (int *,char*,size_t,int *) ;
 int FUNC_5 (int *,int *,int *,size_t) ;
 scalar_t__ FUNC_6 (int *,int *,int *,size_t,int *,size_t*,int **,size_t*,int ) ;
 int FUNC_7 (int *,int **,size_t*,size_t*) ;
 scalar_t__ FUNC_8 (int *,int ,int) ;

int
FUNC_9(SCR *VAR_4, EXCMD *VAR_5, CHAR_T *VAR_6, size_t VAR_7)
{
 size_t VAR_8, VAR_9, VAR_10;
 int VAR_11;
 CHAR_T *VAR_12, *VAR_13;

 FUNC_1(VAR_4, VAR_12, VAR_8, 512);



 FUNC_3(VAR_12, FUNC_0("echo "), (FUNC_0(FUNC_0("echo ")) - 1));
 VAR_13 = VAR_12 + (FUNC_0(FUNC_0("echo ")) - 1);
 VAR_9 = (FUNC_0(FUNC_0("echo ")) - 1);





 if (FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7, VAR_13, &VAR_9, &VAR_12, &VAR_8, 0)) {
  VAR_11 = 1;
  goto err;
 }
 if (FUNC_8(VAR_4, VAR_0, 1) || FUNC_8(VAR_4, VAR_1, 1))
  VAR_10 = 0;
 else {
  VAR_13 = VAR_12 + (FUNC_0(FUNC_0("echo ")) - 1);
  VAR_10 = VAR_9 - (FUNC_0(FUNC_0("echo ")) - 1);
  for (; VAR_10 > 0; --VAR_10, ++VAR_13)
   if (FUNC_2(VAR_4, *VAR_13))
    break;
 }
 switch (VAR_10) {
 case 0:
  VAR_13 = VAR_12 + (FUNC_0(FUNC_0("echo ")) - 1);
  VAR_9 -= (FUNC_0(FUNC_0("echo ")) - 1);
  VAR_11 = FUNC_5(VAR_4, VAR_5, VAR_13, VAR_9);
  break;
 default:
  if (FUNC_7(VAR_4, &VAR_12, &VAR_8, &VAR_9)) {
   VAR_11 = 1;
   goto err;
  }
  VAR_13 = VAR_12;
  VAR_11 = FUNC_5(VAR_4, VAR_5, VAR_13, VAR_9);
  break;
 }

err: FUNC_0(VAR_4, VAR_12, VAR_8);
 return (VAR_11);
}
