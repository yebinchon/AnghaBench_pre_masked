
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ addr_len; int dev_addr; scalar_t__ hard_header_len; } ;
struct ipx_interface {int refcnt; int if_sklist_lock; int * if_node; } ;
struct datalink_proto {scalar_t__ header_length; } ;
typedef int __be16 ;






 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct net_device*) ;
 struct ipx_interface* FUNC_2 (struct net_device*,int ,int ,struct datalink_proto*,int ,scalar_t__) ;
 int FUNC_3 (struct ipx_interface*) ;
 int FUNC_4 (char*,int ,scalar_t__) ;
 int FUNC_5 (int *,int ,scalar_t__) ;
 int FUNC_6 (int ) ;
 struct datalink_proto* VAR_1 ;
 struct datalink_proto* VAR_2 ;
 struct datalink_proto* VAR_3 ;
 struct datalink_proto* VAR_4 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct ipx_interface *FUNC_8(struct net_device *VAR_5,
      __be16 VAR_6)
{
 struct ipx_interface *VAR_7 = ((void*)0);
 struct datalink_proto *VAR_8;

 if (!VAR_5)
  goto out;


 if (VAR_5->addr_len > VAR_0)
  goto out;

 switch (FUNC_6(VAR_6)) {
 case 129: VAR_8 = VAR_3; break;
 case 131: VAR_8 = VAR_1; break;
 case 128: VAR_8 = VAR_4; break;
 case 130: VAR_8 = VAR_2; break;
 default: goto out;
 }

 VAR_7 = FUNC_2(VAR_5, 0, VAR_6, VAR_8, 0,
    VAR_5->hard_header_len + VAR_8->header_length);

 if (VAR_7) {
  FUNC_5(VAR_7->if_node, 0, VAR_0);
  FUNC_4((char *)&(VAR_7->if_node[VAR_0-VAR_5->addr_len]),
   VAR_5->dev_addr, VAR_5->addr_len);
  FUNC_7(&VAR_7->if_sklist_lock);
  FUNC_0(&VAR_7->refcnt, 1);
  FUNC_3(VAR_7);
  FUNC_1(VAR_5);
 }

out:
 return VAR_7;
}
