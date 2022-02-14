
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct sra_elt {int element; struct sra_elt* parent; } ;


 int FUNC_0 (struct sra_elt*,int ) ;

__attribute__((used)) static tree
FUNC_1 (struct sra_elt *VAR_0)
{
  if (VAR_0->parent)
    return FUNC_0 (VAR_0, FUNC_1 (VAR_0->parent));
  else
    return VAR_0->element;
}
