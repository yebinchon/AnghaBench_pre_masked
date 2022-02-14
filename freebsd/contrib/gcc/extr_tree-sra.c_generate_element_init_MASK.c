
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_stmt_iterator ;
typedef scalar_t__ tree ;
struct sra_elt {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sra_elt*,scalar_t__,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static bool
FUNC_8 (struct sra_elt *VAR_0, tree VAR_1, tree *VAR_2)
{
  bool VAR_3;

  FUNC_3 ();
  VAR_3 = FUNC_1 (VAR_0, VAR_1, VAR_2);
  FUNC_2 (((void*)0));


  if (VAR_3 && *VAR_2)
    {
      tree_stmt_iterator VAR_4;

      for (VAR_4 = FUNC_6 (*VAR_2); !FUNC_4 (VAR_4); FUNC_5 (&VAR_4))
 FUNC_0 (FUNC_7 (VAR_4));
    }

  return VAR_3;
}
