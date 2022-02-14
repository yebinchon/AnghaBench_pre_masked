
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amd_ntb_softc {unsigned long long db_valid_mask; int conn_type; int spad_count; int self_spad; int peer_spad; int int_mask; int hb_timer; int db_mask_lock; TYPE_1__* hw_info; } ;
struct TYPE_2__ {unsigned long long db_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (int ,char*,int const) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int ,struct amd_ntb_softc*) ;
 int FUNC_4 (int *,char*,int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct amd_ntb_softc *VAR_6)
{
 VAR_6->db_valid_mask = (1ull << VAR_6->hw_info->db_count) - 1;
 FUNC_4(&VAR_6->db_mask_lock, "amd ntb db bits", ((void*)0), VAR_4);

 switch (VAR_6->conn_type) {
 case 129:
 case 128:
  VAR_6->spad_count >>= 1;

  if (VAR_6->conn_type == 129) {
   VAR_6->self_spad = 0;
   VAR_6->peer_spad = 0x20;
  } else {
   VAR_6->self_spad = 0x20;
   VAR_6->peer_spad = 0;
  }

  FUNC_2(&VAR_6->hb_timer, 1);
  FUNC_3(&VAR_6->hb_timer, VAR_2,
      VAR_5, VAR_6);

  break;

 default:
  FUNC_0(0, "Unsupported AMD NTB topology %d\n",
      VAR_6->conn_type);
  return (VAR_3);
 }

 VAR_6->int_mask = VAR_0;
 FUNC_1(4, VAR_1, VAR_6->int_mask);

 return (0);
}
