
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct xl_list_data {int xl_rx_dmamap; int xl_rx_tag; TYPE_1__* xl_rx_list; scalar_t__ xl_rx_dmaaddr; } ;
struct xl_chain_data {TYPE_2__* xl_rx_chain; TYPE_2__* xl_rx_head; } ;
struct xl_softc {int xl_mtag; struct xl_list_data xl_ldata; struct xl_chain_data xl_cdata; } ;
struct xl_list_onefrag {int dummy; } ;
struct TYPE_4__ {struct TYPE_4__* xl_next; int xl_map; TYPE_1__* xl_ptr; } ;
struct TYPE_3__ {int xl_next; } ;


 int VAR_0 ;
 int FUNC_0 (struct xl_softc*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct xl_softc*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_5(struct xl_softc *VAR_2)
{
 struct xl_chain_data *VAR_3;
 struct xl_list_data *VAR_4;
 int VAR_5, VAR_6, VAR_7;
 u_int32_t VAR_8;

 FUNC_0(VAR_2);

 VAR_3 = &VAR_2->xl_cdata;
 VAR_4 = &VAR_2->xl_ldata;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_3->xl_rx_chain[VAR_6].xl_ptr = &VAR_4->xl_rx_list[VAR_6];
  VAR_5 = FUNC_1(VAR_2->xl_mtag, 0,
      &VAR_3->xl_rx_chain[VAR_6].xl_map);
  if (VAR_5)
   return (VAR_5);
  VAR_5 = FUNC_4(VAR_2, &VAR_3->xl_rx_chain[VAR_6]);
  if (VAR_5)
   return (VAR_5);
  if (VAR_6 == (VAR_1 - 1))
   VAR_7 = 0;
  else
   VAR_7 = VAR_6 + 1;
  VAR_8 = VAR_4->xl_rx_dmaaddr +
      VAR_7 * sizeof(struct xl_list_onefrag);
  VAR_3->xl_rx_chain[VAR_6].xl_next = &VAR_3->xl_rx_chain[VAR_7];
  VAR_4->xl_rx_list[VAR_6].xl_next = FUNC_3(VAR_8);
 }

 FUNC_2(VAR_4->xl_rx_tag, VAR_4->xl_rx_dmamap, VAR_0);
 VAR_3->xl_rx_head = &VAR_3->xl_rx_chain[0];

 return (0);
}
