
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct ecore_filter_mcast {int num_mc_addrs; int mac; int opcode; } ;
struct ecore_dev {int dummy; } ;
struct TYPE_3__ {struct ecore_filter_mcast ecore_mcast; struct ecore_dev cdev; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ecore_filter_mcast*,int) ;
 int FUNC_1 (struct ecore_dev*,struct ecore_filter_mcast*,int ,int *) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static int
FUNC_3(qlnx_host_t *VAR_4, uint8_t *VAR_5, uint32_t VAR_6)
{
 struct ecore_filter_mcast *VAR_7;
 struct ecore_dev *VAR_8;
 int VAR_9;

 VAR_8 = &VAR_4->cdev;

 VAR_7 = &VAR_4->ecore_mcast;
 FUNC_0(VAR_7, sizeof(struct ecore_filter_mcast));

 if (VAR_6)
  VAR_7->opcode = VAR_0;
 else
  VAR_7->opcode = VAR_1;

 VAR_7->num_mc_addrs = 1;
 FUNC_2(VAR_7->mac, VAR_5, VAR_3);

 VAR_9 = FUNC_1(VAR_8, VAR_7, VAR_2, ((void*)0));

 return (VAR_9);
}
