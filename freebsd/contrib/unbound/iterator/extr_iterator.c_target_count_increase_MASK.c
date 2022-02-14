
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iter_qstate {int* target_count; } ;


 int FUNC_0 (struct iter_qstate*) ;

__attribute__((used)) static void
FUNC_1(struct iter_qstate* VAR_0, int VAR_1)
{
 FUNC_0(VAR_0);
 if(VAR_0->target_count)
  VAR_0->target_count[1] += VAR_1;
}
