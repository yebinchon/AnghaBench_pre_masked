
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_transaction_info {scalar_t__ ti_magic; unsigned int ti_flags; } ;
struct TYPE_2__ {struct nilfs_transaction_info* journal_info; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static inline int FUNC_0(unsigned int VAR_2)
{
 struct nilfs_transaction_info *VAR_3 = VAR_1->journal_info;

 if (VAR_3 == ((void*)0) || VAR_3->ti_magic != VAR_0)
  return 0;
 return !!(VAR_3->ti_flags & VAR_2);
}
