
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct udf_sb_info {TYPE_1__* s_lvid_bh; } ;
struct logicalVolIntegrityDescImpUse {int dummy; } ;
struct logicalVolIntegrityDesc {int * impUse; int numOfPartitions; } ;
typedef int __u32 ;
struct TYPE_2__ {scalar_t__ b_data; } ;


 int FUNC_0 (int ) ;

struct logicalVolIntegrityDescImpUse *FUNC_1(struct udf_sb_info *VAR_0)
{
 struct logicalVolIntegrityDesc *VAR_1 =
  (struct logicalVolIntegrityDesc *)VAR_0->s_lvid_bh->b_data;
 __u32 VAR_2 = FUNC_0(VAR_1->numOfPartitions);
 __u32 VAR_3 = VAR_2 * 2 *
    sizeof(uint32_t)/sizeof(uint8_t);
 return (struct logicalVolIntegrityDescImpUse *)&(VAR_1->impUse[VAR_3]);
}
