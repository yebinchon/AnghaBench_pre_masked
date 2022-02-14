
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* mfsplay_tree_node ;
typedef int __mf_object_t ;
struct TYPE_3__ {scalar_t__ value; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2 (mfsplay_tree_node VAR_1, void *VAR_2)
{
  __mf_object_t *VAR_3 = (__mf_object_t *) VAR_1->value;
  unsigned *VAR_4 = (unsigned *) VAR_2;

  if (VAR_4 != ((void*)0))
    (*VAR_4) ++;

  FUNC_1 (VAR_0, "Leaked object %u:\n", (*VAR_4));
  FUNC_0 (VAR_3);

  return 0;
}
