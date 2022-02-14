
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_transaction_info {unsigned int ti_flags; } ;
struct TYPE_2__ {struct nilfs_transaction_info* journal_info; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline void FUNC_0(unsigned int VAR_1)
{
 struct nilfs_transaction_info *VAR_2 = VAR_0->journal_info;

 VAR_2->ti_flags |= VAR_1;
}
