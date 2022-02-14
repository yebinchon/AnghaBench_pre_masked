
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int voidp ;
typedef long u_short ;
struct TYPE_6__ {TYPE_2__* mnt; struct TYPE_6__* mnext; } ;
typedef TYPE_1__ mntlist ;
struct TYPE_7__ {long mnt_fsname; long mnt_dir; int mnt_type; } ;
typedef TYPE_2__ mntent_t ;
typedef int am_ops ;
typedef int SVCXPRT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int*,long*,int **,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (long,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 long VAR_8 ;
 int FUNC_6 (int ,char*,...) ;
 TYPE_1__* FUNC_7 (char*,int ) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (char*,char*,long*) ;
 char* FUNC_10 (long,char) ;
 int FUNC_11 (char*,char*) ;

void
FUNC_12(void)
{
  mntlist *VAR_9, *VAR_10;

  u_short VAR_11[256];

  FUNC_5((voidp) &VAR_11, 0, sizeof(u_short) * 256);





  for (VAR_10 = VAR_9 = FUNC_7("restart", VAR_6);
       VAR_10;
       VAR_10 = VAR_10->mnext) {
    mntent_t *VAR_12 = VAR_10->mnt;
    am_ops *VAR_13 = ((void*)0);
    char *VAR_14;
    long VAR_15;
    u_short VAR_16;
    int VAR_17;

    if (!FUNC_0(VAR_12->mnt_type, VAR_1))
      continue;







    VAR_14 = FUNC_10(VAR_12->mnt_fsname, ':');
    if (!VAR_14 || !FUNC_11(VAR_14, "(pid"))
      continue;

    VAR_17 = 1;

    FUNC_6(VAR_2, "%s is an existing automount point", VAR_12->mnt_dir);


    if (FUNC_9(VAR_14, "%*[^(](pid%ld%*[,)]", &VAR_15) != 1) {
      FUNC_6(VAR_2, "Can't parse pid in %s", VAR_12->mnt_fsname);
      goto give_up;
    }
    if (FUNC_4(VAR_15, 0) != -1 || VAR_5 != VAR_0) {
      FUNC_6(VAR_2, "Automounter (pid: %ld) still alive", VAR_15);
      goto give_up;
    }







    if (FUNC_9(VAR_14, "%*[^,],port%hu)", &VAR_16) != 1) {
      FUNC_6(VAR_2, "No port specified for %s", VAR_12->mnt_fsname);
      goto give_up;
    }


    if (VAR_16 != VAR_8) {
      int VAR_18;
      for (VAR_18 = 0; VAR_18 < 256; VAR_18++) {
 if (VAR_11[VAR_18] == VAR_16 ||
     VAR_11[VAR_18] == 0)
   break;
      }
      if (VAR_18 == 256) {
 FUNC_6(VAR_2, "Too many open ports (256)");
 goto give_up;
      }

      if (VAR_11[VAR_18] == 0) {
 int VAR_19;
 SVCXPRT *VAR_20;
 if (FUNC_1(&VAR_19, &VAR_16, &VAR_20, VAR_7,
     FUNC_3(VAR_7)) != 0) {
   FUNC_6(VAR_2, "Can't bind to port %u", VAR_16);
   goto give_up;
 }
 VAR_11[VAR_18] = VAR_8 = VAR_16;
      }
    }
    VAR_17 = 0;

  give_up:
    if (VAR_17) {
      FUNC_6(VAR_2, "Can't restart %s, leaving it alone", VAR_12->mnt_dir);
      VAR_13 = &VAR_3;
    } else {
      VAR_13 = &VAR_4;
    }

    FUNC_8(VAR_12, VAR_13);
  }


  FUNC_2(VAR_9);
}
