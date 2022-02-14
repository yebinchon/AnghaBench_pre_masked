
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xnb_pkt {int dummy; } ;
struct TYPE_4__ {int req_cons; } ;
struct TYPE_3__ {TYPE_2__ txb; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct xnb_pkt*,TYPE_2__*,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(char *VAR_1, size_t VAR_2)
{
 struct xnb_pkt VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_3, &VAR_0.txb,
                             VAR_0.txb.req_cons);
 FUNC_0(VAR_4 == 0);
}
