
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; unsigned int len; } ;
struct dlm_lock_resource {int owner; TYPE_1__ lockname; } ;
struct dlm_deref_lockres {unsigned int namelen; int name; int node_idx; } ;
struct dlm_ctxt {int name; int key; int node_num; } ;
typedef int deref ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (struct dlm_lock_resource*) ;
 int FUNC_3 (int ,char const*,unsigned int) ;
 int FUNC_4 (struct dlm_deref_lockres*,int ,int) ;
 int FUNC_5 (int ,char*,int ,unsigned int,char const*,int ,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ,struct dlm_deref_lockres*,int,int ,int*) ;

int FUNC_8(struct dlm_ctxt *VAR_3, struct dlm_lock_resource *VAR_4)
{
 struct dlm_deref_lockres VAR_5;
 int VAR_6 = 0, VAR_7;
 const char *VAR_8;
 unsigned int VAR_9;

 VAR_8 = VAR_4->lockname.name;
 VAR_9 = VAR_4->lockname.len;
 FUNC_1(VAR_9 > VAR_2);

 FUNC_5(0, "%s:%.*s: sending deref to %d\n",
      VAR_3->name, VAR_9, VAR_8, VAR_4->owner);
 FUNC_4(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.node_idx = VAR_3->node_num;
 VAR_5.namelen = VAR_9;
 FUNC_3(VAR_5.name, VAR_8, VAR_9);

 VAR_6 = FUNC_7(VAR_0, VAR_3->key,
     &VAR_5, sizeof(VAR_5), VAR_4->owner, &VAR_7);
 if (VAR_6 < 0)
  FUNC_6(VAR_6);
 else if (VAR_7 < 0) {

  FUNC_5(VAR_1,"while dropping ref on %s:%.*s "
      "(master=%u) got %d.\n", VAR_3->name, VAR_9,
      VAR_8, VAR_4->owner, VAR_7);
  FUNC_2(VAR_4);
  FUNC_0();
 }
 return VAR_6;
}
