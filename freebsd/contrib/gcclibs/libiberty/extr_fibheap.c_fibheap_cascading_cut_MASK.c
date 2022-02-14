
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* fibnode_t ;
typedef int fibheap_t ;
struct TYPE_5__ {int mark; struct TYPE_5__* parent; } ;


 int FUNC_0 (int ,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1 (fibheap_t VAR_0, fibnode_t VAR_1)
{
  fibnode_t VAR_2;

  while ((VAR_2 = VAR_1->parent) != ((void*)0))
    {
      if (VAR_1->mark == 0)
 {
   VAR_1->mark = 1;
   return;
 }
      else
 {
   FUNC_0 (VAR_0, VAR_1, VAR_2);
   VAR_1 = VAR_2;
 }
    }
}
