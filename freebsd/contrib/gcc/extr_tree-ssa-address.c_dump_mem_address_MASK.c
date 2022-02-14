
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_address {scalar_t__ offset; scalar_t__ step; scalar_t__ index; scalar_t__ base; scalar_t__ symbol; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,scalar_t__,int ) ;

void
FUNC_2 (FILE *VAR_1, struct mem_address *VAR_2)
{
  if (VAR_2->symbol)
    {
      FUNC_0 (VAR_1, "symbol: ");
      FUNC_1 (VAR_1, VAR_2->symbol, VAR_0);
      FUNC_0 (VAR_1, "\n");
    }
  if (VAR_2->base)
    {
      FUNC_0 (VAR_1, "base: ");
      FUNC_1 (VAR_1, VAR_2->base, VAR_0);
      FUNC_0 (VAR_1, "\n");
    }
  if (VAR_2->index)
    {
      FUNC_0 (VAR_1, "index: ");
      FUNC_1 (VAR_1, VAR_2->index, VAR_0);
      FUNC_0 (VAR_1, "\n");
    }
  if (VAR_2->step)
    {
      FUNC_0 (VAR_1, "step: ");
      FUNC_1 (VAR_1, VAR_2->step, VAR_0);
      FUNC_0 (VAR_1, "\n");
    }
  if (VAR_2->offset)
    {
      FUNC_0 (VAR_1, "offset: ");
      FUNC_1 (VAR_1, VAR_2->offset, VAR_0);
      FUNC_0 (VAR_1, "\n");
    }
}
