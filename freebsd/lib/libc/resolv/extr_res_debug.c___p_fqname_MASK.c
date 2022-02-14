
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *) ;
 int * FUNC_1 (int const*,int const*,int ,char*,int) ;

const u_char *
FUNC_2(const u_char *VAR_2, const u_char *VAR_3, FILE *VAR_4) {
 char VAR_5[VAR_1];
 const u_char *VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_0, VAR_5, sizeof VAR_5);
 if (VAR_6 == ((void*)0))
  return (((void*)0));
 FUNC_0(VAR_5, VAR_4);
 return (VAR_6);
}
