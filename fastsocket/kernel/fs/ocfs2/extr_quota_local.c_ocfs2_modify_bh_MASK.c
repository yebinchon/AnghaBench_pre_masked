
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_8 (int *,struct buffer_head*) ;
 int * FUNC_9 (int ,int ) ;
 int FUNC_10 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_2, struct buffer_head *VAR_3,
  void (*VAR_4)(struct buffer_head *, void *), void *VAR_5)
{
 struct super_block *VAR_6 = VAR_2->i_sb;
 handle_t *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_9(FUNC_2(VAR_6),
       VAR_1);
 if (FUNC_1(VAR_7)) {
  VAR_8 = FUNC_3(VAR_7);
  FUNC_5(VAR_8);
  return VAR_8;
 }
 VAR_8 = FUNC_7(VAR_7, FUNC_0(VAR_2), VAR_3,
      VAR_0);
 if (VAR_8 < 0) {
  FUNC_5(VAR_8);
  FUNC_6(FUNC_2(VAR_6), VAR_7);
  return VAR_8;
 }
 FUNC_4(VAR_3);
 VAR_4(VAR_3, VAR_5);
 FUNC_10(VAR_3);
 VAR_8 = FUNC_8(VAR_7, VAR_3);
 if (VAR_8 < 0) {
  FUNC_5(VAR_8);
  FUNC_6(FUNC_2(VAR_6), VAR_7);
  return VAR_8;
 }
 VAR_8 = FUNC_6(FUNC_2(VAR_6), VAR_7);
 if (VAR_8 < 0) {
  FUNC_5(VAR_8);
  return VAR_8;
 }
 return 0;
}
