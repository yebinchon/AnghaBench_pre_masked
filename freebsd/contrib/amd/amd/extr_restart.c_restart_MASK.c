
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* mnt; struct TYPE_6__* mnext; } ;
typedef TYPE_1__ mntlist ;
struct TYPE_7__ {int mnt_type; int mnt_fsname; } ;
typedef TYPE_2__ mntent_t ;
typedef int am_ops ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int * FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 char* FUNC_5 (int ,char) ;
 scalar_t__ FUNC_6 (char*,char*) ;

void
FUNC_7(void)
{
  mntlist *VAR_3, *VAR_4;





  for (VAR_4 = VAR_3 = FUNC_3("restart", VAR_2);
       VAR_4;
       VAR_4 = VAR_4->mnext) {
    mntent_t *VAR_5 = VAR_4->mnt;
    am_ops *VAR_6 = ((void*)0);

    if (FUNC_0(VAR_5->mnt_type, VAR_0)) {







      char *VAR_7 = FUNC_5(VAR_5->mnt_fsname, ':');
      if (VAR_7 && FUNC_6(VAR_7, "(pid"))
 continue;
    }


    VAR_6 = FUNC_2(VAR_5->mnt_type);





    if (!VAR_6)
      VAR_6 = &VAR_1;

    FUNC_4(VAR_5, VAR_6);
  }




  FUNC_1(VAR_3);
}
