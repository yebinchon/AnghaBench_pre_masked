
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct sra_elt {int * replacement; scalar_t__ is_scalar; } ;


 int VAR_0 ;
 int FUNC_0 (struct sra_elt*) ;
 int FUNC_1 (struct sra_elt*) ;
 struct sra_elt* FUNC_2 (struct sra_elt*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3 (struct sra_elt *VAR_1, tree VAR_2, tree VAR_3)
{
  struct sra_elt *VAR_4 = FUNC_2 (VAR_1, VAR_2, VAR_3, VAR_0);
  if (VAR_4->is_scalar)
    {
      if (VAR_4->replacement == ((void*)0))
 FUNC_0 (VAR_4);
    }
  else
    FUNC_1 (VAR_4);
}
