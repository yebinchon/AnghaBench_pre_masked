
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int os; } ;
typedef TYPE_1__ sli4_t ;
struct TYPE_6__ {int type; int lock; int n_posted; int doorbell_offset; int doorbell_rset; int id; } ;
typedef TYPE_2__ sli4_queue_t ;
typedef int int32_t ;


 int * VAR_0 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;

int32_t
FUNC_6(sli4_t *VAR_1, sli4_queue_t *VAR_2, uint8_t VAR_3)
{
 uint32_t VAR_4 = 0;

 FUNC_0(&VAR_2->lock);

 switch (VAR_2->type) {
 case 128:
  VAR_4 = FUNC_5(VAR_2->n_posted, VAR_2->id, VAR_3);
  FUNC_2(VAR_1->os, VAR_2->doorbell_rset, VAR_2->doorbell_offset, VAR_4);
  VAR_2->n_posted = 0;
  break;
 case 129:
  VAR_4 = FUNC_4(VAR_2->n_posted, VAR_2->id, VAR_3);
  FUNC_2(VAR_1->os, VAR_2->doorbell_rset, VAR_2->doorbell_offset, VAR_4);
  VAR_2->n_posted = 0;
  break;
 default:
  FUNC_1(VAR_1->os, "should only be used for EQ/CQ, not %s\n",
        VAR_0[VAR_2->type]);
 }

 FUNC_3(&VAR_2->lock);

 return 0;
}
