
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct super_block {scalar_t__ s_blocksize_bits; } ;
struct page {int dummy; } ;
struct inode {int i_mapping; struct super_block* i_sb; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct super_block*) ;
 int VAR_3 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ) ;
 struct page** FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct page**) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct inode*,scalar_t__,scalar_t__*,int *,unsigned int*) ;
 int FUNC_6 (struct inode*,scalar_t__,scalar_t__,struct page**,int*) ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct inode*,scalar_t__,scalar_t__,struct page**,int,scalar_t__,int *) ;

int FUNC_10(struct inode *VAR_4, handle_t *VAR_5,
      u64 VAR_6, u64 VAR_7)
{
 int VAR_8 = 0, VAR_9;
 struct page **VAR_10 = ((void*)0);
 u64 VAR_11;
 unsigned int VAR_12;
 struct super_block *VAR_13 = VAR_4->i_sb;





 if (!FUNC_8(FUNC_0(VAR_13)))
  return 0;

 VAR_10 = FUNC_2(FUNC_7(VAR_13),
   sizeof(struct page *), VAR_1);
 if (VAR_10 == ((void*)0)) {
  VAR_8 = -VAR_0;
  FUNC_4(VAR_8);
  goto out;
 }

 if (VAR_6 == VAR_7)
  goto out;

 VAR_8 = FUNC_5(VAR_4,
       VAR_6 >> VAR_13->s_blocksize_bits,
       &VAR_11, ((void*)0), &VAR_12);
 if (VAR_8) {
  FUNC_4(VAR_8);
  goto out;
 }





 if (VAR_11 == 0 || VAR_12 & VAR_2)
  goto out;

 VAR_8 = FUNC_6(VAR_4, VAR_6, VAR_7, VAR_10,
       &VAR_9);
 if (VAR_8) {
  FUNC_4(VAR_8);
  goto out;
 }

 FUNC_9(VAR_4, VAR_6, VAR_7, VAR_10,
     VAR_9, VAR_11, VAR_5);






 VAR_8 = FUNC_1(VAR_4->i_mapping, VAR_6,
        VAR_7 - 1, VAR_3);
 if (VAR_8)
  FUNC_4(VAR_8);

out:
 if (VAR_10)
  FUNC_3(VAR_10);

 return VAR_8;
}
