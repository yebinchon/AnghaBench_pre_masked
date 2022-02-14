
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct name_tree_node {int dummy; } ;
struct TYPE_4__ {int qclass; int qname_len; int qname; } ;
struct module_qstate {TYPE_2__ qinfo; TYPE_1__* env; } ;
struct dns64_env {int ignore_aaaa; } ;
struct TYPE_3__ {scalar_t__* modinfo; } ;


 int FUNC_0 (int ) ;
 struct name_tree_node* FUNC_1 (int *,int ,int ,int,int ) ;

__attribute__((used)) static int
FUNC_2(struct module_qstate* VAR_0, int VAR_1)
{
 struct dns64_env* VAR_2 = (struct dns64_env*)VAR_0->env->modinfo[VAR_1];
 int VAR_3 = FUNC_0(VAR_0->qinfo.qname);
 struct name_tree_node* VAR_4 = FUNC_1(&VAR_2->ignore_aaaa,
  VAR_0->qinfo.qname, VAR_0->qinfo.qname_len, VAR_3,
  VAR_0->qinfo.qclass);
 return (VAR_4 != ((void*)0));
}
