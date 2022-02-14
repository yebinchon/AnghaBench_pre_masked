
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_8__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct ocfs2_xattr_bucket {int dummy; } ;
struct ocfs2_super {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_9__ {int h_buffer_credits; } ;
typedef TYPE_1__ handle_t ;
struct TYPE_10__ {int xh_num_buckets; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (struct ocfs2_xattr_bucket*) ;
 TYPE_8__* FUNC_3 (struct ocfs2_xattr_bucket*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,unsigned long long,unsigned long long,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct inode*,TYPE_1__*,int,int,int ) ;
 int FUNC_10 (struct inode*,TYPE_1__*,int,int,int *,int ) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__*,struct ocfs2_xattr_bucket*,int ) ;
 int FUNC_13 (TYPE_1__*,struct ocfs2_xattr_bucket*) ;
 int FUNC_14 (struct ocfs2_super*) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_1,
         handle_t *VAR_2,
         struct ocfs2_xattr_bucket *VAR_3,
         u64 VAR_4,
         u32 VAR_5)
{
 int VAR_6, VAR_7;
 struct ocfs2_super *VAR_8 = FUNC_1(VAR_1->i_sb);
 u16 VAR_9 = FUNC_8(VAR_1->i_sb);
 u64 VAR_10;
 u16 VAR_11 = FUNC_5(FUNC_3(VAR_3)->xh_num_buckets);

 FUNC_6(0, "extend xattr bucket in %llu, xattr extend rec starting "
      "from %llu, len = %u\n", (unsigned long long)VAR_4,
      (unsigned long long)FUNC_2(VAR_3), VAR_5);


 FUNC_0(VAR_11 >=
        (VAR_5 * FUNC_14(VAR_8)));


 VAR_10 = FUNC_2(VAR_3) + ((VAR_11 - 1) * VAR_9);
 VAR_7 = (VAR_10 - VAR_4) + (3 * VAR_9) +
    VAR_2->h_buffer_credits;
 VAR_6 = FUNC_11(VAR_2, VAR_7);
 if (VAR_6) {
  FUNC_7(VAR_6);
  goto out;
 }

 VAR_6 = FUNC_12(VAR_2, VAR_3,
      VAR_0);
 if (VAR_6) {
  FUNC_7(VAR_6);
  goto out;
 }

 while (VAR_10 != VAR_4) {
  VAR_6 = FUNC_9(VAR_1, VAR_2, VAR_10,
         VAR_10 + VAR_9, 0);
  if (VAR_6)
   goto out;
  VAR_10 -= VAR_9;
 }


 VAR_6 = FUNC_10(VAR_1, VAR_2, VAR_4,
     VAR_4 + VAR_9, ((void*)0), 0);

 FUNC_4(&FUNC_3(VAR_3)->xh_num_buckets, 1);
 FUNC_13(VAR_2, VAR_3);

out:
 return VAR_6;
}
