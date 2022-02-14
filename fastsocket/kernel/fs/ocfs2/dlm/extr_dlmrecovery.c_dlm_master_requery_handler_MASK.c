
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct o2net_msg {scalar_t__ buf; } ;
struct dlm_master_requery {int namelen; int name; } ;
struct dlm_lock_resource {int owner; int spinlock; } ;
struct dlm_ctxt {int node_num; int spinlock; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dlm_lock_resource* FUNC_1 (struct dlm_ctxt*,int ,int ,unsigned int) ;
 int FUNC_2 (struct dlm_ctxt*,struct dlm_lock_resource*,int ,int ,int ) ;
 int FUNC_3 (struct dlm_ctxt*) ;
 unsigned int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct dlm_lock_resource*) ;
 int FUNC_6 (struct dlm_ctxt*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct o2net_msg *VAR_3, u32 VAR_4, void *VAR_5,
          void **VAR_6)
{
 struct dlm_ctxt *VAR_7 = VAR_5;
 struct dlm_master_requery *VAR_8 = (struct dlm_master_requery *)VAR_3->buf;
 struct dlm_lock_resource *VAR_9 = ((void*)0);
 unsigned int VAR_10;
 int VAR_11 = VAR_1;
 u32 VAR_12 = VAR_0;

 if (!FUNC_3(VAR_7)) {


  return VAR_11;
 }

 VAR_10 = FUNC_4(VAR_8->name, VAR_8->namelen);

 FUNC_8(&VAR_7->spinlock);
 VAR_9 = FUNC_1(VAR_7, VAR_8->name, VAR_8->namelen, VAR_10);
 if (VAR_9) {
  FUNC_8(&VAR_9->spinlock);
  VAR_11 = VAR_9->owner;
  if (VAR_11 == VAR_7->node_num) {
   int VAR_13 = FUNC_2(VAR_7, VAR_9,
            0, 0, VAR_12);
   if (VAR_13 < 0) {
    FUNC_7(-VAR_2);

    FUNC_0();
   }
  } else
   FUNC_5(VAR_9);
  FUNC_9(&VAR_9->spinlock);
 }
 FUNC_9(&VAR_7->spinlock);

 FUNC_6(VAR_7);
 return VAR_11;
}
