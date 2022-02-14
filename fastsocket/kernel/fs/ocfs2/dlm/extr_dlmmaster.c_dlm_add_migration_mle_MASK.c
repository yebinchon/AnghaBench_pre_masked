
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct dlm_master_list_entry {scalar_t__ type; int maybe_map; void* master; void* new_master; int spinlock; int wq; int woken; } ;
struct dlm_lock_resource {int dummy; } ;
struct dlm_ctxt {void* node_num; int name; int master_lock; int spinlock; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dlm_ctxt*,struct dlm_master_list_entry*) ;
 int FUNC_2 (struct dlm_ctxt*,struct dlm_master_list_entry*) ;
 int FUNC_3 (struct dlm_ctxt*,struct dlm_master_list_entry*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct dlm_ctxt*,struct dlm_master_list_entry**,char*,unsigned int) ;
 int FUNC_7 (struct dlm_master_list_entry*,scalar_t__,struct dlm_ctxt*,struct dlm_lock_resource*,char const*,unsigned int) ;
 int FUNC_8 (int ,char*,unsigned int,...) ;
 int FUNC_9 () ;
 int FUNC_10 (void*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct dlm_ctxt *VAR_4,
     struct dlm_lock_resource *VAR_5,
     struct dlm_master_list_entry *VAR_6,
     struct dlm_master_list_entry **VAR_7,
     const char *VAR_8, unsigned int VAR_9,
     u8 VAR_10, u8 VAR_11)
{
 int VAR_12;
 int VAR_13 = 0;

 *VAR_7 = ((void*)0);

 FUNC_9();

 FUNC_4(&VAR_4->spinlock);
 FUNC_4(&VAR_4->master_lock);


 VAR_12 = FUNC_6(VAR_4, VAR_7, (char *)VAR_8, VAR_9);
 if (VAR_12) {
  struct dlm_master_list_entry *VAR_14 = *VAR_7;
  FUNC_11(&VAR_14->spinlock);
  if (VAR_14->type == VAR_1) {
   if (VAR_11 == VAR_4->node_num) {

    FUNC_8(0, "tried to migrate %.*s, but some "
         "process beat me to it\n",
         VAR_9, VAR_8);
    VAR_13 = -VAR_2;
   } else {

    FUNC_8(VAR_3, "migration error  mle: "
         "master=%u new_master=%u // request: "
         "master=%u new_master=%u // "
         "lockres=%.*s\n",
         VAR_14->master, VAR_14->new_master,
         VAR_11, VAR_10,
         VAR_9, VAR_8);
    FUNC_0();
   }
  } else {

   VAR_14->master = VAR_11;
   FUNC_5(&VAR_14->woken, 1);
   FUNC_13(&VAR_14->wq);

   FUNC_3(VAR_4, VAR_14);
   FUNC_2(VAR_4, VAR_14);
   VAR_13 = VAR_0;
   FUNC_8(0, "%s:%.*s: master=%u, newmaster=%u, "
       "telling master to get ref for cleared out mle "
       "during migration\n", VAR_4->name, VAR_9, VAR_8,
       VAR_11, VAR_10);
  }
  FUNC_12(&VAR_14->spinlock);
 }


 FUNC_7(VAR_6, VAR_1, VAR_4, VAR_5, VAR_8, VAR_9);
 VAR_6->new_master = VAR_10;


 VAR_6->master = VAR_11;

 FUNC_10(VAR_10, VAR_6->maybe_map);
 FUNC_1(VAR_4, VAR_6);

 return VAR_13;
}
