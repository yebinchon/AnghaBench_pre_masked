
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 char* VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 char* FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (char*,char*) ;

int
FUNC_6(int VAR_2, char **VAR_3)
{
 char *VAR_4, *VAR_5;

 if (VAR_2 < 2)
  FUNC_1("missing filename");

 VAR_1 = 0;





 VAR_4 = VAR_2 > 2 && FUNC_5(VAR_3[1], "--") == 0 ? VAR_3[2] : VAR_3[1];

 VAR_5 = FUNC_2(VAR_4);
 FUNC_4(VAR_5, 1);
 VAR_0 = VAR_5;
 FUNC_0(0);
 FUNC_3();
 return VAR_1;
}
