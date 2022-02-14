
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 size_t FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int,char*,size_t) ;

int
FUNC_5(int VAR_3, char *VAR_4[])
{
 char VAR_5[VAR_0];
 int VAR_6, VAR_7;
 size_t VAR_8 = FUNC_1(VAR_4[1]);

 if ((VAR_6 = FUNC_2(VAR_2, VAR_1)) == -1)
  FUNC_0();
 if ((VAR_7 = FUNC_4(VAR_6, VAR_5, VAR_8)) == -1)
  FUNC_0();
 (void)FUNC_3("%s\n", VAR_5);
 return (0);
}
