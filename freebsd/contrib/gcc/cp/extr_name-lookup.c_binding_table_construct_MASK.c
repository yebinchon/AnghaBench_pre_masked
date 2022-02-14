
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* binding_table ;
struct TYPE_3__ {size_t chain_count; int chain; scalar_t__ entry_count; } ;


 int FUNC_0 (int ,size_t) ;
 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_1 (binding_table VAR_1, size_t VAR_2)
{
  VAR_1->chain_count = VAR_2;
  VAR_1->entry_count = 0;
  VAR_1->chain = FUNC_0 (VAR_0, VAR_1->chain_count);
}
