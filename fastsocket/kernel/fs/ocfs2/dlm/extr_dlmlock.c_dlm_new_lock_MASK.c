
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct dlm_lockstatus {struct dlm_lock* lockid; } ;
struct dlm_lock {int lksb_kernel_allocated; struct dlm_lockstatus* lksb; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_lock*,int,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct dlm_lock*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 struct dlm_lockstatus* FUNC_3 (int,int ) ;

struct dlm_lock * FUNC_4(int VAR_2, u8 VAR_3, u64 VAR_4,
          struct dlm_lockstatus *VAR_5)
{
 struct dlm_lock *VAR_6;
 int VAR_7 = 0;

 VAR_6 = (struct dlm_lock *) FUNC_2(VAR_1, VAR_0);
 if (!VAR_6)
  return ((void*)0);

 if (!VAR_5) {

  VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);
  if (!VAR_5) {
   FUNC_1(VAR_6);
   return ((void*)0);
  }
  VAR_7 = 1;
 }

 FUNC_0(VAR_6, VAR_2, VAR_3, VAR_4);
 if (VAR_7)
  VAR_6->lksb_kernel_allocated = 1;
 VAR_6->lksb = VAR_5;
 VAR_5->lockid = VAR_6;
 return VAR_6;
}
