
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xnb_pkt {scalar_t__ size; scalar_t__ list_len; } ;
struct mbuf {int dummy; } ;
struct TYPE_4__ {int req_cons; } ;
struct TYPE_3__ {int ifp; TYPE_2__ txb; } ;


 int FUNC_0 (struct mbuf**) ;
 struct mbuf* FUNC_1 (struct xnb_pkt*,int ) ;
 int FUNC_2 (struct xnb_pkt*,TYPE_2__*,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_3(char *VAR_1, size_t VAR_2)
{
 int VAR_3;
 struct xnb_pkt VAR_4;
 struct mbuf *VAR_5;
 VAR_4.list_len = 0;


 VAR_3 = FUNC_2(&VAR_4, &VAR_0.txb,
                             VAR_0.txb.req_cons);
 VAR_4.size = 0;
 VAR_5 = FUNC_1(&VAR_4, VAR_0.ifp);
 FUNC_0(&VAR_5);
}
