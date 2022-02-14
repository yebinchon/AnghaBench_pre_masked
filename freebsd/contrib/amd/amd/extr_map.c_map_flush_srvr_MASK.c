
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int fs_host; } ;
typedef TYPE_3__ fserver ;
struct TYPE_10__ {int am_ttl; int am_path; TYPE_1__* am_al; } ;
typedef TYPE_4__ am_node ;
struct TYPE_8__ {TYPE_3__* mf_server; } ;
struct TYPE_7__ {TYPE_2__* al_mnt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_4__** VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 () ;

void
FUNC_3(fserver *VAR_3)
{
  int VAR_4;
  int VAR_5 = 0;

  for (VAR_4 = VAR_2; VAR_4 >= 0; --VAR_4) {
    am_node *VAR_6 = VAR_1[VAR_4];

    if (VAR_6 && VAR_6->am_al->al_mnt && VAR_6->am_al->al_mnt->mf_server == VAR_3) {
      FUNC_1(VAR_0, "Flushed %s; dependent on %s", VAR_6->am_path, VAR_3->fs_host);
      VAR_6->am_ttl = FUNC_0(((void*)0));
      VAR_5 = 1;
    }
  }
  if (VAR_5)
    FUNC_2();
}
