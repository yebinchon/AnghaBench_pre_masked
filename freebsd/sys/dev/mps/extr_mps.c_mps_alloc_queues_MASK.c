
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct mps_softc {int msi_msgs; struct mps_queue* queues; } ;
struct mps_queue {int qnum; struct mps_softc* sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mps_queue* FUNC_0 (int,int ,int) ;
 int FUNC_1 (struct mps_softc*,int,char*,int,...) ;

__attribute__((used)) static int
FUNC_2(struct mps_softc *VAR_6)
{
 struct mps_queue *VAR_7;
 u_int VAR_8, VAR_9;

 VAR_8 = VAR_6->msi_msgs;
 FUNC_1(VAR_6, VAR_1|VAR_2, "Allocating %d I/O queues\n", VAR_8);

 VAR_6->queues = FUNC_0(sizeof(struct mps_queue) * VAR_8, VAR_3,
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
