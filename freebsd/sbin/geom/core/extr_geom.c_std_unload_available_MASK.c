
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;


 char* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,char*) ;

__attribute__((used)) static int
FUNC_2(void)
{
 char VAR_1[64];
 int VAR_2;

 FUNC_1(VAR_1, sizeof(VAR_1), "geom_%s", VAR_0);
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 >= 0)
  return (1);
 return (0);
}
