
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msg; } ;
union nic_mbx {TYPE_1__ msg; } ;
struct nicvf {int vf_id; int dev; void* pf_acked; void* pf_nacked; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (struct nicvf*) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int,int ) ;
 int FUNC_3 (struct nicvf*,union nic_mbx*) ;

int
FUNC_4(struct nicvf *VAR_4, union nic_mbx *VAR_5)
{
 int VAR_6 = VAR_3 * 10;
 int VAR_7 = 2;

 FUNC_1(VAR_4);

 VAR_4->pf_acked = VAR_2;
 VAR_4->pf_nacked = VAR_2;

 FUNC_3(VAR_4, VAR_5);


 while (!VAR_4->pf_acked) {
  if (VAR_4->pf_nacked)
   return (VAR_1);

  FUNC_0(VAR_7 * 1000);

  if (VAR_4->pf_acked)
   break;
  VAR_6 -= VAR_7;
  if (!VAR_6) {
   FUNC_2(VAR_4->dev,
       "PF didn't ack to mbox msg %d from VF%d\n",
       (VAR_5->msg.msg & 0xFF), VAR_4->vf_id);

   return (VAR_0);
  }
 }
 return (0);
}
