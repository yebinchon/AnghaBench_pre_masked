
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int token_t ;


 int FUNC_0 (int *,char const*,size_t) ;
 int FUNC_1 (int *,char) ;

 size_t VAR_0 ;

 size_t VAR_1 ;

 size_t VAR_2 ;

 size_t VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int *,int) ;
 int VAR_6 ;

token_t *
FUNC_3(char VAR_7, char VAR_8, char VAR_9, const char *VAR_10)
{
 token_t *VAR_11;
 u_char *VAR_12 = ((void*)0);
 size_t VAR_13, VAR_14;


 switch (VAR_8) {
 case 131:

  VAR_13 = VAR_0;
  break;

 case 128:
  VAR_13 = VAR_3;
  break;

 case 130:

  VAR_13 = VAR_1;
  break;

 case 129:
  VAR_13 = VAR_2;
  break;

 default:
  VAR_6 = VAR_5;
  return (((void*)0));
 }

 VAR_14 = VAR_13 * VAR_9;

 FUNC_2(VAR_11, VAR_12, 4 * sizeof(u_char) + VAR_14);
 if (VAR_11 == ((void*)0))
  return (((void*)0));





 FUNC_1(VAR_12, VAR_4);
 FUNC_1(VAR_12, VAR_7);
 FUNC_1(VAR_12, VAR_8);
 FUNC_1(VAR_12, VAR_9);
 FUNC_0(VAR_12, VAR_10, VAR_14);

 return (VAR_11);
}
