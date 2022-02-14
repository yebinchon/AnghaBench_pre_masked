
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nsproxy {struct net* net_ns; } ;
struct net {int dummy; } ;
struct ctl_table_header {int dummy; } ;
struct ctl_table {int dummy; } ;
struct ctl_path {int dummy; } ;
struct TYPE_2__ {struct nsproxy* nsproxy; } ;


 struct ctl_table_header* FUNC_0 (int *,struct nsproxy*,struct ctl_path const*,struct ctl_table*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

struct ctl_table_header *FUNC_1(struct net *VAR_2,
 const struct ctl_path *VAR_3, struct ctl_table *VAR_4)
{
 struct nsproxy VAR_5;
 VAR_5 = *VAR_0->nsproxy;
 VAR_5.net_ns = VAR_2;
 return FUNC_0(&VAR_1,
     &VAR_5, VAR_3, VAR_4);
}
