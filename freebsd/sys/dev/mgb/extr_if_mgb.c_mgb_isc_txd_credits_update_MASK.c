
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct mgb_ring_data {size_t* head_wb; size_t last_head; struct mgb_ring_desc* ring; } ;
struct mgb_softc {struct mgb_ring_data tx_ring_data; } ;
struct mgb_ring_desc {int dummy; } ;


 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (struct mgb_ring_desc*,int ,int) ;

__attribute__((used)) static int
FUNC_3(void *VAR_0, uint16_t VAR_1, bool VAR_2)
{
 struct mgb_softc *VAR_3;
 struct mgb_ring_desc *VAR_4;
 struct mgb_ring_data *VAR_5;
 int VAR_6 = 0;
 FUNC_0(VAR_1 == 0, ("tried to credits_update TX Channel %d.\n",
     VAR_1));
 VAR_3 = VAR_0;
 VAR_5 = &VAR_3->tx_ring_data;

 while (*(VAR_5->head_wb) != VAR_5->last_head) {
  if (!VAR_2)
   return 1;

  VAR_4 = &VAR_5->ring[VAR_5->last_head];
  FUNC_2(VAR_4, 0, sizeof(struct mgb_ring_desc));
  VAR_5->last_head = FUNC_1(VAR_5->last_head);
  VAR_6++;
 }

 return (VAR_6);
}
