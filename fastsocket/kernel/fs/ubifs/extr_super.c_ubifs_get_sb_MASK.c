
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct ubi_volume_info {int cdev; int vol_id; int ubi_num; } ;
struct ubi_volume_desc {int s_flags; struct ubi_volume_desc* s_fs_info; scalar_t__ s_root; } ;
struct super_block {int s_flags; struct super_block* s_fs_info; scalar_t__ s_root; } ;
struct file_system_type {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ubi_volume_desc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ubi_volume_desc*) ;
 int VAR_5 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct ubi_volume_desc*) ;
 struct ubi_volume_desc* FUNC_4 (char const*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct ubi_volume_desc* FUNC_5 (struct file_system_type*,int *,int *,int *) ;
 int FUNC_6 (struct vfsmount*,struct ubi_volume_desc*) ;
 int FUNC_7 (struct ubi_volume_desc*) ;
 int FUNC_8 (struct ubi_volume_desc*,struct ubi_volume_info*) ;
 int FUNC_9 (char*,char const*,int) ;
 int FUNC_10 (struct ubi_volume_desc*,void*,int) ;

__attribute__((used)) static int FUNC_11(struct file_system_type *VAR_8, int VAR_9,
   const char *VAR_10, void *VAR_11, struct vfsmount *VAR_12)
{
 struct ubi_volume_desc *VAR_13;
 struct ubi_volume_info VAR_14;
 struct super_block *VAR_15;
 int VAR_16;

 FUNC_2("name %s, flags %#x", VAR_10, VAR_9);






 VAR_13 = FUNC_4(VAR_10, VAR_5);
 if (FUNC_0(VAR_13)) {
  FUNC_9("cannot open \"%s\", error %d",
     VAR_10, (int)FUNC_1(VAR_13));
  return FUNC_1(VAR_13);
 }
 FUNC_8(VAR_13, &VAR_14);

 FUNC_2("opened ubi%d_%d", VAR_14.ubi_num, VAR_14.vol_id);

 VAR_15 = FUNC_5(VAR_8, &VAR_6, &VAR_7, &VAR_14.cdev);
 if (FUNC_0(VAR_15)) {
  VAR_16 = FUNC_1(VAR_15);
  goto out_close;
 }

 if (VAR_15->s_root) {

  FUNC_2("this ubi volume is already mounted");
  if ((VAR_9 ^ VAR_15->s_flags) & VAR_3) {
   VAR_16 = -VAR_0;
   goto out_deact;
  }
 } else {
  VAR_15->s_flags = VAR_9;




  VAR_15->s_fs_info = VAR_13;
  VAR_16 = FUNC_10(VAR_15, VAR_11, VAR_9 & VAR_4 ? 1 : 0);
  if (VAR_16)
   goto out_deact;

  VAR_15->s_flags |= VAR_1 | VAR_2;
 }


 FUNC_7(VAR_13);

 FUNC_6(VAR_12, VAR_15);
 return 0;

out_deact:
 FUNC_3(VAR_15);
out_close:
 FUNC_7(VAR_13);
 return VAR_16;
}
