
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpr_softc {int msi_msgs; struct mpr_queue* queues; } ;
struct mpr_queue {int qnum; struct mpr_softc* sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mpr_queue* FUNC_0 (int,int ,int) ;
 int FUNC_1 (struct mpr_softc*,int,char*,int,...) ;

__attribute__((used)) static int
FUNC_2(struct mpr_softc *VAR_6)
{
 struct mpr_queue *VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = VAR_6->msi_msgs;
 FUNC_1(VAR_6, VAR_1|VAR_2, "Allocating %d I/O queues\n", VAR_8);

 VAR_6->queues = FUNC_0(sizeof(struct mpr_queue) * VAR_8, VAR_3,
      VAR_4|VAR_5);
 if (VAR_6->queues == ((void*)0))
  return (VAR_0);

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  VAR_7 = &VAR_6->queues[VAR_9];
  FUNC_1(VAR_6, VAR_1, "Configuring queue %d %p\n", VAR_9, VAR_7);
  VAR_7->sc = VAR_6;
  VAR_7->qnum = VAR_9;
 }
 return (0);
}
