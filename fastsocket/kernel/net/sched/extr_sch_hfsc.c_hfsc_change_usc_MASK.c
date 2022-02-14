
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tc_service_curve {int dummy; } ;
struct hfsc_class {int cl_flags; int cl_total; int cl_usc; int cl_ulimit; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (struct tc_service_curve*,int *) ;

__attribute__((used)) static void
FUNC_2(struct hfsc_class *VAR_1, struct tc_service_curve *VAR_2,
  u64 VAR_3)
{
 FUNC_1(VAR_2, &VAR_1->cl_usc);
 FUNC_0(&VAR_1->cl_ulimit, &VAR_1->cl_usc, VAR_3, VAR_1->cl_total);
 VAR_1->cl_flags |= VAR_0;
}
