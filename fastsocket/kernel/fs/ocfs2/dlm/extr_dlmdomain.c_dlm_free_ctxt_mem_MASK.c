
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ctxt {struct dlm_ctxt* name; scalar_t__ master_hash; scalar_t__ lockres_hash; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_ctxt*) ;
 int FUNC_1 (void**,int ) ;
 int FUNC_2 (struct dlm_ctxt*) ;

__attribute__((used)) static void FUNC_3(struct dlm_ctxt *VAR_1)
{
 FUNC_0(VAR_1);

 if (VAR_1->lockres_hash)
  FUNC_1((void **)VAR_1->lockres_hash, VAR_0);

 if (VAR_1->master_hash)
  FUNC_1((void **)VAR_1->master_hash, VAR_0);

 if (VAR_1->name)
  FUNC_2(VAR_1->name);

 FUNC_2(VAR_1);
}
