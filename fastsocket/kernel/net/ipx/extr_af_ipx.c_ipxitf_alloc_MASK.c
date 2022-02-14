
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipx_interface {unsigned char if_internal; int if_ipx_offset; int if_sklist_lock; int refcnt; int if_sklist; int if_sknum; struct datalink_proto* if_dlink; int if_dlink_type; int if_netnum; struct net_device* if_dev; } ;
struct datalink_proto {int dummy; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 struct ipx_interface* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct ipx_interface *FUNC_4(struct net_device *VAR_2, __be32 VAR_3,
       __be16 VAR_4,
       struct datalink_proto *VAR_5,
       unsigned char VAR_6,
       int VAR_7)
{
 struct ipx_interface *VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_0);

 if (VAR_8) {
  VAR_8->if_dev = VAR_2;
  VAR_8->if_netnum = VAR_3;
  VAR_8->if_dlink_type = VAR_4;
  VAR_8->if_dlink = VAR_5;
  VAR_8->if_internal = VAR_6;
  VAR_8->if_ipx_offset = VAR_7;
  VAR_8->if_sknum = VAR_1;
  FUNC_0(&VAR_8->if_sklist);
  FUNC_1(&VAR_8->refcnt, 1);
  FUNC_3(&VAR_8->if_sklist_lock);
 }

 return VAR_8;
}
