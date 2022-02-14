
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(void)
{
 while (VAR_2 < VAR_1 && VAR_0[VAR_2] == ' ')
  VAR_2++;
 while (VAR_2 < VAR_1 && VAR_0[VAR_2] != ' ')
  VAR_2++;
 FUNC_0();
}
