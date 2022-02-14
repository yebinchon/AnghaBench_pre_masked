
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_slot {int flags; } ;
struct netmap_ring {unsigned int tail; struct netmap_slot* slot; } ;
struct netmap_kring {scalar_t__ nkr_num_slots; struct netmap_ring* ring; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static unsigned int
FUNC_1(struct netmap_kring *VAR_1, unsigned int VAR_2)
{
 struct netmap_ring *VAR_3 = VAR_1->ring;
 struct netmap_slot *VAR_4 = VAR_3->slot + VAR_2;

 for (;;) {
  VAR_2 = FUNC_0(VAR_2, VAR_1->nkr_num_slots - 1);
  if (!(VAR_4->flags & VAR_0) || VAR_2 == VAR_3->tail) {
   break;
  }
  VAR_4 = VAR_3->slot + VAR_2;
 }

 return VAR_2;
}
