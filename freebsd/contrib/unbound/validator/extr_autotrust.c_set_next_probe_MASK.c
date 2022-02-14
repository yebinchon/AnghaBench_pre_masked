
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_7__ {int dname_len; int dname; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; } ;
struct TYPE_6__ {struct trust_anchor* key; } ;
struct trust_anchor {TYPE_4__* autr; int lock; int dclass; int name; int namelabs; int namelen; TYPE_1__ node; } ;
struct module_env {scalar_t__* now; TYPE_5__* anchors; } ;
struct TYPE_10__ {int lock; TYPE_3__* autr; int tree; } ;
struct TYPE_9__ {scalar_t__ next_probe_time; int pnode; int query_interval; } ;
struct TYPE_8__ {int probe; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct module_env*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,struct trust_anchor*) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int ,struct trust_anchor*) ;
 int FUNC_8 (struct module_env*) ;
 int FUNC_9 (int ,char*,...) ;
 scalar_t__ FUNC_10 (TYPE_5__*) ;

__attribute__((used)) static int
FUNC_11(struct module_env* VAR_1, struct trust_anchor* VAR_2,
 struct ub_packed_rrset_key* VAR_3)
{
 struct trust_anchor VAR_4, *VAR_5;
 time_t VAR_6, VAR_7;

 VAR_4.node.key = &VAR_4;
 VAR_4.name = VAR_3->rk.dname;
 VAR_4.namelen = VAR_3->rk.dname_len;
 VAR_4.namelabs = FUNC_1(VAR_4.name);
 VAR_4.dclass = VAR_2->dclass;
 FUNC_3(&VAR_2->lock);


 FUNC_2(&VAR_1->anchors->lock);
 VAR_5 = (struct trust_anchor*)FUNC_7(VAR_1->anchors->tree, &VAR_4);
 if(!VAR_5) {
  FUNC_9(VAR_0, "trustpoint was deleted in set_next_probe");
  FUNC_3(&VAR_1->anchors->lock);
  return 0;
 }
 FUNC_4(VAR_2 == VAR_5);
 FUNC_2(&VAR_2->lock);


 VAR_6 = FUNC_10(VAR_1->anchors);
 (void)FUNC_5(&VAR_1->anchors->autr->probe, VAR_2);
 VAR_2->autr->next_probe_time = FUNC_0(VAR_1,
  VAR_2->autr->query_interval);
 (void)FUNC_6(&VAR_1->anchors->autr->probe, &VAR_2->autr->pnode);
 VAR_7 = FUNC_10(VAR_1->anchors);

 FUNC_3(&VAR_1->anchors->lock);
 FUNC_9(VAR_0, "next probe set in %d seconds",
  (int)VAR_2->autr->next_probe_time - (int)*VAR_1->now);
 if(VAR_6 != VAR_7) {
  FUNC_8(VAR_1);
 }
 return 1;
}
