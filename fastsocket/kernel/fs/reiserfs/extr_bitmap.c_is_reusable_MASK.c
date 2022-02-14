
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
typedef scalar_t__ b_blocknr_t ;
struct TYPE_4__ {TYPE_1__* s_sbh; int s_properties; } ;
struct TYPE_3__ {scalar_t__ b_blocknr; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*,scalar_t__,unsigned int*,unsigned int*) ;
 unsigned int FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct super_block*,char*,char*,scalar_t__,...) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ) ;

int FUNC_8(struct super_block *VAR_1, b_blocknr_t VAR_2, int VAR_3)
{
 unsigned int VAR_4, VAR_5;
 unsigned int VAR_6 = FUNC_4(VAR_1);

 if (VAR_2 == 0 || VAR_2 >= FUNC_1(VAR_1)) {
  FUNC_5(VAR_1, "vs-4010",
          "block number is out of range %lu (%u)",
          VAR_2, FUNC_1(VAR_1));
  return 0;
 }

 FUNC_3(VAR_1, VAR_2, &VAR_4, &VAR_5);



 if (FUNC_7(FUNC_6(VAR_0,
         &(FUNC_0(VAR_1)->s_properties)))) {
  b_blocknr_t VAR_7 = FUNC_0(VAR_1)->s_sbh->b_blocknr + 1;
  if (VAR_2 >= VAR_7 &&
      VAR_2 <= VAR_7 + VAR_6) {
   FUNC_5(VAR_1, "vs-4019", "bitmap block %lu(%u) "
           "can't be freed or reused",
           VAR_2, VAR_6);
   return 0;
  }
 } else {
  if (VAR_5 == 0) {
   FUNC_5(VAR_1, "vs-4020", "bitmap block %lu(%u) "
           "can't be freed or reused",
           VAR_2, VAR_6);
   return 0;
  }
 }

 if (VAR_4 >= VAR_6) {
  FUNC_5(VAR_1, "vs-4030", "bitmap for requested block "
          "is out of range: block=%lu, bitmap_nr=%u",
          VAR_2, VAR_4);
  return 0;
 }

 if (VAR_3 == 0 && VAR_2 == FUNC_2(VAR_1)) {
  FUNC_5(VAR_1, "vs-4050", "this is root block (%u), "
          "it must be busy", FUNC_2(VAR_1));
  return 0;
 }

 return 1;
}
