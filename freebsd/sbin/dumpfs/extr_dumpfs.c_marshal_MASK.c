
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fs {char* fs_volname; int fs_flags; int fs_maxcontig; int fs_bsize; int fs_maxbsize; int fs_maxbpg; int fs_fsize; int fs_avgfilesize; int fs_avgfpdir; int fs_ipg; int fs_minfree; int fs_optim; int fs_size; int fs_metaspace; int fs_fpg; } ;
typedef int intmax_t ;
struct TYPE_2__ {char* d_name; int d_ufs; struct fs d_fs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (struct fs*,int) ;
 int FUNC_1 (struct fs*,int ) ;
 scalar_t__ FUNC_2 (struct fs*,int ) ;
 int FUNC_3 (struct fs*,int ) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_6)
{
 struct fs *VAR_7;

 VAR_7 = &VAR_5.d_fs;

 FUNC_4("# newfs command for %s (%s)\n", VAR_6, VAR_5.d_name);
 FUNC_4("newfs ");
 if (VAR_7->fs_volname[0] != '\0')
  FUNC_4("-L %s ", VAR_7->fs_volname);
 FUNC_4("-O %d ", VAR_5.d_ufs);
 if (VAR_7->fs_flags & VAR_0)
  FUNC_4("-U ");
 FUNC_4("-a %d ", VAR_7->fs_maxcontig);
 FUNC_4("-b %d ", VAR_7->fs_bsize);

 FUNC_4("-d %d ", VAR_7->fs_maxbsize);
 FUNC_4("-e %d ", VAR_7->fs_maxbpg);
 FUNC_4("-f %d ", VAR_7->fs_fsize);
 FUNC_4("-g %d ", VAR_7->fs_avgfilesize);
 FUNC_4("-h %d ", VAR_7->fs_avgfpdir);
 FUNC_4("-i %jd ", FUNC_0(VAR_7, FUNC_3(VAR_7, FUNC_1(VAR_7,
     VAR_7->fs_fpg)) / VAR_7->fs_ipg));
 if (VAR_7->fs_flags & VAR_3)
  FUNC_4("-j ");
 if (VAR_7->fs_flags & VAR_1)
  FUNC_4("-J ");
 FUNC_4("-k %jd ", VAR_7->fs_metaspace);
 if (VAR_7->fs_flags & VAR_2)
  FUNC_4("-l ");
 FUNC_4("-m %d ", VAR_7->fs_minfree);

 FUNC_4("-o ");
 switch (VAR_7->fs_optim) {
 case 129:
  FUNC_4("space ");
  break;
 case 128:
  FUNC_4("time ");
  break;
 default:
  FUNC_4("unknown ");
  break;
 }

 FUNC_4("-s %jd ", (intmax_t)FUNC_2(VAR_7, VAR_7->fs_size));
 if (VAR_7->fs_flags & VAR_4)
  FUNC_4("-t ");
 FUNC_4("%s ", VAR_5.d_name);
 FUNC_4("\n");

 return 0;
}
