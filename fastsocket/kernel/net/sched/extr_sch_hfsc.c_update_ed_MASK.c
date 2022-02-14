
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfsc_class {scalar_t__ cl_cumul; int cl_deadline; void* cl_d; int cl_eligible; void* cl_e; } ;


 int FUNC_0 (struct hfsc_class*) ;
 void* FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct hfsc_class *VAR_0, unsigned int VAR_1)
{
 VAR_0->cl_e = FUNC_1(&VAR_0->cl_eligible, VAR_0->cl_cumul);
 VAR_0->cl_d = FUNC_1(&VAR_0->cl_deadline, VAR_0->cl_cumul + VAR_1);

 FUNC_0(VAR_0);
}
