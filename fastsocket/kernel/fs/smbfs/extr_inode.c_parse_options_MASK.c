
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int remote_name; int local_name; } ;
struct smb_mount_data_kernel {unsigned long version; unsigned long uid; unsigned long gid; unsigned long file_mode; unsigned long dir_mode; unsigned long ttl; unsigned long flags; TYPE_1__ codepage; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_0 (char*,char*,char*) ;
 int VAR_9 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char**,int ,char**,char**,unsigned long*,unsigned long*) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_4(struct smb_mount_data_kernel *VAR_10, char *VAR_11)
{
 int VAR_12;
 unsigned long VAR_13;
 unsigned long VAR_14;
 char *VAR_15;
 char *VAR_16;

 VAR_13 = 0;
 while ( (VAR_12 = FUNC_2("smbfs", &VAR_11, VAR_9,
    &VAR_16, &VAR_15, &VAR_13, &VAR_14)) > 0) {

  FUNC_0("'%s' -> '%s'\n", VAR_16, VAR_15 ? VAR_15 : "<none>");
  switch (VAR_12) {
  case 1:

   break;
  case 'v':
   if (VAR_14 != VAR_4) {
   FUNC_1 ("smbfs: Bad mount version %ld, expected %d\n",
    VAR_14, VAR_4);
    return 0;
   }
   VAR_10->version = VAR_14;
   break;
  case 'u':
   VAR_10->uid = VAR_14;
   VAR_13 |= VAR_3;
   break;
  case 'g':
   VAR_10->gid = VAR_14;
   VAR_13 |= VAR_2;
   break;
  case 'f':
   VAR_10->file_mode = (VAR_14 & VAR_8) | VAR_7;
   VAR_13 |= VAR_1;
   break;
  case 'd':
   VAR_10->dir_mode = (VAR_14 & VAR_8) | VAR_6;
   VAR_13 |= VAR_0;
   break;
  case 'i':
   FUNC_3(VAR_10->codepage.local_name, VAR_15,
    VAR_5);
   break;
  case 'c':
   FUNC_3(VAR_10->codepage.remote_name, VAR_15,
    VAR_5);
   break;
  case 't':
   VAR_10->ttl = VAR_14;
   break;
  default:
   FUNC_1 ("smbfs: Unrecognized mount option %s\n",
    VAR_16);
   return -1;
  }
 }
 VAR_10->flags = VAR_13;
 return VAR_12;
}
