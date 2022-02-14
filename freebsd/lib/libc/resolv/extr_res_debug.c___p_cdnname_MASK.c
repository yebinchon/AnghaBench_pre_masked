
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int const*,int const*,int const*,char*,int) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char,int *) ;

const u_char *
FUNC_3(const u_char *VAR_1, const u_char *VAR_2, int VAR_3, FILE *VAR_4) {
 char VAR_5[VAR_0];
 int VAR_6;

 if ((VAR_6 = FUNC_0(VAR_2, VAR_2 + VAR_3, VAR_1, VAR_5, sizeof VAR_5)) < 0)
  return (((void*)0));
 if (VAR_5[0] == '\0')
  FUNC_2('.', VAR_4);
 else
  FUNC_1(VAR_5, VAR_4);
 return (VAR_1 + VAR_6);
}
