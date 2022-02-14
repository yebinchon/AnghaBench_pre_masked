
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int node_p ;
typedef TYPE_3__* hook_p ;
struct TYPE_12__ {int hk_flags; TYPE_2__* hk_node; struct TYPE_12__* hk_peer; } ;
struct TYPE_11__ {TYPE_1__* nd_type; } ;
struct TYPE_10__ {int (* connect ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,char const*,TYPE_3__**) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (int ,int *,int *,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_8(node_p VAR_1, const char *VAR_2, const char *VAR_3, char *VAR_4)
{
 node_p VAR_5;
 hook_p VAR_6, VAR_7;
 int VAR_8;

 if ((VAR_8 = FUNC_4(VAR_4, &VAR_5))) {
  return (VAR_8);
 }

 if ((VAR_8 = FUNC_2(VAR_1, VAR_2, &VAR_6))) {
  FUNC_5(VAR_5, ((void*)0), ((void*)0), 0);
  return (VAR_8);
 }

 if ((VAR_8 = FUNC_2(VAR_5, VAR_3, &VAR_7))) {
  FUNC_5(VAR_5, ((void*)0), ((void*)0), 0);
  FUNC_3(VAR_6);
  FUNC_1(VAR_6);
  return (VAR_8);
 }




 VAR_6->hk_peer = VAR_7;
 VAR_7->hk_peer = VAR_6;


 FUNC_0(VAR_6);
 FUNC_0(VAR_7);


 if (VAR_6->hk_node->nd_type->connect) {
  VAR_8 = (*VAR_6->hk_node->nd_type->connect) (VAR_6);
 }

 if ((VAR_8 == 0) && VAR_7->hk_node->nd_type->connect) {
  VAR_8 = (*VAR_7->hk_node->nd_type->connect) (VAR_7);

 }




 if (VAR_8) {
  FUNC_3(VAR_7);
  FUNC_5(VAR_5, ((void*)0), ((void*)0), 0);
 } else {

  VAR_6->hk_flags &= ~VAR_0;
  VAR_7->hk_flags &= ~VAR_0;
 }
 FUNC_1(VAR_6);
 FUNC_1(VAR_7);
 return (VAR_8);
}
