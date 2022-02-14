
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dlm_node_iter {int node_map; } ;
struct dlm_migrate_request {int new_master; int master; int namelen; int name; } ;
struct TYPE_2__ {int name; int len; } ;
struct dlm_lock_resource {int spinlock; TYPE_1__ lockname; } ;
struct dlm_ctxt {int name; int key; int spinlock; int domain_map; } ;
typedef int migrate ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,struct dlm_lock_resource*) ;
 int FUNC_4 (struct dlm_node_iter*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct dlm_migrate_request*,int ,int) ;
 int FUNC_7 (int ,char*,int,...) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ,struct dlm_migrate_request*,int,int,int*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int,int ) ;

__attribute__((used)) static int FUNC_13(struct dlm_ctxt *VAR_3,
      struct dlm_lock_resource *VAR_4,
      u8 VAR_5, u8 VAR_6,
      struct dlm_node_iter *VAR_7)
{
 struct dlm_migrate_request VAR_8;
 int VAR_9, VAR_10, VAR_11 = 0;
 int VAR_12;

 FUNC_6(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.namelen = VAR_4->lockname.len;
 FUNC_5(VAR_8.name, VAR_4->lockname.name, VAR_8.namelen);
 VAR_8.new_master = VAR_6;
 VAR_8.master = VAR_5;

 VAR_9 = 0;


 while ((VAR_12 = FUNC_4(VAR_7)) >= 0) {
  if (VAR_12 == VAR_5 ||
      VAR_12 == VAR_6)
   continue;


  FUNC_10(&VAR_3->spinlock);
  VAR_10 = (!FUNC_12(VAR_12, VAR_3->domain_map));
  FUNC_11(&VAR_3->spinlock);
  if (VAR_10) {
   FUNC_1(VAR_12, VAR_7->node_map);
   continue;
  }

  VAR_9 = FUNC_9(VAR_0, VAR_3->key,
      &VAR_8, sizeof(VAR_8), VAR_12,
      &VAR_11);
  if (VAR_9 < 0) {
   FUNC_7(0, "migrate_request returned %d!\n", VAR_9);
   if (!FUNC_2(VAR_9)) {
    FUNC_7(VAR_2, "unhandled error=%d!\n", VAR_9);
    FUNC_0();
   }
   FUNC_1(VAR_12, VAR_7->node_map);
   VAR_9 = 0;
  } else if (VAR_11 < 0) {
   FUNC_7(0, "migrate request (node %u) returned %d!\n",
        VAR_12, VAR_11);
   VAR_9 = VAR_11;
  } else if (VAR_11 == VAR_1) {



   FUNC_7(0, "%s:%.*s: need ref for node %u\n",
        VAR_3->name, VAR_4->lockname.len, VAR_4->lockname.name,
        VAR_12);
   FUNC_10(&VAR_4->spinlock);
   FUNC_3(VAR_12, VAR_4);
   FUNC_11(&VAR_4->spinlock);
  }
 }

 if (VAR_9 < 0)
  FUNC_8(VAR_9);

 FUNC_7(0, "returning ret=%d\n", VAR_9);
 return VAR_9;
}
