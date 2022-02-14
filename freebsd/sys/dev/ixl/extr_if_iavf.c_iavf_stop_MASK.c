
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {int dummy; } ;
struct TYPE_2__ {struct ifnet* ifp; } ;
struct iavf_sc {int queues_enabled; TYPE_1__ vsi; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct iavf_sc*,int ) ;

__attribute__((used)) static void
FUNC_3(struct iavf_sc *VAR_1)
{
 struct ifnet *VAR_2;

 VAR_2 = VAR_1->vsi.ifp;

 FUNC_1(&VAR_1->vsi);

 if (FUNC_0(&VAR_1->queues_enabled))
  FUNC_2(VAR_1, VAR_0);
}
