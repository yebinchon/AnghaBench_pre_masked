
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_bdev; } ;
struct ocfs2_dinode {int dummy; } ;
struct ocfs2_blockcheck_stats {int b_lock; } ;
struct ocfs1_vol_disk_hdr {int signature; int minor_version; int major_version; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct ocfs2_blockcheck_stats*,int ,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct super_block*,struct buffer_head**,int ,int) ;
 int FUNC_7 (struct ocfs2_dinode*,struct buffer_head*,int,struct ocfs2_blockcheck_stats*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct super_block *VAR_8,
     struct buffer_head **VAR_9,
     int *VAR_10,
     struct ocfs2_blockcheck_stats *VAR_11)
{
 int VAR_12, VAR_13;
 struct ocfs1_vol_disk_hdr *VAR_14;
 struct ocfs2_dinode *VAR_15;
 int VAR_16;

 *VAR_9 = ((void*)0);


 *VAR_10 = FUNC_0(VAR_8->s_bdev);
 if (*VAR_10 > VAR_5) {
  FUNC_4(VAR_2, "Hardware sector size too large: %d (max=%d)\n",
       *VAR_10, VAR_5);
  VAR_12 = -VAR_1;
  goto bail;
 }


 if (*VAR_10 < VAR_6)
  *VAR_10 = VAR_6;


 VAR_12 = FUNC_6(VAR_8, VAR_9, 0, *VAR_10);
 if (VAR_12 < 0) {
  FUNC_5(VAR_12);
  goto bail;
 }
 VAR_14 = (struct ocfs1_vol_disk_hdr *) (*VAR_9)->b_data;
 if (VAR_14->major_version == VAR_3) {
  FUNC_4(VAR_2, "incompatible version: %u.%u\n",
       VAR_14->major_version, VAR_14->minor_version);
  VAR_12 = -VAR_1;
 }
 if (FUNC_2(VAR_14->signature, VAR_4,
     FUNC_9(VAR_4)) == 0) {
  FUNC_4(VAR_2, "incompatible volume signature: %8s\n",
       VAR_14->signature);
  VAR_12 = -VAR_1;
 }
 FUNC_1(*VAR_9);
 *VAR_9 = ((void*)0);
 if (VAR_12 < 0) {
  FUNC_4(VAR_2, "This is an ocfs v1 filesystem which must be "
       "upgraded before mounting with ocfs v2\n");
  goto bail;
 }






 VAR_12 = -VAR_1;
 for (VAR_16 = *VAR_10;
      VAR_16 <= VAR_5;
      VAR_16 <<= 1) {
  VAR_13 = FUNC_6(VAR_8, VAR_9,
        VAR_7,
        VAR_16);
  if (VAR_13 < 0) {
   VAR_12 = VAR_13;
   FUNC_5(VAR_12);
   break;
  }
  VAR_15 = (struct ocfs2_dinode *) (*VAR_9)->b_data;
  FUNC_3(VAR_11, 0, sizeof(struct ocfs2_blockcheck_stats));
  FUNC_8(&VAR_11->b_lock);
  VAR_13 = FUNC_7(VAR_15, *VAR_9, VAR_16, VAR_11);
  if (VAR_13 < 0) {
   FUNC_1(*VAR_9);
   *VAR_9 = ((void*)0);
  }
  if (VAR_13 != -VAR_0) {
   VAR_12 = VAR_13;
   break;
  }
 }

bail:
 return VAR_12;
}
