
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pvscsi_softc {struct pvscsi_ring_msg_desc* msg_ring; struct pvscsi_rings_state* rings_state; int lock; } ;
struct pvscsi_rings_state {int msg_cons_idx; int msg_prod_idx; int msg_num_entries_log2; } ;
struct pvscsi_ring_msg_desc {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct pvscsi_softc*,struct pvscsi_ring_msg_desc*) ;

__attribute__((used)) static void
FUNC_4(struct pvscsi_softc *VAR_1)
{
 struct pvscsi_ring_msg_desc *VAR_2;
 struct pvscsi_rings_state *VAR_3;
 struct pvscsi_ring_msg_desc *VAR_4;
 uint32_t VAR_5;

 FUNC_2(&VAR_1->lock, VAR_0);

 VAR_3 = VAR_1->rings_state;
 VAR_2 = VAR_1->msg_ring;
 VAR_5 = FUNC_0(VAR_3->msg_num_entries_log2);

 while (VAR_3->msg_cons_idx != VAR_3->msg_prod_idx) {
  VAR_4 = VAR_2 + (VAR_3->msg_cons_idx & VAR_5);

  FUNC_3(VAR_1, VAR_4);

  FUNC_1();
  VAR_3->msg_cons_idx++;
 }
}
