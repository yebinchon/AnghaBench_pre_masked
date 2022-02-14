
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport_parms {struct datapath* dp; } ;
struct vport {int dp_hash_node; int port_no; } ;
struct hlist_head {int dummy; } ;
struct datapath {int dummy; } ;


 int FUNC_0 (struct vport*) ;
 int FUNC_1 (int *,struct hlist_head*) ;
 struct vport* FUNC_2 (struct vport_parms const*) ;
 struct hlist_head* FUNC_3 (struct datapath*,int ) ;

__attribute__((used)) static struct vport *FUNC_4(const struct vport_parms *VAR_0)
{
 struct vport *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (!FUNC_0(VAR_1)) {
  struct datapath *VAR_2 = VAR_0->dp;
  struct hlist_head *VAR_3 = FUNC_3(VAR_2, VAR_1->port_no);

  FUNC_1(&VAR_1->dp_hash_node, VAR_3);
 }
 return VAR_1;
}
