
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
struct sra_elt {int * replacement; } ;
typedef int block_stmt_iterator ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (struct sra_elt*,int,int ,int **) ;
 int FUNC_2 (struct sra_elt*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sra_elt*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8 (struct sra_elt *VAR_0, tree *VAR_1, block_stmt_iterator *VAR_2,
        bool VAR_3, bool VAR_4)
{
  tree VAR_5 = ((void*)0), VAR_6 = FUNC_0 (*VAR_2);

  if (VAR_0->replacement)
    {


      if (VAR_3)
 FUNC_3 (VAR_6);
      *VAR_1 = VAR_0->replacement;
      FUNC_7 (VAR_6);
    }
  else
    {
      FUNC_1 (VAR_0, VAR_3, FUNC_2 (VAR_0), &VAR_5);
      if (VAR_5 == ((void*)0))
 return;
      FUNC_3 (VAR_5);
      if (VAR_3)
 FUNC_5 (VAR_2, VAR_5);
      else
 {
   FUNC_6 (VAR_2, VAR_5);
   if (VAR_4)
     FUNC_4 (VAR_0);
 }
    }
}
