
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct nm_selinfo {int kqueue_users; int mtxname; TYPE_1__ si; } ;
struct netmap_priv_d {struct nm_selinfo** np_si; } ;
struct knote {scalar_t__ kn_hook; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 size_t VAR_0 ;
 int FUNC_2 (int *,struct knote*,int ) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct knote *VAR_1)
{
 struct netmap_priv_d *VAR_2 = (struct netmap_priv_d *)VAR_1->kn_hook;
 struct nm_selinfo *VAR_3 = VAR_2->np_si[VAR_0];

 FUNC_2(&VAR_3->si.si_note, VAR_1, 0);
 FUNC_0();
 VAR_3->kqueue_users--;
 FUNC_3("kqueue users for %s: %d", VAR_3->mtxname, VAR_3->kqueue_users);
 FUNC_1();
}
