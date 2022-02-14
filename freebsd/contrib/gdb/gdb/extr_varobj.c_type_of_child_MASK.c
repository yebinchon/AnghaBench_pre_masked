
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct varobj {int index; int parent; TYPE_2__* root; int * value; } ;
struct type {int dummy; } ;
struct TYPE_4__ {TYPE_1__* lang; } ;
struct TYPE_3__ {struct type* (* type_of_child ) (int ,int ) ;} ;


 struct type* FUNC_0 (int *) ;
 struct type* FUNC_1 (int ,int ) ;

__attribute__((used)) static struct type *
FUNC_2 (struct varobj *VAR_0)
{



  if (VAR_0->value != ((void*)0))
    return FUNC_0 (VAR_0->value);


  return (*VAR_0->root->lang->type_of_child) (VAR_0->parent, VAR_0->index);
}
