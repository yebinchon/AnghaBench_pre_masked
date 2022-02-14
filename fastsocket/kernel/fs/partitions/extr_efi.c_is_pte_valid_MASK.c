
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {int ending_lba; int starting_lba; int partition_type_guid; } ;
typedef TYPE_1__ gpt_entry ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ const FUNC_1 (int ) ;

__attribute__((used)) static inline int
FUNC_2(const gpt_entry *VAR_1, const u64 VAR_2)
{
 if ((!FUNC_0(VAR_1->partition_type_guid, VAR_0)) ||
     FUNC_1(VAR_1->starting_lba) > VAR_2 ||
     FUNC_1(VAR_1->ending_lba) > VAR_2)
  return 0;
 return 1;
}
