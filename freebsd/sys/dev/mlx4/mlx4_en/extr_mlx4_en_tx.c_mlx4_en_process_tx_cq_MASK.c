
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct mlx4_err_cqe {int syndrome; int vendor_err_syndrome; } ;
struct mlx4_en_tx_ring {int size_mask; int cons; int last_nr_txbb; int size; } ;
struct mlx4_en_priv {int cqe_factor; int port_up; struct mlx4_en_tx_ring** tx_ring; } ;
struct mlx4_cq {int cons_index; } ;
struct mlx4_en_cq {size_t ring; int size; struct mlx4_cqe* buf; struct mlx4_cq mcq; } ;
struct mlx4_cqe {int owner_sr_opcode; int wqe_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx4_en_priv*,char*,int ,int ) ;
 int FUNC_3 (struct mlx4_cq*) ;
 int FUNC_4 (struct mlx4_en_priv*,struct mlx4_en_tx_ring*,int) ;
 int FUNC_5 (struct mlx4_en_priv*,struct mlx4_en_tx_ring*,int,int) ;
 struct mlx4_en_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_3,
     struct mlx4_en_cq *VAR_4)
{
 struct mlx4_en_priv *VAR_5 = FUNC_6(VAR_3);
 struct mlx4_cq *VAR_6 = &VAR_4->mcq;
 struct mlx4_en_tx_ring *VAR_7 = VAR_5->tx_ring[VAR_4->ring];
 struct mlx4_cqe *VAR_8;
 u16 VAR_9;
 u16 VAR_10, VAR_11, VAR_12;
 u32 VAR_13 = 0;
 u32 VAR_14 = 0;
 u32 VAR_15 = VAR_6->cons_index;
 int VAR_16 = VAR_4->size;
 u32 VAR_17 = VAR_7->size_mask;
 struct mlx4_cqe *VAR_18 = VAR_4->buf;
 int VAR_19 = VAR_5->cqe_factor;

 if (!VAR_5->port_up)
  return 0;

 VAR_9 = VAR_15 & VAR_17;
 VAR_8 = &VAR_18[(VAR_9 << VAR_19) + VAR_19];
 VAR_11 = VAR_7->cons & VAR_17;
 VAR_12 = VAR_11;


 while (FUNC_0(VAR_8->owner_sr_opcode & VAR_2,
   VAR_15 & VAR_16)) {




  FUNC_7();

  if (FUNC_8((VAR_8->owner_sr_opcode & VAR_1) ==
        VAR_0)) {
   FUNC_2(VAR_5, "CQE completed in error - vendor syndrom: 0x%x syndrom: 0x%x\n",
          ((struct mlx4_err_cqe *)VAR_8)->
           vendor_err_syndrome,
          ((struct mlx4_err_cqe *)VAR_8)->syndrome);
  }


  VAR_10 = FUNC_1(VAR_8->wqe_index) & VAR_17;

  do {
   VAR_13 += VAR_7->last_nr_txbb;
   VAR_11 = (VAR_11 + VAR_7->last_nr_txbb) & VAR_17;

   VAR_7->last_nr_txbb = FUNC_4(
       VAR_5, VAR_7, VAR_11);
   FUNC_5(VAR_5, VAR_7, VAR_12,
       !!((VAR_7->cons + VAR_14) &
      VAR_7->size));
   VAR_12 = VAR_11;
   VAR_14 = VAR_13;
  } while (VAR_11 != VAR_10);

  ++VAR_15;
  VAR_9 = VAR_15 & VAR_17;
  VAR_8 = &VAR_18[(VAR_9 << VAR_19) + VAR_19];
 }






 VAR_6->cons_index = VAR_15;
 FUNC_3(VAR_6);
 FUNC_9();
 VAR_7->cons += VAR_13;

 return (0);
}
