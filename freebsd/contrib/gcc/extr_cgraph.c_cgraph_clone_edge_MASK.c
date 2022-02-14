
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct cgraph_node {int dummy; } ;
struct cgraph_edge {int count; int inline_failed; scalar_t__ loop_nest; int callee; } ;
typedef int gcov_type ;


 int VAR_0 ;
 struct cgraph_edge* FUNC_0 (struct cgraph_node*,int ,int ,int,scalar_t__) ;

struct cgraph_edge *
FUNC_1 (struct cgraph_edge *VAR_1, struct cgraph_node *VAR_2,
     tree VAR_3, gcov_type VAR_4, int VAR_5,
     bool VAR_6)
{
  struct cgraph_edge *VAR_7;

  VAR_7 = FUNC_0 (VAR_2, VAR_1->callee, VAR_3,
       VAR_1->count * VAR_4 / VAR_0,
       VAR_1->loop_nest + VAR_5);

  VAR_7->inline_failed = VAR_1->inline_failed;
  if (VAR_6)
    {
      VAR_1->count -= VAR_7->count;
      if (VAR_1->count < 0)
 VAR_1->count = 0;
    }
  return VAR_7;
}
