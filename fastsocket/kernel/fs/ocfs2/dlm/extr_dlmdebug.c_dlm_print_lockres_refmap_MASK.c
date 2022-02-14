
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lock_resource {int inflight_locks; int refmap; int spinlock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(struct dlm_lock_resource *VAR_1)
{
 int VAR_2;
 FUNC_0(&VAR_1->spinlock);

 FUNC_2("  refmap nodes: [ ");
 VAR_2 = 0;
 while (1) {
  VAR_2 = FUNC_1(VAR_1->refmap, VAR_0, VAR_2);
  if (VAR_2 >= VAR_0)
   break;
  FUNC_2("%u ", VAR_2);
  VAR_2++;
 }
 FUNC_2("], inflight=%u\n", VAR_1->inflight_locks);
}
