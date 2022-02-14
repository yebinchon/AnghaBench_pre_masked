
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop {struct loop** pred; scalar_t__ depth; } ;


 int FUNC_0 (int) ;

struct loop *
FUNC_1 (struct loop *VAR_0, unsigned VAR_1)
{
  FUNC_0 (VAR_1 <= (unsigned) VAR_0->depth);

  if (VAR_1 == (unsigned) VAR_0->depth)
    return VAR_0;

  return VAR_0->pred[VAR_1];
}
