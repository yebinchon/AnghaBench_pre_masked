
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xnb_pkt {int dummy; } ;
struct mbuf {int dummy; } ;
struct TYPE_2__ {int rxb; int gnttab; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct mbuf* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mbuf**) ;
 int FUNC_3 (struct mbuf*,struct xnb_pkt*,int ,int) ;
 int FUNC_4 (struct xnb_pkt*,struct mbuf*,int ,int *,int ) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void
FUNC_5(char *VAR_4, size_t VAR_5)
{
 struct xnb_pkt VAR_6;
 int VAR_7;
 int VAR_8 = 60;
 struct mbuf *VAR_9;

 VAR_9 = FUNC_1(VAR_2, VAR_1);

 FUNC_3(VAR_9, &VAR_6, 0, VAR_8);
 VAR_7 = FUNC_4(&VAR_6, VAR_9, VAR_3.gnttab,
   &VAR_3.rxb, VAR_0);

 FUNC_0(VAR_7 == 0);

 FUNC_2(&VAR_9);
}
