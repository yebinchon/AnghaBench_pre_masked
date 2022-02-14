
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct mbuf {struct mbuf* m_nextpkt; } ;
typedef TYPE_1__* iflib_txq_t ;
typedef TYPE_2__* if_t ;
typedef TYPE_3__* if_ctx_t ;
struct TYPE_12__ {int ifc_sysctl_tx_abdicate; TYPE_1__* ifc_txqs; } ;
struct TYPE_11__ {int if_drv_flags; int if_snd; } ;
struct TYPE_10__ {int ift_br; scalar_t__ ift_closed; int ift_task; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct mbuf*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,struct mbuf*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_7 ;
 size_t VAR_8 ;
 TYPE_3__* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,void**,int,int ,int) ;
 int FUNC_12 (struct mbuf*) ;
 struct mbuf** FUNC_13 (int,int ,int ) ;
 struct mbuf** VAR_9 ;
 struct mbuf** VAR_10 ;
 struct mbuf* VAR_11 ;
 int FUNC_14 (struct mbuf**) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_15(if_t VAR_14, struct mbuf *VAR_15)
{
 if_ctx_t VAR_16 = FUNC_9(VAR_14);

 iflib_txq_t VAR_17;
 int VAR_18, VAR_19;
 int VAR_20 = VAR_16->ifc_sysctl_tx_abdicate;

 if (FUNC_8((VAR_14->if_drv_flags & VAR_2) == 0 || !FUNC_3(VAR_16))) {
  FUNC_1(VAR_12);
  FUNC_12(VAR_15);
  return (VAR_0);
 }

 FUNC_4(VAR_15->m_nextpkt == ((void*)0));

 VAR_19 = 0;
 if ((FUNC_6(VAR_16) > 1) && FUNC_5(VAR_15) && !FUNC_0(&VAR_14->if_snd))
  VAR_19 = FUNC_7(VAR_16, VAR_15);



 VAR_17 = &VAR_16->ifc_txqs[VAR_19];
 FUNC_1(VAR_13);
 VAR_18 = FUNC_11(VAR_17->ift_br, (void **)&VAR_15, 1, VAR_6, VAR_20);

 if (VAR_20)
  FUNC_2(&VAR_17->ift_task);
  if (VAR_18) {
  if (!VAR_20)
   FUNC_2(&VAR_17->ift_task);




  FUNC_10(VAR_17->ift_br, VAR_6);
  FUNC_12(VAR_15);
  FUNC_1(VAR_12);
 }

 return (VAR_18);
}
