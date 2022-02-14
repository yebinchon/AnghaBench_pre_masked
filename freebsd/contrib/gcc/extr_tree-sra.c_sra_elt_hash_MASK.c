
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sra_elt {int element; struct sra_elt* parent; } ;
typedef int hashval_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static hashval_t
FUNC_1 (const void *VAR_0)
{
  const struct sra_elt *VAR_1 = VAR_0;
  const struct sra_elt *VAR_2;
  hashval_t VAR_3;

  VAR_3 = FUNC_0 (VAR_1->element);





  for (VAR_2 = VAR_1->parent; VAR_2 ; VAR_2 = VAR_2->parent)
    VAR_3 = (VAR_3 * 65521) ^ FUNC_0 (VAR_2->element);

  return VAR_3;
}
