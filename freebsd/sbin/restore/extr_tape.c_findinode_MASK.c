
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s_spcl {int c_type; long c_count; int c_date; scalar_t__ c_inumber; int c_size; int c_extsize; int c_birthtimensec; int c_birthtime; int c_mtimensec; int c_mtime; int c_atimensec; int c_atime; int c_rdev; int c_file_flags; int c_gid; int c_uid; scalar_t__ c_mode; int * c_addr; } ;
struct TYPE_4__ {char* name; scalar_t__ ino; int size; int extsize; int birthtime_nsec; int birthtime_sec; int mtime_nsec; int mtime_sec; int atime_nsec; int atime_sec; int rdev; int file_flags; int gid; int uid; scalar_t__ mode; int action; } ;
struct TYPE_3__ {int c_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct s_spcl*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_6(struct s_spcl *VAR_13)
{
 static long VAR_14 = 0;
 long VAR_15;
 char VAR_16[VAR_2];
 int VAR_17;

 VAR_7.name = "<name unknown>";
 VAR_7.action = VAR_3;
 VAR_7.mode = 0;
 VAR_7.ino = 0;
 do {
  VAR_17 = VAR_13->c_type;
  switch (VAR_17) {

  case 133:



   for (VAR_15 = 0; VAR_15 < VAR_13->c_count; VAR_15++)
    if (VAR_13->c_addr[VAR_15])
     FUNC_5(VAR_16);
   while (FUNC_2(VAR_13) == VAR_1 ||
       FUNC_0(VAR_13->c_date) != VAR_8) {
    VAR_14++;
    if (VAR_0) {
     VAR_6++;
     if (VAR_6 < VAR_2) {
      VAR_4--;
      VAR_5--;
     } else
      VAR_6 = 0;
    }
   }
   break;

  case 129:
   VAR_7.mode = VAR_13->c_mode;
   VAR_7.uid = VAR_13->c_uid;
   VAR_7.gid = VAR_13->c_gid;
   VAR_7.file_flags = VAR_13->c_file_flags;
   VAR_7.rdev = VAR_13->c_rdev;
   VAR_7.atime_sec = VAR_13->c_atime;
   VAR_7.atime_nsec = VAR_13->c_atimensec;
   VAR_7.mtime_sec = VAR_13->c_mtime;
   VAR_7.mtime_nsec = VAR_13->c_mtimensec;
   VAR_7.birthtime_sec = VAR_13->c_birthtime;
   VAR_7.birthtime_nsec = VAR_13->c_birthtimensec;
   VAR_7.extsize = VAR_13->c_extsize;
   VAR_7.size = VAR_13->c_size;
   VAR_7.ino = VAR_13->c_inumber;
   break;

  case 130:

   if (VAR_12 & (VAR_12 + 1)) {
    FUNC_3(0);
    continue;
   }
   VAR_7.ino = VAR_9;
   break;

  case 131:
   VAR_7.name = "<file removal list>";
   break;

  case 132:
   VAR_7.name = "<file dump list>";
   break;

  case 128:
   if (VAR_0)
    FUNC_1(VAR_11, "unexpected tape header\n");
   else
    FUNC_4("unexpected tape header\n");

  default:
   if (VAR_0)
    FUNC_1(VAR_11, "unknown tape header type %d\n",
        VAR_10.c_type);
   else
    FUNC_4("unknown tape header type %d\n",
        VAR_10.c_type);
   while (FUNC_2(VAR_13) == VAR_1 ||
       FUNC_0(VAR_13->c_date) != VAR_8) {
    VAR_14++;
    if (VAR_0) {
     VAR_6++;
     if (VAR_6 < VAR_2) {
      VAR_4--;
      VAR_5--;
     } else
      VAR_6 = 0;
    }
   }

  }
 } while (VAR_17 == 133);
 if (VAR_14 > 0)
  FUNC_1(VAR_11, "resync restore, skipped %ld %s\n",
      VAR_14, VAR_0 ? "bytes" : "blocks");
 VAR_14 = 0;
}
