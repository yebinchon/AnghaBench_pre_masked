
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct super_block {scalar_t__ s_blocksize; } ;
struct inode {struct super_block* i_sb; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct super_block*,int ) ;
 int FUNC_4 (struct inode*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0,
        u64 VAR_1)
{
 int VAR_2 = 0;
 u64 VAR_3;
 struct super_block *VAR_4 = VAR_0->i_sb;

 VAR_3 = FUNC_3(VAR_4, FUNC_1(VAR_0));
 while (VAR_3 < VAR_1) {
  VAR_2 = FUNC_4(VAR_0, VAR_3);
  if (VAR_2 < 0) {
   FUNC_2(VAR_2);
   goto out;
  }

  VAR_3 += VAR_4->s_blocksize;





  FUNC_0();
 }

out:
 return VAR_2;
}
