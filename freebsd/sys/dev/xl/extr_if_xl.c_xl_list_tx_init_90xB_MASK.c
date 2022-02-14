
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xl_list_data {int xl_tx_dmamap; int xl_tx_tag; TYPE_2__* xl_tx_list; scalar_t__ xl_tx_dmaaddr; } ;
struct xl_chain_data {int xl_tx_prod; int xl_tx_cons; scalar_t__ xl_tx_cnt; TYPE_1__* xl_tx_chain; } ;
struct xl_softc {int xl_mtag; struct xl_list_data xl_ldata; struct xl_chain_data xl_cdata; } ;
struct xl_list {int dummy; } ;
struct TYPE_4__ {int xl_status; } ;
struct TYPE_3__ {struct TYPE_3__* xl_prev; struct TYPE_3__* xl_next; scalar_t__ xl_phys; int xl_map; TYPE_2__* xl_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (struct xl_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct xl_softc *VAR_4)
{
 struct xl_chain_data *VAR_5;
 struct xl_list_data *VAR_6;
 int VAR_7, VAR_8;

 FUNC_0(VAR_4);

 VAR_5 = &VAR_4->xl_cdata;
 VAR_6 = &VAR_4->xl_ldata;
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_5->xl_tx_chain[VAR_8].xl_ptr = &VAR_6->xl_tx_list[VAR_8];
  VAR_7 = FUNC_1(VAR_4->xl_mtag, 0,
      &VAR_5->xl_tx_chain[VAR_8].xl_map);
  if (VAR_7)
   return (VAR_7);
  VAR_5->xl_tx_chain[VAR_8].xl_phys = VAR_6->xl_tx_dmaaddr +
      VAR_8 * sizeof(struct xl_list);
  if (VAR_8 == (VAR_2 - 1))
   VAR_5->xl_tx_chain[VAR_8].xl_next = &VAR_5->xl_tx_chain[0];
  else
   VAR_5->xl_tx_chain[VAR_8].xl_next = &VAR_5->xl_tx_chain[VAR_8 + 1];
  if (VAR_8 == 0)
   VAR_5->xl_tx_chain[VAR_8].xl_prev =
       &VAR_5->xl_tx_chain[VAR_2 - 1];
  else
   VAR_5->xl_tx_chain[VAR_8].xl_prev =
       &VAR_5->xl_tx_chain[VAR_8 - 1];
 }

 FUNC_3(VAR_6->xl_tx_list, VAR_3);
 VAR_6->xl_tx_list[0].xl_status = FUNC_4(VAR_1);

 VAR_5->xl_tx_prod = 1;
 VAR_5->xl_tx_cons = 1;
 VAR_5->xl_tx_cnt = 0;

 FUNC_2(VAR_6->xl_tx_tag, VAR_6->xl_tx_dmamap, VAR_0);
 return (0);
}
