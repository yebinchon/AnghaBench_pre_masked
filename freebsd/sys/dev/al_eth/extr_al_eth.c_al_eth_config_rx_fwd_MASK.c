
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct al_eth_fwd_ctrl_table_entry {int filter; int udma_sel; int queue_sel_2; int queue_sel_1; int prio_sel; } ;
struct al_eth_adapter {int * rss_ind_tbl; int * toeplitz_hash_key; int hal_adapter; } ;


 int VAR_0 ;
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
 int FUNC_0 (int *,int ,struct al_eth_fwd_ctrl_table_entry*) ;
 int FUNC_1 (struct al_eth_adapter*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct al_eth_adapter*,int ,int) ;
 int FUNC_6 (struct al_eth_adapter*,int) ;
 int FUNC_7 (struct al_eth_adapter*,int ,int) ;
 int FUNC_8 (struct al_eth_adapter*,int,int ,int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 () ;

__attribute__((used)) static void
FUNC_12(struct al_eth_adapter *VAR_12)
{
 struct al_eth_fwd_ctrl_table_entry VAR_13;
 int VAR_14;


 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++)
  FUNC_2(&VAR_12->hal_adapter, VAR_14, VAR_14);


 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++)
  FUNC_3(&VAR_12->hal_adapter, VAR_14, VAR_14 >> 1);

 VAR_13.prio_sel = VAR_0;
 VAR_13.queue_sel_1 = VAR_1;
 VAR_13.queue_sel_2 = VAR_2;
 VAR_13.udma_sel = VAR_3;
 VAR_13.filter = VAR_11;

 FUNC_0(&VAR_12->hal_adapter, VAR_11, &VAR_13);





 FUNC_7(VAR_12, VAR_7,
     1);
 FUNC_5(VAR_12, VAR_6, 1);
 FUNC_6(VAR_12, 0);


 for (VAR_14 = 0; VAR_14 < sizeof(VAR_12->toeplitz_hash_key); VAR_14++)
  *((uint8_t*)VAR_12->toeplitz_hash_key + VAR_14) = (uint8_t)FUNC_11();

 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
  FUNC_4(&VAR_12->hal_adapter, VAR_14,
      FUNC_10(VAR_12->toeplitz_hash_key[VAR_14]));

 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
  VAR_12->rss_ind_tbl[VAR_14] = FUNC_9(VAR_14,
      VAR_8);
  FUNC_8(VAR_12, VAR_14, 0,
      VAR_12->rss_ind_tbl[VAR_14]);
 }

 FUNC_1(VAR_12);
}
