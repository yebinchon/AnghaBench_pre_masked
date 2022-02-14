
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,char*,int) ;

int
FUNC_4(char *VAR_1, int VAR_2)
{
 char VAR_3[30];
 int VAR_4, VAR_5, VAR_6;

 (void)FUNC_3(VAR_3, sizeof (VAR_3), "R%d\n", VAR_2);
 VAR_4 = FUNC_1("read", VAR_3);
 if (VAR_4 < 0)

  return (VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5 += VAR_6) {
  VAR_6 = FUNC_0(VAR_0, VAR_1+VAR_5, VAR_4 - VAR_5);
  if (VAR_6 <= 0)
   FUNC_2(0);
 }
 return (VAR_4);
}
