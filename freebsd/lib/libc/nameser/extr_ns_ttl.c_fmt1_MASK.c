
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int
FUNC_2(int VAR_0, char VAR_1, char **VAR_2, size_t *VAR_3) {
 char VAR_4[50];
 size_t VAR_5;

 VAR_5 = FUNC_0((VAR_4, "%d%c", VAR_0, VAR_1));
 if (VAR_5 + 1 > *VAR_3)
  return (-1);
 FUNC_1(*VAR_2, VAR_4);
 *VAR_2 += VAR_5;
 *VAR_3 -= VAR_5;
 return (0);
}
