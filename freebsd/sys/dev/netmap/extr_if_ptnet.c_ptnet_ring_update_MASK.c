
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptnet_queue {struct nm_csb_ktoa* ktoa; struct nm_csb_atok* atok; } ;
struct nm_csb_ktoa {int kern_need_kick; } ;
struct nm_csb_atok {unsigned int sync_flags; } ;
struct netmap_ring {unsigned int head; unsigned int cur; } ;
struct netmap_kring {unsigned int rcur; unsigned int rhead; struct netmap_ring* ring; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct nm_csb_atok*,unsigned int,unsigned int) ;
 int FUNC_2 (struct ptnet_queue*) ;

__attribute__((used)) static void
FUNC_3(struct ptnet_queue *VAR_0, struct netmap_kring *VAR_1,
    unsigned int VAR_2, unsigned int VAR_3)
{
 struct netmap_ring *VAR_4 = VAR_1->ring;
 struct nm_csb_atok *VAR_5 = VAR_0->atok;
 struct nm_csb_ktoa *VAR_6 = VAR_0->ktoa;




 VAR_4->head = VAR_4->cur = VAR_2;


 VAR_1->rcur = VAR_1->rhead = VAR_2;

 FUNC_1(VAR_5, VAR_1->rcur, VAR_1->rhead);


 if (FUNC_0(VAR_6->kern_need_kick)) {
  VAR_5->sync_flags = VAR_3;
  FUNC_2(VAR_0);
 }
}
