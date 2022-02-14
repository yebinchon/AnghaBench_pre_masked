
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** opt; char* val; } ;
typedef TYPE_1__ opt_apply ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2(opt_apply *VAR_1, int VAR_2)
{
  if (*VAR_1->opt) {
    *VAR_1->opt = FUNC_1(*VAR_1->opt, VAR_2);
  } else if (VAR_1->val) {





    char *VAR_3 = FUNC_1(VAR_1->val, VAR_0);
    *VAR_1->opt = FUNC_1(VAR_3, VAR_2);
    FUNC_0(VAR_3);
  }
}
