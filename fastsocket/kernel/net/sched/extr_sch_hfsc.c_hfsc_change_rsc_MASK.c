
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct tc_service_curve {int dummy; } ;
struct TYPE_5__ {scalar_t__ dy; scalar_t__ dx; } ;
struct TYPE_4__ {scalar_t__ sm1; scalar_t__ sm2; } ;
struct hfsc_class {int cl_flags; TYPE_2__ cl_eligible; TYPE_1__ cl_rsc; TYPE_2__ cl_deadline; int cl_cumul; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,int ,int ) ;
 int FUNC_1 (struct tc_service_curve*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(struct hfsc_class *VAR_1, struct tc_service_curve *VAR_2,
  u64 VAR_3)
{
 FUNC_1(VAR_2, &VAR_1->cl_rsc);
 FUNC_0(&VAR_1->cl_deadline, &VAR_1->cl_rsc, VAR_3, VAR_1->cl_cumul);
 VAR_1->cl_eligible = VAR_1->cl_deadline;
 if (VAR_1->cl_rsc.sm1 <= VAR_1->cl_rsc.sm2) {
  VAR_1->cl_eligible.dx = 0;
  VAR_1->cl_eligible.dy = 0;
 }
 VAR_1->cl_flags |= VAR_0;
}
