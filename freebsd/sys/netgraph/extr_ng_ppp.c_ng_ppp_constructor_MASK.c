
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* priv_p ;
typedef int node_p ;
struct TYPE_6__ {int xmtx; int rmtx; int fragTimer; TYPE_1__* links; int * fragsmem; int fragsfree; int frags; } ;
struct TYPE_5__ {int seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int VAR_7 ;
 TYPE_2__* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(node_p VAR_8)
{
 priv_p VAR_9;
 int VAR_10;


 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_3, VAR_4 | VAR_5);

 FUNC_0(VAR_8, VAR_9);


 FUNC_1(&VAR_9->frags);
 FUNC_1(&VAR_9->fragsfree);
 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  FUNC_2(&VAR_9->fragsfree, &VAR_9->fragsmem[VAR_10], VAR_7);
 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
  VAR_9->links[VAR_10].seq = VAR_1;
 FUNC_5(&VAR_9->fragTimer);

 FUNC_4(&VAR_9->rmtx, "ng_ppp_recv", ((void*)0), VAR_2);
 FUNC_4(&VAR_9->xmtx, "ng_ppp_xmit", ((void*)0), VAR_2);


 return (0);
}
