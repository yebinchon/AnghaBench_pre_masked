
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfsc_class {scalar_t__ cl_cumul; int cl_deadline; int cl_d; } ;


 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_1(struct hfsc_class *VAR_0, unsigned int VAR_1)
{
 VAR_0->cl_d = FUNC_0(&VAR_0->cl_deadline, VAR_0->cl_cumul + VAR_1);
}
