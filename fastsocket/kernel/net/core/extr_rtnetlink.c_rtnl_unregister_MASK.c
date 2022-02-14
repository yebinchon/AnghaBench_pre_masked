
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * dumpit; int * doit; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_1__** VAR_2 ;

int FUNC_2(int VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_3 < 0 || VAR_3 > VAR_1);
 VAR_5 = FUNC_1(VAR_4);

 if (VAR_2[VAR_3] == ((void*)0))
  return -VAR_0;

 VAR_2[VAR_3][VAR_5].doit = ((void*)0);
 VAR_2[VAR_3][VAR_5].dumpit = ((void*)0);

 return 0;
}
