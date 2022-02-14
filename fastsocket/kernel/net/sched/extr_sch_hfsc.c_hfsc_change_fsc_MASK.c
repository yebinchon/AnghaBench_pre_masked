
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_service_curve {int dummy; } ;
struct hfsc_class {int cl_flags; int cl_total; int cl_vt; int cl_fsc; int cl_virtual; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (struct tc_service_curve*,int *) ;

__attribute__((used)) static void
FUNC_2(struct hfsc_class *VAR_1, struct tc_service_curve *VAR_2)
{
 FUNC_1(VAR_2, &VAR_1->cl_fsc);
 FUNC_0(&VAR_1->cl_virtual, &VAR_1->cl_fsc, VAR_1->cl_vt, VAR_1->cl_total);
 VAR_1->cl_flags |= VAR_0;
}
