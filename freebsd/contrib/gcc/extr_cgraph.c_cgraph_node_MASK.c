
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;
struct cgraph_node {struct cgraph_node* master_clone; struct cgraph_node* nested; struct cgraph_node* origin; struct cgraph_node* next_nested; void* decl; } ;


 void* FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (void*) ;
 struct cgraph_node* FUNC_2 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int,int ,int ,int *) ;
 scalar_t__ FUNC_5 (scalar_t__,struct cgraph_node*,int ) ;

struct cgraph_node *
FUNC_6 (tree VAR_5)
{
  struct cgraph_node VAR_6, *VAR_7, **VAR_8;

  FUNC_3 (FUNC_1 (VAR_5) == VAR_0);

  if (!VAR_2)
    VAR_2 = FUNC_4 (10, VAR_4, VAR_3, ((void*)0));

  VAR_6.decl = VAR_5;

  VAR_8 = (struct cgraph_node **) FUNC_5 (VAR_2, &VAR_6, VAR_1);

  if (*VAR_8)
    {
      VAR_7 = *VAR_8;
      if (!VAR_7->master_clone)
 VAR_7->master_clone = VAR_7;
      return VAR_7;
    }

  VAR_7 = FUNC_2 ();
  VAR_7->decl = VAR_5;
  *VAR_8 = VAR_7;
  if (FUNC_0 (VAR_5) && FUNC_1 (FUNC_0 (VAR_5)) == VAR_0)
    {
      VAR_7->origin = FUNC_6 (FUNC_0 (VAR_5));
      VAR_7->next_nested = VAR_7->origin->nested;
      VAR_7->origin->nested = VAR_7;
      VAR_7->master_clone = VAR_7;
    }
  return VAR_7;
}
