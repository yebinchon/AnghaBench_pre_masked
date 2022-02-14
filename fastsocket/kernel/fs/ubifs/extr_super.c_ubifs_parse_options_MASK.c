
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int substring_t ;
struct TYPE_2__ {int unmount_mode; int bulk_read; int chk_data_crc; int override_compr; int compr_type; } ;
struct ubifs_info {int bulk_read; int no_chk_data_crc; struct super_block* vfs_sb; TYPE_1__ mount_opts; int default_compr; } ;
struct super_block {unsigned long s_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int *) ;
 unsigned long FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char**,char*) ;
 int VAR_6 ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static int FUNC_7(struct ubifs_info *VAR_7, char *VAR_8,
          int VAR_9)
{
 char *VAR_10;
 substring_t VAR_11[VAR_2];

 if (!VAR_8)
  return 0;

 while ((VAR_10 = FUNC_5(&VAR_8, ","))) {
  int VAR_12;

  if (!*VAR_10)
   continue;

  VAR_12 = FUNC_2(VAR_10, VAR_6, VAR_11);
  switch (VAR_12) {





  case 132:
   VAR_7->mount_opts.unmount_mode = 2;
   break;
  case 129:
   VAR_7->mount_opts.unmount_mode = 1;
   break;
  case 134:
   VAR_7->mount_opts.bulk_read = 2;
   VAR_7->bulk_read = 1;
   break;
  case 131:
   VAR_7->mount_opts.bulk_read = 1;
   VAR_7->bulk_read = 0;
   break;
  case 133:
   VAR_7->mount_opts.chk_data_crc = 2;
   VAR_7->no_chk_data_crc = 0;
   break;
  case 130:
   VAR_7->mount_opts.chk_data_crc = 1;
   VAR_7->no_chk_data_crc = 1;
   break;
  case 128:
  {
   char *VAR_13 = FUNC_1(&VAR_11[0]);

   if (!VAR_13)
    return -VAR_1;
   if (!FUNC_4(VAR_13, "none"))
    VAR_7->mount_opts.compr_type = VAR_4;
   else if (!FUNC_4(VAR_13, "lzo"))
    VAR_7->mount_opts.compr_type = VAR_3;
   else if (!FUNC_4(VAR_13, "zlib"))
    VAR_7->mount_opts.compr_type = VAR_5;
   else {
    FUNC_6("unknown compressor \"%s\"", VAR_13);
    FUNC_0(VAR_13);
    return -VAR_0;
   }
   FUNC_0(VAR_13);
   VAR_7->mount_opts.override_compr = 1;
   VAR_7->default_compr = VAR_7->mount_opts.compr_type;
   break;
  }
  default:
  {
   unsigned long VAR_14;
   struct super_block *VAR_15 = VAR_7->vfs_sb;

   VAR_14 = FUNC_3(VAR_10);
   if (!VAR_14) {
    FUNC_6("unrecognized mount option \"%s\" "
       "or missing value", VAR_10);
    return -VAR_0;
   }
   VAR_15->s_flags |= VAR_14;
   break;
  }
  }
 }

 return 0;
}
