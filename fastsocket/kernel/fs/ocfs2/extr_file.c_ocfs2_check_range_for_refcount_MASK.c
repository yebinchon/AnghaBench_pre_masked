
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
typedef scalar_t__ loff_t ;
struct TYPE_5__ {int ip_dyn_features; } ;
struct TYPE_4__ {scalar_t__ s_clustersize_bits; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct super_block*,scalar_t__) ;
 int FUNC_4 (struct inode*,scalar_t__,scalar_t__*,scalar_t__*,unsigned int*) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(struct inode *VAR_3, loff_t VAR_4,
       size_t VAR_5)
{
 int VAR_6 = 0;
 unsigned int VAR_7;
 u32 VAR_8, VAR_9, VAR_10, VAR_11;
 struct super_block *VAR_12 = VAR_3->i_sb;

 if (!FUNC_5(FUNC_1(VAR_3->i_sb)) ||
     !(FUNC_0(VAR_3)->ip_dyn_features & VAR_1) ||
     FUNC_0(VAR_3)->ip_dyn_features & VAR_2)
  return 0;

 VAR_8 = VAR_4 >> FUNC_1(VAR_12)->s_clustersize_bits;
 VAR_9 = FUNC_3(VAR_12, VAR_4 + VAR_5) - VAR_8;

 while (VAR_9) {
  VAR_6 = FUNC_4(VAR_3, VAR_8, &VAR_11, &VAR_10,
      &VAR_7);
  if (VAR_6 < 0) {
   FUNC_2(VAR_6);
   goto out;
  }

  if (VAR_11 && (VAR_7 & VAR_0)) {
   VAR_6 = 1;
   break;
  }

  if (VAR_10 > VAR_9)
   VAR_10 = VAR_9;

  VAR_9 -= VAR_10;
  VAR_8 += VAR_10;
 }
out:
 return VAR_6;
}
