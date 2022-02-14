
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* splay_tree ;
struct TYPE_4__ {int allocate_data; int (* deallocate ) (char*,int ) ;int root; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (char*,int ) ;

void
FUNC_2 (splay_tree VAR_0)
{
  FUNC_0 (VAR_0, VAR_0->root);
  (*VAR_0->deallocate) ((char*) VAR_0, VAR_0->allocate_data);
}
