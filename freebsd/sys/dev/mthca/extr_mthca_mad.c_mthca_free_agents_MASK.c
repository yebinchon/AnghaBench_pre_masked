
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_ports; } ;
struct mthca_dev {scalar_t__* sm_ah; struct ib_mad_agent*** send_agent; TYPE_1__ limits; } ;
struct ib_mad_agent {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ib_mad_agent*) ;

void FUNC_2(struct mthca_dev *VAR_0)
{
 struct ib_mad_agent *VAR_1;
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->limits.num_ports; ++VAR_2) {
  for (VAR_3 = 0; VAR_3 <= 1; ++VAR_3) {
   VAR_1 = VAR_0->send_agent[VAR_2][VAR_3];
   VAR_0->send_agent[VAR_2][VAR_3] = ((void*)0);
   FUNC_1(VAR_1);
  }

  if (VAR_0->sm_ah[VAR_2])
   FUNC_0(VAR_0->sm_ah[VAR_2]);
 }
}
