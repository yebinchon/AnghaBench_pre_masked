
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct ocfs2_write_ctxt {int w_num_pages; int * w_pages; int w_dealloc; int w_handle; int w_di_bh; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ loff_t ;
struct TYPE_6__ {scalar_t__ ip_blkno; } ;
struct TYPE_5__ {scalar_t__ s_blocksize_bits; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 TYPE_4__* FUNC_2 (struct inode*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int,char*,unsigned long long) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,struct inode*,int *,int,int ,int ,int ,struct ocfs2_alloc_context*,struct ocfs2_alloc_context*,int *) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,char*,unsigned long long,unsigned long long) ;
 int FUNC_9 (struct inode*,scalar_t__,scalar_t__*,int *,int *) ;
 int FUNC_10 (struct ocfs2_extent_tree*,int ,int ) ;
 int FUNC_11 (struct inode*,struct ocfs2_extent_tree*,int ,int ,int,int ,struct ocfs2_alloc_context*,int *) ;
 int FUNC_12 (struct inode*,scalar_t__*,struct ocfs2_write_ctxt*,int ,int ,scalar_t__,unsigned int,unsigned int) ;
 int FUNC_13 (struct inode*,struct ocfs2_write_ctxt*,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_14(struct address_space *VAR_1,
          u32 VAR_2, unsigned int VAR_3,
          unsigned int VAR_4,
          struct ocfs2_alloc_context *VAR_5,
          struct ocfs2_alloc_context *VAR_6,
          struct ocfs2_write_ctxt *VAR_7, u32 VAR_8,
          loff_t VAR_9, unsigned VAR_10)
{
 int VAR_11, VAR_12, VAR_13;
 u64 VAR_14, VAR_15;
 struct inode *VAR_16 = VAR_1->host;
 struct ocfs2_extent_tree VAR_17;

 VAR_13 = VAR_2 == 0 ? 1 : 0;
 if (VAR_13) {
  u32 VAR_18;





  VAR_18 = VAR_8;
  VAR_11 = FUNC_6(FUNC_3(VAR_16->i_sb), VAR_16,
        &VAR_18, 1, 0, VAR_7->w_di_bh,
        VAR_7->w_handle, VAR_5,
        VAR_6, ((void*)0));
  FUNC_4(VAR_11 == -VAR_0,
    "Inode %llu: EAGAIN return during allocation.\n",
    (unsigned long long)FUNC_2(VAR_16)->ip_blkno);
  if (VAR_11 < 0) {
   FUNC_5(VAR_11);
   goto out;
  }
 } else if (VAR_3) {
  FUNC_10(&VAR_17, FUNC_1(VAR_16),
           VAR_7->w_di_bh);
  VAR_11 = FUNC_11(VAR_16, &VAR_17,
      VAR_7->w_handle, VAR_8, 1, VAR_2,
      VAR_6, &VAR_7->w_dealloc);
  if (VAR_11 < 0) {
   FUNC_5(VAR_11);
   goto out;
  }
 }

 if (VAR_4)
  VAR_14 = FUNC_7(VAR_16->i_sb, VAR_8);
 else
  VAR_14 = VAR_9 >> VAR_16->i_sb->s_blocksize_bits;





 VAR_11 = FUNC_9(VAR_16, VAR_14, &VAR_15, ((void*)0),
       ((void*)0));
 if (VAR_11 < 0) {
  FUNC_8(VAR_16->i_sb, "Corrupting extend for inode %llu, "
       "at logical block %llu",
       (unsigned long long)FUNC_2(VAR_16)->ip_blkno,
       (unsigned long long)VAR_14);
  goto out;
 }

 FUNC_0(VAR_15 == 0);

 for(VAR_12 = 0; VAR_12 < VAR_7->w_num_pages; VAR_12++) {
  int VAR_19;

  VAR_19 = FUNC_12(VAR_16, &VAR_15, VAR_7,
            VAR_7->w_pages[VAR_12], VAR_8,
            VAR_9, VAR_10,
            VAR_4);
  if (VAR_19) {
   FUNC_5(VAR_19);
   if (VAR_11 == 0)
    VAR_11 = VAR_19;
  }
 }




 if (VAR_11 && VAR_13)
  FUNC_13(VAR_16, VAR_7, VAR_9, VAR_10);

out:

 return VAR_11;
}
