
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_priv_d {int * np_nifp; struct netmap_adapter* np_na; } ;
struct netmap_adapter {scalar_t__ active_fds; int na_flags; int num_host_tx_rings; int num_host_rx_rings; int (* nm_krings_delete ) (struct netmap_adapter*) ;int name; int (* nm_register ) (struct netmap_adapter*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct netmap_priv_d*) ;
 int FUNC_2 (struct netmap_adapter*) ;
 int FUNC_3 (struct netmap_adapter*,int *) ;
 int FUNC_4 (struct netmap_adapter*) ;
 int FUNC_5 (struct netmap_adapter*) ;
 int FUNC_6 (struct netmap_priv_d*) ;
 scalar_t__ FUNC_7 (struct netmap_priv_d*) ;
 scalar_t__ FUNC_8 (struct netmap_adapter*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (struct netmap_adapter*,int ) ;
 int FUNC_12 (struct netmap_adapter*) ;

void
FUNC_13(struct netmap_priv_d *VAR_3)
{
 struct netmap_adapter *VAR_4 = VAR_3->np_na;

 FUNC_0();
 VAR_4->active_fds--;

 FUNC_1(VAR_3);
 if (VAR_4->active_fds <= 0 || FUNC_7(VAR_3)) {
  VAR_4->nm_register(VAR_4, 0);
 }


 FUNC_4(VAR_4);

 if (VAR_4->active_fds <= 0) {
  if (VAR_2 & VAR_1)
   FUNC_10("deleting last instance for %s", VAR_4->name);

  if (FUNC_8(VAR_4)) {
   FUNC_9("BUG: netmap on while going to delete the krings");
  }

  VAR_4->nm_krings_delete(VAR_4);


  if (VAR_4->na_flags & VAR_0) {
   VAR_4->num_host_tx_rings = 1;
   VAR_4->num_host_rx_rings = 1;
  } else {
   VAR_4->num_host_tx_rings = 0;
   VAR_4->num_host_rx_rings = 0;
  }
 }


 FUNC_6(VAR_3);

 FUNC_3(VAR_4, VAR_3->np_nifp);

 FUNC_2(VAR_4);

 VAR_3->np_na = ((void*)0);
 VAR_3->np_nifp = ((void*)0);
}
