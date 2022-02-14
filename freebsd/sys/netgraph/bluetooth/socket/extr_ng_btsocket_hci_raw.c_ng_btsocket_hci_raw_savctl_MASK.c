
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tv ;
struct timeval {int dummy; } ;
struct mbuf {int m_flags; struct mbuf* m_next; } ;
typedef TYPE_2__* ng_btsocket_hci_raw_pcb_p ;
typedef int dir ;
typedef int caddr_t ;
struct TYPE_5__ {int flags; TYPE_1__* so; int pcb_mtx; } ;
struct TYPE_4__ {int so_options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct timeval*) ;
 int FUNC_1 (int *,int ) ;
 struct mbuf* FUNC_2 (int ,int,int ,int ) ;

__attribute__((used)) static void
FUNC_3(ng_btsocket_hci_raw_pcb_p VAR_8, struct mbuf **VAR_9,
  struct mbuf *VAR_10)
{
 int VAR_11;
 struct timeval VAR_12;

 FUNC_1(&VAR_8->pcb_mtx, VAR_0);

 if (VAR_8->flags & VAR_2) {
  VAR_11 = (VAR_10->m_flags & VAR_1)? 1 : 0;
  *VAR_9 = FUNC_2((caddr_t) &VAR_11, sizeof(VAR_11),
     VAR_3, VAR_5);
  if (*VAR_9 != ((void*)0))
   VAR_9 = &((*VAR_9)->m_next);
 }

 if (VAR_8->so->so_options & VAR_7) {
  FUNC_0(&VAR_12);
  *VAR_9 = FUNC_2((caddr_t) &VAR_12, sizeof(VAR_12),
     VAR_4, VAR_6);
  if (*VAR_9 != ((void*)0))
   VAR_9 = &((*VAR_9)->m_next);
 }
}
