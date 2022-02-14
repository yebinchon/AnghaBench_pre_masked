
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sockaddr_ng {int sg_data; } ;
struct sockaddr {int dummy; } ;
struct ngsock {int mtx; int refs; TYPE_2__* node; struct ngpcb* datasock; } ;
struct ngpcb {int node_id; struct ngsock* sockdata; } ;
typedef TYPE_3__* node_p ;
typedef TYPE_4__* item_p ;
struct TYPE_12__ {TYPE_3__* el_dest; } ;
struct TYPE_11__ {TYPE_1__* nd_type; } ;
struct TYPE_10__ {int nd_ID; } ;
struct TYPE_9__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 struct ngsock* FUNC_1 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_4__*,int ,int ) ;
 TYPE_4__* FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct sockaddr *VAR_5, struct ngpcb *VAR_6)
{
 struct sockaddr_ng *VAR_7;
 node_p VAR_8;
 struct ngsock *VAR_9;
 int VAR_10;
 item_p VAR_11;


 if (VAR_6->sockdata != ((void*)0))
  return (VAR_2);







 VAR_7 = (struct sockaddr_ng *) VAR_5;

 VAR_11 = FUNC_5(((void*)0), VAR_4);

 if ((VAR_10 = FUNC_4(((void*)0), VAR_11, VAR_7->sg_data, 0)))
  return (VAR_10);






 VAR_8 = VAR_11->el_dest;
 if (FUNC_6(VAR_8->nd_type->name, VAR_3) != 0) {
  FUNC_0(VAR_11);
  return (VAR_1);
 }
 VAR_9 = FUNC_1(VAR_8);
 if (VAR_9->datasock != ((void*)0)) {
  FUNC_0(VAR_11);
  return (VAR_0);
 }





 FUNC_2(&VAR_9->mtx);
 VAR_9->datasock = VAR_6;
 VAR_6->sockdata = VAR_9;
 VAR_6->node_id = VAR_9->node->nd_ID;
 VAR_9->refs++;
 FUNC_3(&VAR_9->mtx);
 FUNC_0(VAR_11);
 return (0);
}
