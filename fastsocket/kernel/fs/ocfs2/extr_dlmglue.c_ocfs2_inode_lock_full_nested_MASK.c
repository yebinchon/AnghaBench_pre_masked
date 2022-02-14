
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {int dummy; } ;
struct inode {int i_state; int i_sb; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {struct ocfs2_lock_res ip_inode_lockres; scalar_t__ ip_blkno; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_8 ;
 int VAR_9 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int VAR_10 ;
 int FUNC_3 (struct ocfs2_super*,struct ocfs2_lock_res*,int,int ,int,int,int ) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int ,char*,unsigned long long,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct inode*,struct buffer_head**,struct buffer_head*) ;
 int FUNC_10 (struct ocfs2_lock_res*,int ) ;
 int FUNC_11 (struct inode*,struct buffer_head**) ;
 int FUNC_12 (struct inode*,int) ;
 scalar_t__ FUNC_13 (struct ocfs2_super*) ;
 scalar_t__ FUNC_14 (struct ocfs2_super*) ;
 int FUNC_15 (struct ocfs2_super*) ;

int FUNC_16(struct inode *VAR_11,
     struct buffer_head **VAR_12,
     int VAR_13,
     int VAR_14,
     int VAR_15)
{
 int VAR_16, VAR_17, VAR_18;
 u32 VAR_19;
 struct ocfs2_lock_res *VAR_20 = ((void*)0);
 struct ocfs2_super *VAR_21 = FUNC_2(VAR_11->i_sb);
 struct buffer_head *VAR_22 = ((void*)0);

 FUNC_0(!VAR_11);

 FUNC_6();

 FUNC_5(0, "inode %llu, take %s META lock\n",
      (unsigned long long)FUNC_1(VAR_11)->ip_blkno,
      VAR_13 ? "EXMODE" : "PRMODE");

 VAR_16 = 0;
 VAR_18 = 0;


 if (FUNC_13(VAR_21)) {
  if (VAR_13)
   VAR_16 = -VAR_6;
  goto bail;
 }

 if (FUNC_14(VAR_21))
  goto local;

 if (!(VAR_14 & VAR_9))
  FUNC_15(VAR_21);

 VAR_20 = &FUNC_1(VAR_11)->ip_inode_lockres;
 VAR_17 = VAR_13 ? VAR_1 : VAR_2;
 VAR_19 = 0;
 if (VAR_14 & VAR_8)
  VAR_19 |= VAR_0;

 VAR_16 = FUNC_3(VAR_21, VAR_20, VAR_17, VAR_19,
          VAR_14, VAR_15, VAR_10);
 if (VAR_16 < 0) {
  if (VAR_16 != -VAR_3 && VAR_16 != -VAR_4)
   FUNC_7(VAR_16);
  goto bail;
 }


 VAR_18 = 1;





 if (!(VAR_14 & VAR_9))
  FUNC_15(VAR_21);

local:






 if (VAR_11->i_state & VAR_7) {
  VAR_16 = 0;
  if (VAR_20)
   FUNC_10(VAR_20, 0);
  goto bail;
 }






 VAR_16 = FUNC_11(VAR_11, &VAR_22);
 if (VAR_16 < 0) {
  if (VAR_16 != -VAR_5)
   FUNC_7(VAR_16);
  goto bail;
 }

 if (VAR_12) {
  VAR_16 = FUNC_9(VAR_11, VAR_12, VAR_22);
  if (VAR_16 < 0) {
   FUNC_7(VAR_16);
   goto bail;
  }
 }

bail:
 if (VAR_16 < 0) {
  if (VAR_12 && (*VAR_12)) {
   FUNC_4(*VAR_12);
   *VAR_12 = ((void*)0);
  }
  if (VAR_18)
   FUNC_12(VAR_11, VAR_13);
 }

 if (VAR_22)
  FUNC_4(VAR_22);

 FUNC_8(VAR_16);
 return VAR_16;
}
