
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udf_sb_info {scalar_t__ s_lvid_bh; int s_dmode; int s_fmode; int s_umask; int s_gid; int s_uid; int s_flags; } ;
struct udf_options {int dmode; int fmode; int umask; int gid; int uid; int flags; } ;
struct super_block {int s_flags; } ;
struct TYPE_2__ {int minUDFWriteRev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (char*,struct udf_options*,int) ;
 TYPE_1__* FUNC_6 (struct udf_sb_info*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct super_block*,int) ;
 int FUNC_9 (struct super_block*) ;

__attribute__((used)) static int FUNC_10(struct super_block *VAR_5, int *VAR_6, char *VAR_7)
{
 struct udf_options VAR_8;
 struct udf_sb_info *VAR_9 = FUNC_0(VAR_5);
 int VAR_10 = 0;

 VAR_8.flags = VAR_9->s_flags;
 VAR_8.uid = VAR_9->s_uid;
 VAR_8.gid = VAR_9->s_gid;
 VAR_8.umask = VAR_9->s_umask;
 VAR_8.fmode = VAR_9->s_fmode;
 VAR_8.dmode = VAR_9->s_dmode;

 if (!FUNC_5(VAR_7, &VAR_8, 1))
  return -VAR_1;

 FUNC_2();
 VAR_9->s_flags = VAR_8.flags;
 VAR_9->s_uid = VAR_8.uid;
 VAR_9->s_gid = VAR_8.gid;
 VAR_9->s_umask = VAR_8.umask;
 VAR_9->s_fmode = VAR_8.fmode;
 VAR_9->s_dmode = VAR_8.dmode;

 if (VAR_9->s_lvid_bh) {
  int VAR_11 = FUNC_1(FUNC_6(VAR_9)->minUDFWriteRev);
  if (VAR_11 > VAR_4)
   *VAR_6 |= VAR_3;
 }

 if ((*VAR_6 & VAR_3) == (VAR_5->s_flags & VAR_3))
  goto out_unlock;

 if (*VAR_6 & VAR_3) {
  FUNC_3(VAR_5);

  VAR_10 = FUNC_8(VAR_5, 1);
  if (VAR_10 < 0 && VAR_10 != -VAR_2)
   VAR_10 = -VAR_0;
 } else {
  FUNC_4(VAR_5);


  VAR_5->s_flags &= ~VAR_3;
  FUNC_9(VAR_5);
 }

out_unlock:
 FUNC_7();
 return VAR_10;
}
