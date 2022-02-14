
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sl_cur; char** sl_str; } ;
typedef TYPE_1__ StringList ;


 scalar_t__ FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 () ;

int
FUNC_3(void)
{
 StringList *VAR_0;
 char VAR_1[] = "test";

 if ((VAR_0 = FUNC_2()) == ((void*)0))
  return 1;
 if (FUNC_0(VAR_0, VAR_1))
  return 2;
 if (VAR_0->sl_cur != 1)
  return 3;
 if (VAR_0->sl_str[0] != VAR_1)
  return 4;

 FUNC_1(VAR_0, 0);
 return 0;
}
