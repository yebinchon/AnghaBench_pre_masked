
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fsrecovery {scalar_t__ fsr_magic; int fsr_ncg; int fsr_sblkno; int fsr_fsbtodb; int fsr_fpg; } ;
struct fs {scalar_t__ fs_magic; int fs_ncg; int fs_sblkno; int fs_fsbtodb; int fs_fpg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,char*,int,int) ;
 int VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int ,int*) ;
 int FUNC_5 (struct fs*,int ,int) ;

__attribute__((used)) static int
FUNC_6(char *VAR_5, int VAR_6, struct fs *VAR_7)
{
 struct fsrecovery *VAR_8;
 char *VAR_9;
 u_int VAR_10;
 if (FUNC_4(VAR_6, VAR_0, &VAR_10) == -1)
  return (0);
 VAR_9 = FUNC_0(VAR_10);
 if (VAR_9 == ((void*)0))
  FUNC_2(VAR_1, "calcsb: cannot allocate recovery buffer");
 if (FUNC_1(VAR_6, VAR_9,
     (VAR_3 - VAR_10) / VAR_4, VAR_10) != 0)
  return (0);
 VAR_8 = (struct fsrecovery *)&VAR_9[VAR_10 - sizeof *VAR_8];
 if (VAR_8->fsr_magic != VAR_2)
  return (0);
 FUNC_5(VAR_7, 0, sizeof(struct fs));
 VAR_7->fs_fpg = VAR_8->fsr_fpg;
 VAR_7->fs_fsbtodb = VAR_8->fsr_fsbtodb;
 VAR_7->fs_sblkno = VAR_8->fsr_sblkno;
 VAR_7->fs_magic = VAR_8->fsr_magic;
 VAR_7->fs_ncg = VAR_8->fsr_ncg;
 FUNC_3(VAR_9);
 return (1);
}
