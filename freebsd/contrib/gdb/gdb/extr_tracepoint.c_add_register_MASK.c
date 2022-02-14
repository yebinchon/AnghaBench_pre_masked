
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct collection_list {int* regs_mask; } ;


 int FUNC_0 (char*,unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,unsigned int) ;

__attribute__((used)) static void
FUNC_2 (struct collection_list *VAR_1, unsigned int VAR_2)
{
  if (VAR_0)
    FUNC_1 ("collect register %d\n", VAR_2);
  if (VAR_2 > (8 * sizeof (VAR_1->regs_mask)))
    FUNC_0 ("Internal: register number %d too large for tracepoint",
    VAR_2);
  VAR_1->regs_mask[VAR_2 / 8] |= 1 << (VAR_2 % 8);
}
