
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_master_list_entry {int mnamehash; int mnamelen; int mname; } ;
struct dlm_lock_resource {int spinlock; } ;
struct dlm_ctxt {int master_lock; } ;


 int VAR_0 ;
 struct dlm_lock_resource* FUNC_0 (struct dlm_ctxt*,int ,int ,int ) ;
 int FUNC_1 (struct dlm_ctxt*,struct dlm_master_list_entry*) ;
 int FUNC_2 (struct dlm_master_list_entry*) ;
 int FUNC_3 (struct dlm_lock_resource*) ;
 int FUNC_4 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_5 (struct dlm_ctxt*,struct dlm_lock_resource*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct dlm_lock_resource *FUNC_8(struct dlm_ctxt *VAR_1,
     struct dlm_master_list_entry *VAR_2)
{
 struct dlm_lock_resource *VAR_3;


 VAR_3 = FUNC_0(VAR_1, VAR_2->mname, VAR_2->mnamelen,
       VAR_2->mnamehash);
 if (VAR_3) {
  FUNC_7(&VAR_1->master_lock);


  FUNC_6(&VAR_3->spinlock);
  FUNC_5(VAR_1, VAR_3, VAR_0);
  FUNC_4(VAR_1, VAR_3);
  FUNC_7(&VAR_3->spinlock);
  FUNC_3(VAR_3);


  FUNC_1(VAR_1, VAR_2);


  FUNC_6(&VAR_1->master_lock);
  FUNC_2(VAR_2);
  FUNC_7(&VAR_1->master_lock);
 }

 return VAR_3;
}
