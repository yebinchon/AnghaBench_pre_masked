
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_9__ {int dname; } ;
struct ub_packed_rrset_key {TYPE_3__ rk; } ;
struct TYPE_8__ {struct trust_anchor* key; } ;
struct TYPE_7__ {struct trust_anchor* key; } ;
struct trust_anchor {int revoked; scalar_t__ next_probe_time; struct trust_anchor* autr; int lock; int dclass; int namelabs; int namelen; int name; TYPE_2__ pnode; TYPE_1__ node; } ;
struct module_env {TYPE_5__* anchors; } ;
struct autr_point_data {int revoked; scalar_t__ next_probe_time; struct autr_point_data* autr; int lock; int dclass; int namelabs; int namelen; int name; TYPE_2__ pnode; TYPE_1__ node; } ;
typedef int pd ;
typedef int key ;
struct TYPE_11__ {int lock; TYPE_4__* autr; int * tree; } ;
struct TYPE_10__ {int probe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (struct trust_anchor*) ;
 int FUNC_2 (struct module_env*,struct trust_anchor*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int ,int ,int ) ;
 int FUNC_6 (struct trust_anchor*,int ,int) ;
 scalar_t__ FUNC_7 (int *,struct trust_anchor*) ;
 int FUNC_8 (struct module_env*) ;
 scalar_t__ FUNC_9 (TYPE_5__*) ;

__attribute__((used)) static void
FUNC_10(struct module_env* VAR_2, struct trust_anchor* VAR_3,
 struct ub_packed_rrset_key* VAR_4)
{
 struct trust_anchor* VAR_5;
 struct trust_anchor VAR_6;
 struct autr_point_data VAR_7;
 time_t VAR_8, VAR_9;

 FUNC_5(VAR_1, "trust point was revoked",
  VAR_3->name, VAR_0, VAR_3->dclass);
 VAR_3->autr->revoked = 1;


 FUNC_6(&VAR_6, 0, sizeof(VAR_6));
 FUNC_6(&VAR_7, 0, sizeof(VAR_7));
 VAR_6.autr = &VAR_7;
 VAR_6.node.key = &VAR_6;
 VAR_7.pnode.key = &VAR_6;
 VAR_7.next_probe_time = VAR_3->autr->next_probe_time;
 VAR_6.name = VAR_4->rk.dname;
 VAR_6.namelen = VAR_3->namelen;
 VAR_6.namelabs = VAR_3->namelabs;
 VAR_6.dclass = VAR_3->dclass;


 FUNC_4(&VAR_3->lock);


 FUNC_3(&VAR_2->anchors->lock);
 VAR_5 = (struct trust_anchor*)FUNC_7(VAR_2->anchors->tree, &VAR_6);
 VAR_8 = FUNC_9(VAR_2->anchors);
 (void)FUNC_7(&VAR_2->anchors->autr->probe, &VAR_6);
 VAR_9 = FUNC_9(VAR_2->anchors);
 FUNC_0(VAR_2->anchors);
 FUNC_4(&VAR_2->anchors->lock);




 if(VAR_5) {

  VAR_5->autr->next_probe_time = 0;
  FUNC_2(VAR_2, VAR_5);


  FUNC_1(VAR_5);
 }
 if(VAR_8 != VAR_9) {
  FUNC_8(VAR_2);
 }
}
