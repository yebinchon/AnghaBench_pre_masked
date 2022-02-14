
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct rdma_cm_id {TYPE_2__* device; } ;
typedef int sin ;
typedef int __be32 ;
struct TYPE_4__ {scalar_t__ node_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct rdma_cm_id*) ;
 int FUNC_1 (struct rdma_cm_id*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct sockaddr_in*,int ,int) ;
 int FUNC_3 (struct rdma_cm_id*,struct sockaddr*) ;
 struct rdma_cm_id* FUNC_4 (int *,int *,int ,int ) ;
 int FUNC_5 (struct rdma_cm_id*) ;
 int FUNC_6 (char*,int *,int,int) ;

__attribute__((used)) static int FUNC_7(__be32 VAR_5)
{
 int VAR_6;
 struct rdma_cm_id *VAR_7;
 struct sockaddr_in VAR_8;




 VAR_7 = FUNC_4(((void*)0), ((void*)0), VAR_4, VAR_2);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.sin_family = VAR_0;
 VAR_8.sin_addr.s_addr = VAR_5;


 VAR_6 = FUNC_3(VAR_7, (struct sockaddr *)&VAR_8);


 if (VAR_6 || VAR_7->device->node_type != VAR_3)
  VAR_6 = -VAR_1;

 FUNC_6("addr %pI4 ret %d node type %d\n",
  &VAR_5, VAR_6,
  VAR_7->device ? VAR_7->device->node_type : -1);

 FUNC_5(VAR_7);

 return VAR_6;
}
