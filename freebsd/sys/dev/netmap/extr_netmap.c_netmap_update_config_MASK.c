
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nm_config_info {scalar_t__ num_tx_rings; scalar_t__ num_tx_descs; scalar_t__ num_rx_rings; scalar_t__ num_rx_descs; scalar_t__ rx_buf_maxsize; } ;
struct netmap_adapter {scalar_t__ num_tx_rings; scalar_t__ num_tx_desc; scalar_t__ num_rx_rings; scalar_t__ num_rx_desc; scalar_t__ rx_buf_maxsize; scalar_t__ active_fds; int name; scalar_t__ (* nm_config ) (struct netmap_adapter*,struct nm_config_info*) ;} ;
typedef int info ;


 int FUNC_0 (struct nm_config_info*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct netmap_adapter*,struct nm_config_info*) ;

int
FUNC_4(struct netmap_adapter *VAR_1)
{
 struct nm_config_info VAR_2;

 FUNC_0(&VAR_2, sizeof(VAR_2));
 if (VAR_1->nm_config == ((void*)0) ||
     VAR_1->nm_config(VAR_1, &VAR_2)) {

  VAR_2.num_tx_rings = VAR_1->num_tx_rings;
  VAR_2.num_tx_descs = VAR_1->num_tx_desc;
  VAR_2.num_rx_rings = VAR_1->num_rx_rings;
  VAR_2.num_rx_descs = VAR_1->num_rx_desc;
  VAR_2.rx_buf_maxsize = VAR_1->rx_buf_maxsize;
 }

 if (VAR_1->num_tx_rings == VAR_2.num_tx_rings &&
     VAR_1->num_tx_desc == VAR_2.num_tx_descs &&
     VAR_1->num_rx_rings == VAR_2.num_rx_rings &&
     VAR_1->num_rx_desc == VAR_2.num_rx_descs &&
     VAR_1->rx_buf_maxsize == VAR_2.rx_buf_maxsize)
  return 0;
 if (VAR_1->active_fds == 0) {
  VAR_1->num_tx_rings = VAR_2.num_tx_rings;
  VAR_1->num_tx_desc = VAR_2.num_tx_descs;
  VAR_1->num_rx_rings = VAR_2.num_rx_rings;
  VAR_1->num_rx_desc = VAR_2.num_rx_descs;
  VAR_1->rx_buf_maxsize = VAR_2.rx_buf_maxsize;
  if (VAR_0)
   FUNC_2("configuration changed for %s: txring %d x %d, "
    "rxring %d x %d, rxbufsz %d",
    VAR_1->name, VAR_1->num_tx_rings, VAR_1->num_tx_desc,
    VAR_1->num_rx_rings, VAR_1->num_rx_desc, VAR_1->rx_buf_maxsize);
  return 0;
 }
 FUNC_1("WARNING: configuration changed for %s while active: "
  "txring %d x %d, rxring %d x %d, rxbufsz %d",
  VAR_1->name, VAR_2.num_tx_rings, VAR_2.num_tx_descs,
  VAR_2.num_rx_rings, VAR_2.num_rx_descs,
  VAR_2.rx_buf_maxsize);
 return 1;
}
