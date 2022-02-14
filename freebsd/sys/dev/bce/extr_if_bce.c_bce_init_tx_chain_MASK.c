
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_bd {void* tx_bd_haddr_lo; void* tx_bd_haddr_hi; } ;
struct bce_softc {int tx_pages; int * tx_bd_chain_paddr; struct tx_bd** tx_bd_chain; scalar_t__ tx_full_count; scalar_t__ tx_hi_watermark; int max_tx_bd; scalar_t__ used_tx_bd; scalar_t__ tx_prod_bseq; scalar_t__ tx_cons; scalar_t__ tx_prod; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_6 (struct bce_softc*,int ,int ) ;
 int FUNC_7 (struct bce_softc*) ;
 void* FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct bce_softc *VAR_7)
{
 struct tx_bd *VAR_8;
 int VAR_9, VAR_10 = 0;

 FUNC_2(VAR_2 | VAR_3 | VAR_1);


 VAR_7->tx_prod = 0;
 VAR_7->tx_cons = 0;
 VAR_7->tx_prod_bseq = 0;
 VAR_7->used_tx_bd = 0;
 VAR_7->max_tx_bd = VAR_5;
 FUNC_4(VAR_7->tx_hi_watermark = 0);
 FUNC_4(VAR_7->tx_full_count = 0);
 for (VAR_9 = 0; VAR_9 < VAR_7->tx_pages; VAR_9++) {
  int VAR_11;

  VAR_8 = &VAR_7->tx_bd_chain[VAR_9][VAR_6];


  if (VAR_9 == (VAR_7->tx_pages - 1))
   VAR_11 = 0;
  else
   VAR_11 = VAR_9 + 1;

  VAR_8->tx_bd_haddr_hi =
      FUNC_8(FUNC_0(VAR_7->tx_bd_chain_paddr[VAR_11]));
  VAR_8->tx_bd_haddr_lo =
      FUNC_8(FUNC_1(VAR_7->tx_bd_chain_paddr[VAR_11]));
 }

 FUNC_7(VAR_7);

 FUNC_5(VAR_0, FUNC_6(VAR_7, 0, VAR_4));
 FUNC_3(VAR_2 | VAR_3 | VAR_1);

 return(VAR_10);
}
