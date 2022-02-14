
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct page {int dummy; } ;
struct ocfs2_write_ctxt {struct page* w_target_page; } ;
struct inode {int i_sb; } ;
typedef int loff_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct page*,int ,int ,unsigned int,unsigned int) ;
 int FUNC_6 (int ,int ,unsigned int*,unsigned int*) ;
 int FUNC_7 (struct page*,int *,struct inode*,unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_1, u64 *VAR_2,
     struct ocfs2_write_ctxt *VAR_3,
     struct page *VAR_4, u32 VAR_5,
     loff_t VAR_6, unsigned VAR_7,
     int VAR_8)
{
 int VAR_9;
 unsigned int VAR_10 = 0, VAR_11 = 0;
 unsigned int VAR_12, VAR_13;
 unsigned int VAR_14 = 0, VAR_15 = 0;

 FUNC_6(FUNC_1(VAR_1->i_sb), VAR_5,
     &VAR_12, &VAR_13);

 if (VAR_4 == VAR_3->w_target_page) {
  VAR_10 = VAR_6 & (VAR_0 - 1);
  VAR_11 = VAR_10 + VAR_7;

  if (VAR_8)
   VAR_9 = FUNC_7(VAR_4, VAR_2, VAR_1,
          VAR_12, VAR_13,
          VAR_8);
  else
   VAR_9 = FUNC_7(VAR_4, VAR_2, VAR_1,
          VAR_10, VAR_11, VAR_8);
  if (VAR_9) {
   FUNC_4(VAR_9);
   goto out;
  }

  VAR_14 = VAR_10;
  VAR_15 = VAR_11;
  if (VAR_8) {
   VAR_10 = VAR_12;
   VAR_11 = VAR_13;
  }
 } else {





  FUNC_0(!VAR_8);

  VAR_10 = VAR_12;
  VAR_11 = VAR_13;

  VAR_9 = FUNC_7(VAR_4, VAR_2, VAR_1,
         VAR_12, VAR_13, VAR_8);
  if (VAR_9) {
   FUNC_4(VAR_9);
   goto out;
  }
 }
 if (VAR_8 && !FUNC_2(VAR_4))
  FUNC_5(VAR_4, FUNC_1(VAR_1->i_sb),
      VAR_5, VAR_14, VAR_15);

 FUNC_3(VAR_4);

out:
 return VAR_9;
}
