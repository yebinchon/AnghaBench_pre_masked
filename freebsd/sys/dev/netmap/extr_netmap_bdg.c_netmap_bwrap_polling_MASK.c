
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct nm_bdg_kthread {size_t qfirst; size_t qlast; TYPE_1__* bps; } ;
struct netmap_kring {int (* nm_notify ) (struct netmap_kring*,int ) ;} ;
struct netmap_bwrap_adapter {int hwna; } ;
struct TYPE_2__ {struct netmap_bwrap_adapter* bna; } ;


 struct netmap_kring** FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct netmap_kring*,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct nm_bdg_kthread *VAR_2 = VAR_1;
 struct netmap_bwrap_adapter *VAR_3;
 u_int VAR_4, VAR_5, VAR_6;
 struct netmap_kring **VAR_7, *VAR_8;

 if (!VAR_2)
  return;
 VAR_4 = VAR_2->qfirst;
 VAR_5 = VAR_2->qlast;
 VAR_3 = VAR_2->bps->bna;
 VAR_7 = FUNC_0(VAR_3->hwna, VAR_0);

 for (VAR_6 = VAR_4; VAR_6 < VAR_5; VAR_6++) {
  VAR_8 = VAR_7[VAR_6];
  VAR_8->nm_notify(VAR_8, 0);
 }
}
