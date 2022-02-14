
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ufs_super_block_first {int dummy; } ;
struct ufs_sb_private_info {int s_fpg; int s_fpb; } ;
struct ufs_cylinder_group {int dummy; } ;
struct ufs_cg_private_info {int c_frotor; int c_cgx; int c_freeoff; } ;
struct super_block {int dummy; } ;
struct TYPE_2__ {struct ufs_sb_private_info* s_uspi; } ;


 int VAR_0 ;
 int FUNC_0 (struct ufs_cg_private_info*) ;
 int FUNC_1 (char*,...) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 unsigned int FUNC_3 (int ,int ,int) ;
 struct ufs_cylinder_group* FUNC_4 (int ) ;
 struct ufs_super_block_first* FUNC_5 (struct ufs_sb_private_info*) ;
 unsigned int FUNC_6 (struct ufs_sb_private_info*,int ,int ,unsigned int,int ,int) ;
 int FUNC_7 (struct ufs_sb_private_info*,int) ;
 int FUNC_8 (struct super_block*,char*,char*,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u64 FUNC_9(struct super_block *VAR_3,
        struct ufs_cg_private_info *VAR_4,
        u64 VAR_5, unsigned VAR_6)
{




 static const int VAR_7[9] = {
  0x3, 0x7, 0xf, 0x1f, 0x3f, 0x7f, 0xff, 0x1ff, 0x3ff
 };
 static const int VAR_8[9] = {
  0x0, 0x2, 0x6, 0xe, 0x1e, 0x3e, 0x7e, 0xfe, 0x1fe
 };
 struct ufs_sb_private_info *VAR_9 = FUNC_2(VAR_3)->s_uspi;
 struct ufs_super_block_first *VAR_10;
 struct ufs_cylinder_group *VAR_11;
 unsigned VAR_12, VAR_13, VAR_14;
 unsigned VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 u64 VAR_20;

 FUNC_1("ENTER, cg %u, goal %llu, count %u\n", VAR_4->c_cgx,
      (unsigned long long)VAR_5, VAR_6);

 VAR_10 = FUNC_5 (VAR_9);
 VAR_11 = FUNC_4(FUNC_0(VAR_4));

 if (VAR_5)
  VAR_12 = FUNC_7(VAR_9, VAR_5) >> 3;
 else
  VAR_12 = VAR_4->c_frotor >> 3;

 VAR_13 = ((VAR_9->s_fpg + 7) >> 3) - VAR_12;
 VAR_14 = FUNC_6(VAR_9, FUNC_0(VAR_4), VAR_4->c_freeoff + VAR_12, VAR_13,
  (VAR_9->s_fpb == 8) ? VAR_1 : VAR_2,
  1 << (VAR_6 - 1 + (VAR_9->s_fpb & 7)));
 if (VAR_14 == 0) {
  VAR_13 = VAR_12 + 1;
  VAR_14 = FUNC_6(VAR_9, FUNC_0(VAR_4), VAR_4->c_freeoff, VAR_13,
    (VAR_9->s_fpb == 8) ? VAR_1 :
    VAR_2,
    1 << (VAR_6 - 1 + (VAR_9->s_fpb & 7)));
  if (VAR_14 == 0) {
   FUNC_8(VAR_3, "ufs_bitmap_search",
      "bitmap corrupted on cg %u, start %u,"
      " length %u, count %u, freeoff %u\n",
      VAR_4->c_cgx, VAR_12, VAR_13, VAR_6,
      VAR_4->c_freeoff);
   return VAR_0;
  }
  VAR_12 = 0;
 }
 VAR_20 = (VAR_12 + VAR_13 - VAR_14) << 3;
 VAR_4->c_frotor = VAR_20;





 for (VAR_19 = VAR_20 + 8; VAR_20 < VAR_19; VAR_20 += VAR_9->s_fpb) {
  VAR_17 = FUNC_3(FUNC_0(VAR_4), VAR_4->c_freeoff, VAR_20);
  VAR_17 <<= 1;
  VAR_18 = VAR_7[VAR_6];
  VAR_16 = VAR_8[VAR_6];
  for (VAR_15 = 0; VAR_15 <= VAR_9->s_fpb - VAR_6; VAR_15++) {
   if ((VAR_17 & VAR_18) == VAR_16) {
    FUNC_1("EXIT, result %llu\n",
         (unsigned long long)VAR_20);
    return VAR_20 + VAR_15;
    }
   VAR_18 <<= 1;
   VAR_16 <<= 1;
   }
  }

 FUNC_8(VAR_3, "ufs_bitmap_search", "block not in map on cg %u\n",
    VAR_4->c_cgx);
 FUNC_1("EXIT (FAILED)\n");
 return VAR_0;
}
