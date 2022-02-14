
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;
struct expr_hash_elt {int hash; void* lhs; void* rhs; int * stmt; } ;


 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_3 (void*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (void*) ;
 void* FUNC_5 (void*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (struct expr_hash_elt*) ;

__attribute__((used)) static void
FUNC_7 (tree VAR_5, tree VAR_6, struct expr_hash_elt *VAR_7)
{





  if (FUNC_0 (VAR_5) || FUNC_4 (VAR_5) == VAR_4)
    {
      VAR_7->stmt = ((void*)0);
      VAR_7->rhs = VAR_5;
    }
  else if (FUNC_4 (VAR_5) == VAR_0)
    {
      VAR_7->stmt = VAR_5;
      VAR_7->rhs = FUNC_1 (VAR_5);
    }
  else if (FUNC_4 (VAR_5) == VAR_3)
    {
      VAR_7->stmt = VAR_5;
      VAR_7->rhs = FUNC_3 (VAR_5);
    }
  else if (FUNC_4 (VAR_5) == VAR_2 && FUNC_5 (VAR_5, 0))
    {
      VAR_7->stmt = VAR_5;
      VAR_7->rhs = FUNC_5 (FUNC_5 (VAR_5, 0), 1);
    }
  else if (FUNC_4 (VAR_5) == VAR_1)
    {
      VAR_7->stmt = VAR_5;
      VAR_7->rhs = FUNC_2 (VAR_5);
    }
  else
    {
      VAR_7->stmt = VAR_5;
      VAR_7->rhs = FUNC_5 (VAR_5, 1);
    }

  VAR_7->lhs = VAR_6;
  VAR_7->hash = FUNC_6 (VAR_7);
}
