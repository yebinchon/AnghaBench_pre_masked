
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int mf_fsflags; } ;
typedef TYPE_2__ mntfs ;
struct TYPE_12__ {char* am_path; TYPE_1__* am_al; } ;
typedef TYPE_3__ am_node ;
struct TYPE_10__ {TYPE_2__* al_mnt; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*) ;
 char* FUNC_4 (char*,char*,char*,char*) ;

am_node *
FUNC_5(am_node *VAR_1, char *VAR_2)
{
  am_node *VAR_3;
  mntfs *VAR_4 = VAR_1->am_al->al_mnt;




  VAR_3 = FUNC_1();
  if (VAR_3) {



    FUNC_2(VAR_3, VAR_2);




    FUNC_3(VAR_3, VAR_1);
    VAR_3->am_path = FUNC_4(VAR_3->am_path,
         (VAR_4->mf_fsflags & VAR_0)
         ? ""
         : VAR_1->am_path,
         *VAR_2 == '/' ? "" : "/", VAR_2);
    FUNC_0("setting path to %s", VAR_3->am_path);
  }

  return VAR_3;
}
