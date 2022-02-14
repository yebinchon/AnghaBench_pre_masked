
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct varobj {TYPE_2__* root; } ;
struct value {int dummy; } ;
struct TYPE_4__ {TYPE_1__* lang; } ;
struct TYPE_3__ {struct value* (* value_of_child ) (struct varobj*,int) ;} ;


 scalar_t__ FUNC_0 (struct value*) ;
 int FUNC_1 (struct value*) ;
 struct value* FUNC_2 (struct varobj*,int) ;

__attribute__((used)) static struct value *
FUNC_3 (struct varobj *VAR_0, int VAR_1)
{
  struct value *VAR_2;

  VAR_2 = (*VAR_0->root->lang->value_of_child) (VAR_0, VAR_1);


  if (VAR_2 != ((void*)0) && FUNC_0 (VAR_2))
    {



      if (!FUNC_1 (VAR_2))
 VAR_2 = ((void*)0);
    }

  return VAR_2;
}
