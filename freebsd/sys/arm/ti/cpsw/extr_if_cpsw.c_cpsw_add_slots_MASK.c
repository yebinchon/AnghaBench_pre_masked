
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpsw_softc {int avail; int dev; int mbuf_dtag; int _slots; } ;
struct cpsw_slot {int dmamap; } ;
struct cpsw_queue {int queue_slots; int avail_queue_len; int avail; } ;


 int VAR_0 ;
 struct cpsw_slot* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct cpsw_slot*,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,char*) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct cpsw_softc *VAR_2, struct cpsw_queue *VAR_3, int VAR_4)
{
 const int VAR_5 = FUNC_5(VAR_2->_slots);
 struct cpsw_slot *VAR_6;
 int VAR_7;

 if (VAR_4 < 0)
  VAR_4 = VAR_5;

 for (VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7) {
  VAR_6 = FUNC_0(&VAR_2->avail);
  if (VAR_6 == ((void*)0))
   return (0);
  if (FUNC_3(VAR_2->mbuf_dtag, 0, &VAR_6->dmamap)) {
   FUNC_4(VAR_2->dev, "failed to create dmamap\n");
   return (VAR_0);
  }
  FUNC_2(&VAR_2->avail, VAR_1);
  FUNC_1(&VAR_3->avail, VAR_6, VAR_1);
  ++VAR_3->avail_queue_len;
  ++VAR_3->queue_slots;
 }
 return (0);
}
