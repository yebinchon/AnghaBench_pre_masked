
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int c_cpu; } ;
struct sge_txq {scalar_t__ size; scalar_t__ in_use; TYPE_2__ txq_timer; scalar_t__ db_pending; } ;
struct sge_qset {int qs_flags; struct port_info* port; struct sge_txq* txq; } ;
struct TYPE_4__ {scalar_t__ link_ok; } ;
struct port_info {TYPE_1__ link_config; int adapter; struct ifnet* ifp; } ;
struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct sge_qset*) ;
 int FUNC_1 (struct sge_qset*) ;
 int FUNC_2 (struct sge_qset*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int,int ,struct sge_qset*,int ) ;
 int FUNC_5 (int ,struct sge_txq*,int) ;
 struct mbuf* FUNC_6 (struct sge_qset*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct mbuf*) ;
 int FUNC_8 (struct sge_qset*,int ,size_t) ;
 scalar_t__ FUNC_9 (struct sge_qset*,struct mbuf**) ;

__attribute__((used)) static void
FUNC_10(struct sge_qset *VAR_7)
{
 struct mbuf *VAR_8 = ((void*)0);
 struct sge_txq *VAR_9 = &VAR_7->txq[VAR_3];
 struct port_info *VAR_10 = VAR_7->port;
 struct ifnet *VAR_11 = VAR_10->ifp;

 if (VAR_7->qs_flags & (VAR_1|VAR_2))
  FUNC_8(VAR_7, 0, VAR_3);

 if (!VAR_10->link_config.link_ok) {
  FUNC_2(VAR_7);
  return;
 }
 FUNC_0(VAR_7);
 while (!FUNC_1(VAR_7) && (VAR_11->if_drv_flags & VAR_0) &&
     VAR_10->link_config.link_ok) {
  FUNC_8(VAR_7, VAR_5, VAR_3);

  if (VAR_9->size - VAR_9->in_use <= VAR_4)
   break;

  if ((VAR_8 = FUNC_6(VAR_7)) == ((void*)0))
   break;




  if (FUNC_9(VAR_7, &VAR_8) || VAR_8 == ((void*)0))
   break;

  VAR_8 = ((void*)0);
 }

 if (VAR_9->db_pending)
  FUNC_5(VAR_10->adapter, VAR_9, 1);

 if (!FUNC_1(VAR_7) && FUNC_3(&VAR_9->txq_timer) == 0 &&
     VAR_10->link_config.link_ok)
  FUNC_4(&VAR_9->txq_timer, 1, VAR_6,
      VAR_7, VAR_9->txq_timer.c_cpu);
 if (VAR_8 != ((void*)0))
  FUNC_7(VAR_8);
}
