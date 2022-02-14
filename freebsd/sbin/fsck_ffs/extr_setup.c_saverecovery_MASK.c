
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct fsrecovery {scalar_t__ fsr_magic; int fsr_ncg; int fsr_sblkno; int fsr_fsbtodb; int fsr_fpg; } ;
struct TYPE_2__ {scalar_t__ fs_magic; int fs_ncg; int fs_sblkno; int fs_fsbtodb; int fs_fpg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,char*,int,int) ;
 int FUNC_2 (int,char*,int,int) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int ,int*) ;
 int FUNC_5 (char*) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void
FUNC_6(int VAR_5, int VAR_6)
{
 struct fsrecovery *VAR_7;
 char *VAR_8;
 u_int VAR_9;

 if (VAR_4.fs_magic != VAR_1 ||
     FUNC_4(VAR_5, VAR_0, &VAR_9) == -1 ||
     (VAR_8 = FUNC_0(VAR_9)) == ((void*)0) ||
     FUNC_1(VAR_5, VAR_8, (VAR_2 - VAR_9) / VAR_3,
       VAR_9) != 0) {
  FUNC_5("RECOVERY DATA COULD NOT BE CREATED\n");
  return;
 }
 VAR_7 = (struct fsrecovery *)&VAR_8[VAR_9 - sizeof *VAR_7];
 VAR_7->fsr_magic = VAR_4.fs_magic;
 VAR_7->fsr_fpg = VAR_4.fs_fpg;
 VAR_7->fsr_fsbtodb = VAR_4.fs_fsbtodb;
 VAR_7->fsr_sblkno = VAR_4.fs_sblkno;
 VAR_7->fsr_ncg = VAR_4.fs_ncg;
 FUNC_2(VAR_6, VAR_8, (VAR_2 - VAR_9) / VAR_9, VAR_9);
 FUNC_3(VAR_8);
}
