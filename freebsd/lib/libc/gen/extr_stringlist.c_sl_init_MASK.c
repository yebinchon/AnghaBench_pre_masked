
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sl_max; int * sl_str; scalar_t__ sl_cur; } ;
typedef TYPE_1__ StringList ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 void* FUNC_1 (int) ;

StringList *
FUNC_2(void)
{
 StringList *VAR_1;

 VAR_1 = FUNC_1(sizeof(StringList));
 if (VAR_1 == ((void*)0))
  FUNC_0(1, "stringlist: %m");

 VAR_1->sl_cur = 0;
 VAR_1->sl_max = VAR_0;
 VAR_1->sl_str = FUNC_1(VAR_1->sl_max * sizeof(char *));
 if (VAR_1->sl_str == ((void*)0))
  FUNC_0(1, "stringlist: %m");
 return VAR_1;
}
