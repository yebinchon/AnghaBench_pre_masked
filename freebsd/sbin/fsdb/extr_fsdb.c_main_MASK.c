
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* fs_fsmnt; scalar_t__ fs_clean; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int,char*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char**,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;

int
FUNC_10(int VAR_4, char *VAR_5[])
{
 int VAR_6, VAR_7;
 char *VAR_8 = ((void*)0);

 while (-1 != (VAR_6 = FUNC_4(VAR_4, VAR_5, "fdr"))) {
  switch (VAR_6) {
  case 'f':



   break;
  case 'd':
   VAR_0++;
   break;
  case 'r':
   VAR_1++;
   break;
  default:
   FUNC_9();
  }
 }
 VAR_4 -= VAR_2;
 VAR_5 += VAR_2;
 if (VAR_4 != 1)
  FUNC_9();
 else
  VAR_8 = VAR_5[0];

 FUNC_7();
 if (!FUNC_8(VAR_8))
  FUNC_2(1, "cannot set up file system `%s'", VAR_8);
 FUNC_5("%s file system `%s'\nLast Mounted on %s\n",
        VAR_1? "Examining": "Editing", VAR_8, VAR_3.fs_fsmnt);
 VAR_7 = FUNC_1();
 if (!VAR_1) {
  VAR_3.fs_clean = 0;
  FUNC_6();
  FUNC_0(0);
  FUNC_5("*** FILE SYSTEM MARKED DIRTY\n");
  FUNC_5("*** BE SURE TO RUN FSCK TO CLEAN UP ANY DAMAGE\n");
  FUNC_5("*** IF IT WAS MOUNTED, RE-MOUNT WITH -u -o reload\n");
 }
 FUNC_3(VAR_7);
}
