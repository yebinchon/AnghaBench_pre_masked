
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx_bd {void* rx_bd_haddr_lo; void* rx_bd_haddr_hi; } ;
struct bce_softc {int rx_pages; int * rx_bd_chain_map; int rx_bd_chain_tag; void* rx_empty_count; void* rx_low_watermark; int * rx_bd_chain_paddr; struct rx_bd** rx_bd_chain; void* max_rx_bd; void* free_rx_bd; scalar_t__ rx_prod_bseq; scalar_t__ rx_cons; scalar_t__ rx_prod; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ,int ) ;
 int VAR_7 ;
 void* VAR_8 ;
 size_t VAR_9 ;
 int FUNC_6 (struct bce_softc*,int ,int ) ;
 int FUNC_7 (struct bce_softc*) ;
 int FUNC_8 (struct bce_softc*) ;
 int FUNC_9 (int ,int ,int) ;
 void* FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(struct bce_softc *VAR_10)
{
 struct rx_bd *VAR_11;
 int VAR_12, VAR_13 = 0;

 FUNC_2(VAR_4 | VAR_3 | VAR_2 |
     VAR_1);


 VAR_10->rx_prod = 0;
 VAR_10->rx_cons = 0;
 VAR_10->rx_prod_bseq = 0;
 VAR_10->free_rx_bd = VAR_8;
 VAR_10->max_rx_bd = VAR_8;


 for (VAR_12 = 0; VAR_12 < VAR_10->rx_pages; VAR_12++) {
  int VAR_14;

  VAR_11 = &VAR_10->rx_bd_chain[VAR_12][VAR_9];


  if (VAR_12 == (VAR_10->rx_pages - 1))
   VAR_14 = 0;
  else
   VAR_14 = VAR_12 + 1;


  VAR_11->rx_bd_haddr_hi =
      FUNC_10(FUNC_0(VAR_10->rx_bd_chain_paddr[VAR_14]));
  VAR_11->rx_bd_haddr_lo =
      FUNC_10(FUNC_1(VAR_10->rx_bd_chain_paddr[VAR_14]));
 }


 FUNC_7(VAR_10);

 FUNC_4(VAR_10->rx_low_watermark = VAR_8);
 FUNC_4(VAR_10->rx_empty_count = 0);
 for (VAR_12 = 0; VAR_12 < VAR_10->rx_pages; VAR_12++) {
  FUNC_9(VAR_10->rx_bd_chain_tag, VAR_10->rx_bd_chain_map[VAR_12],
      VAR_5 | VAR_6);
 }

 FUNC_8(VAR_10);

 FUNC_5(VAR_0,
     FUNC_6(VAR_10, 0, VAR_7));
 FUNC_3(VAR_4 | VAR_3 | VAR_2 |
     VAR_1);



 return(VAR_13);
}
