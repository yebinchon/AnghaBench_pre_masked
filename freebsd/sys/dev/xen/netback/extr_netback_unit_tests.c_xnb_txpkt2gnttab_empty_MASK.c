
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xnb_pkt {scalar_t__ size; scalar_t__ list_len; } ;
struct mbuf {int dummy; } ;
struct TYPE_5__ {int req_cons; } ;
struct TYPE_4__ {TYPE_2__ txb; int gnttab; int ifp; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mbuf**) ;
 struct mbuf* FUNC_2 (struct xnb_pkt*,int ) ;
 int FUNC_3 (struct xnb_pkt*,TYPE_2__*,int ) ;
 int FUNC_4 (struct xnb_pkt*,struct mbuf*,int ,TYPE_2__*,int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_5(char *VAR_2, size_t VAR_3)
{
 int VAR_4;
 struct xnb_pkt VAR_5;
 struct mbuf *VAR_6;
 VAR_5.list_len = 0;


 FUNC_3(&VAR_5, &VAR_1.txb, VAR_1.txb.req_cons);
 VAR_5.size = 0;
 VAR_6 = FUNC_2(&VAR_5, VAR_1.ifp);
 VAR_4 = FUNC_4(&VAR_5, VAR_6, VAR_1.gnttab,
     &VAR_1.txb, VAR_0);
 FUNC_0(VAR_4 == 0);
 FUNC_1(&VAR_6);
}
