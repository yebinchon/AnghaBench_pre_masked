
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partial_symbol {int ginfo; } ;
struct objfile {int dummy; } ;


 scalar_t__ FUNC_0 (struct partial_symbol*) ;
 int FUNC_1 (int *,struct objfile*) ;

struct partial_symbol *
FUNC_2 (struct partial_symbol *VAR_0, struct objfile *VAR_1)
{
  if (!VAR_0)
    return ((void*)0);

  if (FUNC_0 (VAR_0))
    return VAR_0;

  FUNC_1 (&VAR_0->ginfo, VAR_1);

  return VAR_0;
}
