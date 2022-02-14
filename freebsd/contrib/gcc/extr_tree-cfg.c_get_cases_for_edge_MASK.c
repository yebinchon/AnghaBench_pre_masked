
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * tree ;
struct edge_to_cases_elt {int * case_labels; TYPE_1__* e; } ;
typedef TYPE_1__* edge ;
typedef int basic_block ;
struct TYPE_3__ {int src; } ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,size_t) ;
 size_t FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;
 void** FUNC_5 (int ,struct edge_to_cases_elt*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;

__attribute__((used)) static tree
FUNC_9 (edge VAR_2, tree VAR_3)
{
  struct edge_to_cases_elt VAR_4, *VAR_5;
  void **VAR_6;
  size_t VAR_7, VAR_8;
  tree VAR_9;



  if (!FUNC_8 ())
    return ((void*)0);

restart:
  VAR_4.e = VAR_2;
  VAR_4.case_labels = ((void*)0);
  VAR_6 = FUNC_5 (VAR_1, &VAR_4, VAR_0);

  if (VAR_6)
    {
      VAR_5 = (struct edge_to_cases_elt *)*VAR_6;
      return VAR_5->case_labels;
    }





  VAR_9 = FUNC_1 (VAR_3);
  VAR_8 = FUNC_3 (VAR_9);
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
    {
      tree VAR_10 = FUNC_0 (FUNC_2 (VAR_9, VAR_7));
      basic_block VAR_11 = FUNC_6 (VAR_10);
      FUNC_7 (FUNC_4 (VAR_2->src, VAR_11), FUNC_2 (VAR_9, VAR_7));
    }
  goto restart;
}
