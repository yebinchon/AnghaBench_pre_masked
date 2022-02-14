
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipx_route {int ir_routed; int ir_router_node; struct ipx_interface* ir_intrfc; int ir_net; int node; int refcnt; } ;
struct ipx_interface {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 struct ipx_interface* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ipx_route*) ;
 struct ipx_route* FUNC_2 (int ) ;
 int FUNC_3 (struct ipx_route*) ;
 struct ipx_route* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,unsigned char*,int ) ;
 int FUNC_7 (int ,char,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(__be32 VAR_7, struct ipx_interface *VAR_8,
       unsigned char *VAR_9)
{
 struct ipx_route *VAR_10;
 int VAR_11;


 VAR_10 = FUNC_2(VAR_7);
 if (!VAR_10) {
  VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_2);
  VAR_11 = -VAR_0;
  if (!VAR_10)
   goto out;

  FUNC_0(&VAR_10->refcnt, 1);
  FUNC_1(VAR_10);
  FUNC_8(&VAR_6);
  FUNC_5(&VAR_10->node, &VAR_5);
  FUNC_9(&VAR_6);
 } else {
  VAR_11 = -VAR_1;
  if (VAR_8 == VAR_4)
   goto out_put;
 }

 VAR_10->ir_net = VAR_7;
 VAR_10->ir_intrfc = VAR_8;
 if (!VAR_9) {
  FUNC_7(VAR_10->ir_router_node, '\0', VAR_3);
  VAR_10->ir_routed = 0;
 } else {
  FUNC_6(VAR_10->ir_router_node, VAR_9, VAR_3);
  VAR_10->ir_routed = 1;
 }

 VAR_11 = 0;
out_put:
 FUNC_3(VAR_10);
out:
 return VAR_11;
}
