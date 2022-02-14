
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ s_clustersize_bits; } ;


 unsigned int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct super_block*,scalar_t__) ;
 int FUNC_3 (struct inode*,scalar_t__,scalar_t__*,scalar_t__*,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, loff_t VAR_2,
           size_t VAR_3)
{
 int VAR_4 = 0;
 unsigned int VAR_5;
 u32 VAR_6, VAR_7, VAR_8, VAR_9;
 struct super_block *VAR_10 = VAR_1->i_sb;

 VAR_6 = VAR_2 >> FUNC_0(VAR_10)->s_clustersize_bits;
 VAR_7 = FUNC_2(VAR_10, VAR_2 + VAR_3) - VAR_6;

 while (VAR_7) {
  VAR_4 = FUNC_3(VAR_1, VAR_6, &VAR_9, &VAR_8,
      &VAR_5);
  if (VAR_4 < 0) {
   FUNC_1(VAR_4);
   goto out;
  }

  if (VAR_9 == 0 || (VAR_5 & VAR_0)) {
   VAR_4 = 1;
   break;
  }

  if (VAR_8 > VAR_7)
   VAR_8 = VAR_7;

  VAR_7 -= VAR_8;
  VAR_6 += VAR_8;
 }
out:
 return VAR_4;
}
