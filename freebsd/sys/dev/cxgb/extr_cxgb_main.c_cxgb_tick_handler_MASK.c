
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int starved; } ;
struct sge_qset {TYPE_3__* fl; TYPE_2__ rspq; } ;
struct TYPE_12__ {int rx_fifo_ovfl; } ;
struct cmac {scalar_t__ offset; TYPE_4__ stats; scalar_t__ multiport; } ;
struct port_info {int port_id; struct cmac mac; } ;
struct adapter_params {scalar_t__ rev; int nports; } ;
struct TYPE_9__ {struct sge_qset* qs; } ;
struct TYPE_13__ {int flags; scalar_t__ open_device_map; struct port_info* port; struct adapter_params params; TYPE_1__ sge; } ;
typedef TYPE_5__ adapter_t ;
struct TYPE_11__ {int empty; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (struct port_info*) ;
 int FUNC_2 (scalar_t__*,int ) ;
 int FUNC_3 (TYPE_5__*,scalar_t__) ;
 int FUNC_4 (TYPE_5__*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_5(void *VAR_10, int VAR_11)
{
 adapter_t *VAR_12 = (adapter_t *)VAR_10;
 const struct adapter_params *VAR_13 = &VAR_12->params;
 int VAR_14;
 uint32_t VAR_15, VAR_16;

 if (VAR_12->flags & VAR_3 || !(VAR_12->flags & VAR_4))
  return;

 if (VAR_13->rev == VAR_9 && VAR_13->nports < 4 && VAR_12->open_device_map)
  FUNC_0(VAR_12);

 VAR_15 = FUNC_3(VAR_12, VAR_0) & (VAR_6 | VAR_5);
 if (VAR_15) {
  struct sge_qset *VAR_17 = &VAR_12->sge.qs[0];
  uint32_t VAR_18, VAR_19;

  VAR_19 = FUNC_3(VAR_12, VAR_1) & ~0xff00;

  VAR_18 = 1;
  for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
   if (VAR_19 & VAR_18)
    VAR_17[VAR_14].rspq.starved++;
   VAR_18 <<= 1;
  }

  VAR_18 <<= VAR_8;

  for (VAR_14 = 0; VAR_14 < VAR_8 * 2; VAR_14++) {
   if (VAR_19 & VAR_18) {
    VAR_17[VAR_14 / 2].fl[VAR_14 % 2].empty++;
   }
   VAR_18 <<= 1;
  }


  FUNC_4(VAR_12, VAR_1, VAR_19);
  FUNC_4(VAR_12, VAR_0, VAR_15);
 }

 for (VAR_14 = 0; VAR_14 < VAR_12->params.nports; VAR_14++) {
  struct port_info *VAR_20 = &VAR_12->port[VAR_14];
  struct cmac *VAR_21 = &VAR_20->mac;

  if (!FUNC_2(&VAR_12->open_device_map, VAR_20->port_id))
   continue;

  FUNC_1(VAR_20);

  if (VAR_21->multiport)
   continue;


  VAR_15 = FUNC_3(VAR_12, VAR_2 + VAR_21->offset);
  VAR_16 = 0;
  if (VAR_15 & VAR_7) {
   VAR_21->stats.rx_fifo_ovfl++;
   VAR_16 |= VAR_7;
  }
  FUNC_4(VAR_12, VAR_2 + VAR_21->offset, VAR_16);
 }
}
