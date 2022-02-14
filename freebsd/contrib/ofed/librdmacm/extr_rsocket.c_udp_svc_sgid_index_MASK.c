
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ibv_gid {int dummy; } ibv_gid ;
typedef int uint8_t ;
struct ds_dest {TYPE_2__* qp; } ;
struct TYPE_4__ {TYPE_1__* cm_id; } ;
struct TYPE_3__ {int port_num; int verbs; } ;


 int FUNC_0 (int ,int ,int,union ibv_gid*) ;
 int FUNC_1 (union ibv_gid*,union ibv_gid*,int) ;

__attribute__((used)) static uint8_t FUNC_2(struct ds_dest *VAR_0, union ibv_gid *VAR_1)
{
 union ibv_gid VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
  FUNC_0(VAR_0->qp->cm_id->verbs, VAR_0->qp->cm_id->port_num,
         VAR_3, &VAR_2);
  if (!FUNC_1(VAR_1, &VAR_2, sizeof VAR_2))
   return VAR_3;
 }
 return 0;
}
