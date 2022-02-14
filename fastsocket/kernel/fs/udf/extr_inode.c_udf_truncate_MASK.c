
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i_data; } ;
struct udf_inode_info {scalar_t__ i_alloc_type; int i_lenAlloc; scalar_t__ i_lenEAttr; TYPE_1__ i_ext; } ;
struct inode {int i_size; TYPE_2__* i_sb; int i_ctime; int i_mtime; int i_mapping; int i_mode; } ;
struct TYPE_4__ {int s_blocksize; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 struct udf_inode_info* FUNC_6 (struct inode*) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (scalar_t__,int,int) ;
 int FUNC_12 (struct inode*,int,int*) ;
 int FUNC_13 (struct inode*) ;
 int VAR_1 ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 () ;

void FUNC_17(struct inode *VAR_2)
{
 int VAR_3;
 int VAR_4;
 struct udf_inode_info *VAR_5;

 if (!(FUNC_5(VAR_2->i_mode) || FUNC_3(VAR_2->i_mode) ||
       FUNC_4(VAR_2->i_mode)))
  return;
 if (FUNC_0(VAR_2) || FUNC_1(VAR_2))
  return;

 FUNC_9();
 VAR_5 = FUNC_6(VAR_2);
 if (VAR_5->i_alloc_type == VAR_0) {
  if (VAR_2->i_sb->s_blocksize <
    (FUNC_13(VAR_2) +
     VAR_2->i_size)) {
   FUNC_12(VAR_2, VAR_2->i_size, &VAR_4);
   if (VAR_5->i_alloc_type == VAR_0) {
    VAR_2->i_size = VAR_5->i_lenAlloc;
    FUNC_16();
    return;
   } else
    FUNC_15(VAR_2);
  } else {
   VAR_3 = VAR_2->i_size & (VAR_2->i_sb->s_blocksize - 1);
   FUNC_11(VAR_5->i_ext.i_data + VAR_5->i_lenEAttr + VAR_3,
    0x00, VAR_2->i_sb->s_blocksize -
    VAR_3 - FUNC_13(VAR_2));
   VAR_5->i_lenAlloc = VAR_2->i_size;
  }
 } else {
  FUNC_7(VAR_2->i_mapping, VAR_2->i_size,
        VAR_1);
  FUNC_15(VAR_2);
 }

 VAR_2->i_mtime = VAR_2->i_ctime = FUNC_8(VAR_2->i_sb);
 if (FUNC_2(VAR_2))
  FUNC_14(VAR_2);
 else
  FUNC_10(VAR_2);
 FUNC_16();
}
