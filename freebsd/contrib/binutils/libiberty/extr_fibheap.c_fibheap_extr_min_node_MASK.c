
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* fibnode_t ;
typedef TYPE_2__* fibheap_t ;
struct TYPE_11__ {scalar_t__ nodes; TYPE_1__* min; } ;
struct TYPE_10__ {struct TYPE_10__* right; int * parent; struct TYPE_10__* child; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static fibnode_t
FUNC_3 (fibheap_t VAR_0)
{
  fibnode_t VAR_1 = VAR_0->min;
  fibnode_t VAR_2, VAR_3, VAR_4;



  for (VAR_2 = VAR_1->child, VAR_4 = ((void*)0); VAR_2 != VAR_4 && VAR_2 != ((void*)0); VAR_2 = VAR_3)
    {
      if (VAR_4 == ((void*)0))
 VAR_4 = VAR_2;
      VAR_3 = VAR_2->right;
      VAR_2->parent = ((void*)0);
      FUNC_1 (VAR_0, VAR_2);
    }


  FUNC_2 (VAR_0, VAR_1);
  VAR_0->nodes--;


  if (VAR_0->nodes == 0)
    VAR_0->min = ((void*)0);
  else
    {


      VAR_0->min = VAR_1->right;
      FUNC_0 (VAR_0);
    }

  return VAR_1;
}
