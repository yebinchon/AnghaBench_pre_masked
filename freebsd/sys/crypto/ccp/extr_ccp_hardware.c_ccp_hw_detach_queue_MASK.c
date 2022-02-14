
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_softc {int valid_queues; struct ccp_queue* queues; } ;
struct ccp_queue {int ring_desc_tag; int ring_desc_map; int desc_ring; int completions_ring; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct ccp_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_1, unsigned VAR_2)
{
 struct ccp_softc *VAR_3;
 struct ccp_queue *VAR_4;

 VAR_3 = FUNC_3(VAR_1);
 VAR_4 = &VAR_3->queues[VAR_2];





 if ((VAR_3->valid_queues & (1 << VAR_2)) == 0)
  return;

 FUNC_4(VAR_4->completions_ring, VAR_0);
 FUNC_1(VAR_4->ring_desc_tag, VAR_4->ring_desc_map);
 FUNC_2(VAR_4->ring_desc_tag, VAR_4->desc_ring, VAR_4->ring_desc_map);
 FUNC_0(VAR_4->ring_desc_tag);
}
