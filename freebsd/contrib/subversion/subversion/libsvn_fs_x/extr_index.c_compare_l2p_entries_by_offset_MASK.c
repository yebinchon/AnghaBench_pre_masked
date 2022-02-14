
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ offset; } ;
typedef TYPE_1__ l2p_page_entry_t ;



__attribute__((used)) static int
FUNC_0(const l2p_page_entry_t *VAR_0,
                              const l2p_page_entry_t *VAR_1)
{
  return VAR_0->offset > VAR_1->offset ? 1
                                   : VAR_0->offset == VAR_1->offset ? 0 : -1;
}
