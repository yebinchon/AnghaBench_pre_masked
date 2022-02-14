
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char**,int) ;

mode_t
FUNC_2(char *VAR_2)
{
 int VAR_3, VAR_4;
 char *VAR_5;

 VAR_3 = 0;
 VAR_4 = -1;
 if (*VAR_2 >= '0' && *VAR_2 <= '7') {
  VAR_3 = 1;
  VAR_4 = FUNC_1(VAR_1, &VAR_5, 8);
 }
 if (!VAR_3 || VAR_4 < 0 || *VAR_5)
  FUNC_0(VAR_0, "invalid file mode: %s", VAR_2);
 return (VAR_4);
}
