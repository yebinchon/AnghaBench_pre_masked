
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct TYPE_7__ {int queue; scalar_t__ ifp; int hook; int running; } ;
typedef TYPE_2__ drv_t ;
struct TYPE_8__ {int debug; TYPE_2__* sys; } ;
typedef TYPE_3__ ct_chan_t ;


 int FUNC_0 (scalar_t__,struct mbuf*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,struct mbuf*) ;
 int FUNC_3 (int,int ,struct mbuf*) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (struct mbuf*,int ) ;
 struct mbuf* FUNC_6 (char*,int) ;

__attribute__((used)) static void FUNC_7 (ct_chan_t *VAR_2, char *VAR_3, int VAR_4)
{
 drv_t *VAR_5 = VAR_2->sys;
 struct mbuf *VAR_6;




 if (!VAR_5 || !VAR_5->running)
  return;

 VAR_6 = FUNC_6 (VAR_3, VAR_4);
 if (! VAR_6) {
  FUNC_1 (VAR_5, ("no memory for packet\n"));

  FUNC_4(VAR_5->ifp, VAR_1, 1);

  return;
 }
 if (VAR_2->debug > 1)
  FUNC_5 (VAR_6, 0);




 FUNC_4(VAR_5->ifp, VAR_0, 1);
 VAR_6->m_pkthdr.rcvif = VAR_5->ifp;


 FUNC_0(VAR_5->ifp, VAR_6);
 FUNC_2 (&VAR_5->queue, VAR_6);

}
