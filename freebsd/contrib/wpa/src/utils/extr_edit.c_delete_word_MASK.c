
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_3;

 FUNC_0();
 VAR_3 = VAR_2;
 while (VAR_3 > 0 && VAR_0[VAR_3 - 1] == ' ')
  VAR_3--;
 while (VAR_3 > 0 && VAR_0[VAR_3 - 1] != ' ')
  VAR_3--;
 FUNC_2(VAR_0 + VAR_3, VAR_0 + VAR_2, VAR_1 - VAR_2);
 VAR_1 -= VAR_2 - VAR_3;
 VAR_2 = VAR_3;
 FUNC_1();
}
