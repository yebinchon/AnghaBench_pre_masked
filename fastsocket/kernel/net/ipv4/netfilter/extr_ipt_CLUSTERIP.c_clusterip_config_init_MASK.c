
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipt_clusterip_tgt_info {int hash_initval; int hash_mode; int num_total_nodes; int clustermac; } ;
struct clusterip_config {int list; int pde; int entries; int refcount; int hash_initval; int hash_mode; int num_total_nodes; int clustermac; int clusterip; struct net_device* dev; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct clusterip_config*,struct ipt_clusterip_tgt_info const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct clusterip_config*) ;
 struct clusterip_config* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (char*,int,int ,int *,struct clusterip_config*) ;
 int FUNC_7 (char*,char*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct clusterip_config *
FUNC_10(const struct ipt_clusterip_tgt_info *VAR_8, __be32 VAR_9,
   struct net_device *VAR_10)
{
 struct clusterip_config *VAR_11;

 VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return ((void*)0);

 VAR_11->dev = VAR_10;
 VAR_11->clusterip = VAR_9;
 FUNC_5(&VAR_11->clustermac, &VAR_8->clustermac, VAR_0);
 VAR_11->num_total_nodes = VAR_8->num_total_nodes;
 FUNC_1(VAR_11, VAR_8);
 VAR_11->hash_mode = VAR_8->hash_mode;
 VAR_11->hash_initval = VAR_8->hash_initval;
 FUNC_0(&VAR_11->refcount, 1);
 FUNC_0(&VAR_11->entries, 1);
 FUNC_8(&VAR_5);
 FUNC_4(&VAR_11->list, &VAR_4);
 FUNC_9(&VAR_5);

 return VAR_11;
}
