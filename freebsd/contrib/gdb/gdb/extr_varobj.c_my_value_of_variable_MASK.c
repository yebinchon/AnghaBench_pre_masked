
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct varobj {TYPE_2__* root; } ;
struct TYPE_4__ {TYPE_1__* lang; } ;
struct TYPE_3__ {char* (* value_of_variable ) (struct varobj*) ;} ;


 char* FUNC_0 (struct varobj*) ;

__attribute__((used)) static char *
FUNC_1 (struct varobj *VAR_0)
{
  return (*VAR_0->root->lang->value_of_variable) (VAR_0);
}
