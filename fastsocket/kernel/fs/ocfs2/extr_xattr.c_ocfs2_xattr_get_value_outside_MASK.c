
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
typedef scalar_t__ u32 ;
struct ocfs2_extent_list {int dummy; } ;
struct ocfs2_xattr_value_root {int xr_clusters; struct ocfs2_extent_list xr_list; } ;
struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {int b_data; } ;
struct TYPE_2__ {size_t s_blocksize; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (void*,int ,size_t) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (int ,void*,struct buffer_head**,int *) ;
 int FUNC_7 (struct inode*,scalar_t__,scalar_t__*,scalar_t__*,struct ocfs2_extent_list*,int *) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_0,
      struct ocfs2_xattr_value_root *VAR_1,
      void *VAR_2,
      size_t VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 u64 VAR_9;
 int VAR_10, VAR_11 = 0;
 size_t VAR_12, VAR_13;
 struct buffer_head *VAR_14 = ((void*)0);
 struct ocfs2_extent_list *VAR_15;

 VAR_15 = &VAR_1->xr_list;
 VAR_8 = FUNC_2(VAR_1->xr_clusters);
 VAR_7 = FUNC_5(VAR_0->i_sb, 1);
 VAR_13 = VAR_0->i_sb->s_blocksize;

 VAR_4 = 0;
 while (VAR_4 < VAR_8) {
  VAR_11 = FUNC_7(VAR_0, VAR_4, &VAR_5,
            &VAR_6, VAR_15, ((void*)0));
  if (VAR_11) {
   FUNC_4(VAR_11);
   goto out;
  }

  VAR_9 = FUNC_5(VAR_0->i_sb, VAR_5);

  for (VAR_10 = 0; VAR_10 < VAR_6 * VAR_7; VAR_10++, VAR_9++) {
   VAR_11 = FUNC_6(FUNC_0(VAR_0), VAR_9,
            &VAR_14, ((void*)0));
   if (VAR_11) {
    FUNC_4(VAR_11);
    goto out;
   }

   VAR_12 = VAR_3 >= VAR_13 ? VAR_13 : VAR_3;
   FUNC_3(VAR_2, VAR_14->b_data, VAR_12);
   VAR_3 -= VAR_12;
   VAR_2 += VAR_12;

   FUNC_1(VAR_14);
   VAR_14 = ((void*)0);
   if (VAR_3 == 0)
    break;
  }
  VAR_4 += VAR_6;
 }
out:
 return VAR_11;
}
