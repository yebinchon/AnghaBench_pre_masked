
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sysv_sb_info {int s_forced_ro; int s_type; int s_bytesex; struct super_block* s_sb; } ;
struct sysv4_super_block {int s_time; int s_nfree; int s_type; int s_magic; } ;
struct super_block {int s_flags; int s_id; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef scalar_t__ __le32 ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sysv_sb_info*,int ) ;
 scalar_t__ FUNC_3 (struct sysv_sb_info*,int ) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static int FUNC_5(struct sysv_sb_info *VAR_8, struct buffer_head *VAR_9)
{
 struct super_block *VAR_10 = VAR_8->s_sb;

 struct sysv4_super_block * VAR_11;
 u32 VAR_12;

 VAR_11 = (struct sysv4_super_block *) (VAR_9->b_data + VAR_0/2);
 if (*(__le32 *)&VAR_11->s_magic == FUNC_1(0xfd187e20))
  VAR_8->s_bytesex = VAR_2;
 else if (*(__be32 *)&VAR_11->s_magic == FUNC_0(0xfd187e20))
  VAR_8->s_bytesex = VAR_1;
 else
  return 0;

 VAR_12 = FUNC_3(VAR_8, VAR_11->s_type);

  if (FUNC_2(VAR_8, VAR_11->s_nfree) == 0xffff) {
   VAR_8->s_type = VAR_3;
  VAR_8->s_forced_ro = 1;
   if (!(VAR_10->s_flags & VAR_7)) {
    FUNC_4("SysV FS: SCO EAFS on %s detected, "
     "forcing read-only mode.\n",
     VAR_10->s_id);
   }
   return VAR_12;
  }

 if (FUNC_3(VAR_8, VAR_11->s_time) < VAR_6) {

  if (VAR_12 > 3 || VAR_12 < 1)
   return 0;
  VAR_8->s_type = VAR_4;
  return VAR_12;
 }
 if ((VAR_12 > 3 || VAR_12 < 1) && (VAR_12 > 0x30 || VAR_12 < 0x10))
  return 0;






 if (VAR_12 >= 0x10) {
  FUNC_4("SysV FS: can't handle long file names on %s, "
         "forcing read-only mode.\n", VAR_10->s_id);
  VAR_8->s_forced_ro = 1;
 }

 VAR_8->s_type = VAR_5;
 return VAR_12 >= 0x10 ? VAR_12 >> 4 : VAR_12;
}
