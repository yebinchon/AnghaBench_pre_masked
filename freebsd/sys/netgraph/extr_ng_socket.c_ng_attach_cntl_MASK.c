
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct socket {int dummy; } ;
struct ngsock {int refs; TYPE_1__* node; struct ngpcb* ctlsock; int mtx; int hmask; int hash; } ;
struct ngpcb {int node_id; struct ngsock* sockdata; } ;
typedef TYPE_1__* node_p ;
struct TYPE_5__ {int nd_ID; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,struct ngsock*) ;
 int FUNC_2 (int,int ,int *) ;
 struct ngsock* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int FUNC_5 (struct socket*,int ) ;
 int FUNC_6 (struct ngpcb*,int ) ;
 int FUNC_7 (int *,TYPE_1__**) ;
 struct ngpcb* FUNC_8 (struct socket*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_9(struct socket *VAR_6)
{
 struct ngsock *VAR_7;
 struct ngpcb *VAR_8;
 node_p VAR_9;
 int VAR_10;


 if ((VAR_10 = FUNC_5(VAR_6, VAR_4)) != 0)
  return (VAR_10);
 VAR_8 = FUNC_8(VAR_6);


 if ((VAR_10 = FUNC_7(&VAR_5, &VAR_9)) != 0) {
  FUNC_6(VAR_8, VAR_4);
  return (VAR_10);
 }







 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1, VAR_2 | VAR_3);
 VAR_7->hash = FUNC_2(16, VAR_1, &VAR_7->hmask);


 FUNC_4(&VAR_7->mtx, "ng_socket", ((void*)0), VAR_0);


 VAR_7->ctlsock = VAR_8;
 VAR_8->sockdata = VAR_7;
 VAR_7->refs++;
 VAR_7->node = VAR_9;
 VAR_8->node_id = VAR_9->nd_ID;


 FUNC_1(VAR_7->node, VAR_7);
 FUNC_0(VAR_7->node);
 VAR_7->refs++;

 return (0);
}
