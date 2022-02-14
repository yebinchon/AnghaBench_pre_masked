
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rx_bd {void* rx_bd_haddr_lo; void* rx_bd_haddr_hi; } ;
struct bce_softc {int pg_pages; int rx_bd_mbuf_data_len; int * pg_bd_chain_map; int pg_bd_chain_tag; int * pg_bd_chain_paddr; struct rx_bd** pg_bd_chain; void* pg_empty_count; void* max_pg_bd; void* pg_low_watermark; void* free_pg_bd; scalar_t__ pg_cons; scalar_t__ pg_prod; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct bce_softc*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct bce_softc*,int ,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int VAR_15 ;
 int FUNC_9 (struct bce_softc*,int ,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 size_t VAR_19 ;
 int FUNC_10 (struct bce_softc*,int ,int ) ;
 int FUNC_11 (struct bce_softc*) ;
 int FUNC_12 (int ,int ,int) ;
 void* FUNC_13 (int) ;

__attribute__((used)) static int
FUNC_14(struct bce_softc *VAR_20)
{
 struct rx_bd *VAR_21;
 int VAR_22, VAR_23 = 0;
 u32 VAR_24;

 FUNC_4(VAR_12 | VAR_11 | VAR_10 |
  VAR_9);


 VAR_20->pg_prod = 0;
 VAR_20->pg_cons = 0;
 VAR_20->free_pg_bd = VAR_18;
 VAR_20->max_pg_bd = VAR_18;
 FUNC_6(VAR_20->pg_low_watermark = VAR_20->max_pg_bd);
 FUNC_6(VAR_20->pg_empty_count = 0);


 for (VAR_22 = 0; VAR_22 < VAR_20->pg_pages; VAR_22++) {
  int VAR_25;

  VAR_21 = &VAR_20->pg_bd_chain[VAR_22][VAR_19];


  if (VAR_22 == (VAR_20->pg_pages - 1))
   VAR_25 = 0;
  else
   VAR_25 = VAR_22 + 1;


  VAR_21->rx_bd_haddr_hi =
      FUNC_13(FUNC_0(VAR_20->pg_bd_chain_paddr[VAR_25]));
  VAR_21->rx_bd_haddr_lo =
      FUNC_13(FUNC_1(VAR_20->pg_bd_chain_paddr[VAR_25]));
 }


 if (FUNC_2(VAR_20) == VAR_0)
  FUNC_9(VAR_20, VAR_7, VAR_8);

 FUNC_3(VAR_20, FUNC_8(VAR_16), VAR_4, 0);


 VAR_24 = (VAR_20->rx_bd_mbuf_data_len << 16) | VAR_15;
 FUNC_3(VAR_20, FUNC_8(VAR_16), VAR_4, VAR_24);


 FUNC_3(VAR_20, FUNC_8(VAR_16), VAR_6,
  VAR_5);


 VAR_24 = FUNC_0(VAR_20->pg_bd_chain_paddr[0]);
 FUNC_3(VAR_20, FUNC_8(VAR_16), VAR_2, VAR_24);
 VAR_24 = FUNC_1(VAR_20->pg_bd_chain_paddr[0]);
 FUNC_3(VAR_20, FUNC_8(VAR_16), VAR_3, VAR_24);


 FUNC_11(VAR_20);

 for (VAR_22 = 0; VAR_22 < VAR_20->pg_pages; VAR_22++) {
  FUNC_12(VAR_20->pg_bd_chain_tag, VAR_20->pg_bd_chain_map[VAR_22],
      VAR_13 | VAR_14);
 }

 FUNC_7(VAR_1,
     FUNC_10(VAR_20, 0, VAR_17));
 FUNC_5(VAR_12 | VAR_11 | VAR_10 |
  VAR_9);
 return(VAR_23);
}
