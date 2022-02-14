
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_softc {scalar_t__ conn_type; unsigned long long db_count; unsigned long long db_valid_mask; int heartbeat_timer; int device; int * xlat_reg; int * peer_reg; int * self_reg; int * reg; int db_vec_shift; int db_vec_count; int spad_count; } ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int *,int ,int ,struct ntb_softc*) ;
 int FUNC_2 (struct ntb_softc*) ;
 int FUNC_3 (struct ntb_softc*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int,int ,int) ;
 int FUNC_6 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_7(struct ntb_softc *VAR_15)
{
 int VAR_16;

 FUNC_0(VAR_15->conn_type == VAR_5,
     ("Unsupported NTB configuration (%d)\n", VAR_15->conn_type));

 VAR_15->spad_count = VAR_3;
 VAR_15->db_count = VAR_0;
 VAR_15->db_vec_count = VAR_1;
 VAR_15->db_vec_shift = VAR_2;
 VAR_15->db_valid_mask = (1ull << VAR_15->db_count) - 1;

 VAR_15->reg = &VAR_13;
 VAR_15->self_reg = &VAR_12;
 VAR_15->peer_reg = &VAR_10;
 VAR_15->xlat_reg = &VAR_14;





 FUNC_6(VAR_15->device, 0xFC, 0x4, 4);

 FUNC_2(VAR_15);


 FUNC_5(2, VAR_4,
     VAR_9 | VAR_8);

 VAR_16 = FUNC_3(VAR_15);
 if (VAR_16 != 0)
  return (VAR_16);


 FUNC_4(VAR_15->device, VAR_6, VAR_7);

 FUNC_1(&VAR_15->heartbeat_timer, 0, VAR_11, VAR_15);

 return (0);
}
