
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int s_clustersize_bits; int s_clustersize; } ;


 unsigned int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct inode*,int,int*,unsigned int*,unsigned int*) ;
 int FUNC_3 (struct inode*,struct buffer_head*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1,
         struct buffer_head *VAR_2,
         u64 VAR_3)
{
 int VAR_4;
 u32 VAR_5, VAR_6 = VAR_3 >> FUNC_0(VAR_1->i_sb)->s_clustersize_bits;
 unsigned int VAR_7 = 0;
 unsigned int VAR_8 = 0;






 if ((VAR_3 & (FUNC_0(VAR_1->i_sb)->s_clustersize - 1)) == 0)
  return 0;

 VAR_4 = FUNC_2(VAR_1, VAR_6, &VAR_5,
        &VAR_7, &VAR_8);
 if (VAR_4) {
  FUNC_1(VAR_4);
  goto out;
 }

 if (!(VAR_8 & VAR_0))
  goto out;

 return FUNC_3(VAR_1, VAR_2, VAR_6, 1, VAR_6+1);

out:
 return VAR_4;
}
