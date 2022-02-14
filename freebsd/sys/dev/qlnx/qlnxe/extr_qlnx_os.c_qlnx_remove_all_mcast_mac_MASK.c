
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ecore_filter_mcast {int num_mc_addrs; scalar_t__* addr; int ** mac; int opcode; } ;
struct ecore_dev {int dummy; } ;
typedef int qlnx_mcast_t ;
struct TYPE_3__ {scalar_t__ nmcast; struct ecore_filter_mcast* mcast; struct ecore_filter_mcast ecore_mcast; struct ecore_dev cdev; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ecore_filter_mcast*,int) ;
 int FUNC_1 (struct ecore_dev*,struct ecore_filter_mcast*,int ,int *) ;
 int FUNC_2 (int *,scalar_t__*,int ) ;

__attribute__((used)) static int
FUNC_3(qlnx_host_t *VAR_4)
{
 struct ecore_filter_mcast *VAR_5;
 struct ecore_dev *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = &VAR_4->cdev;

 VAR_5 = &VAR_4->ecore_mcast;
 FUNC_0(VAR_5, sizeof(struct ecore_filter_mcast));

 VAR_5->opcode = VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {

  if (VAR_4->mcast[VAR_8].addr[0] || VAR_4->mcast[VAR_8].addr[1] ||
   VAR_4->mcast[VAR_8].addr[2] || VAR_4->mcast[VAR_8].addr[3] ||
   VAR_4->mcast[VAR_8].addr[4] || VAR_4->mcast[VAR_8].addr[5]) {

   FUNC_2(&VAR_5->mac[VAR_8][0], &VAR_4->mcast[VAR_8].addr[0], VAR_2);
   VAR_5->num_mc_addrs++;
  }
 }
 VAR_5 = &VAR_4->ecore_mcast;

 VAR_7 = FUNC_1(VAR_6, VAR_5, VAR_1, ((void*)0));

 FUNC_0(VAR_4->mcast, (sizeof(qlnx_mcast_t) * VAR_3));
 VAR_4->nmcast = 0;

 return (VAR_7);
}
