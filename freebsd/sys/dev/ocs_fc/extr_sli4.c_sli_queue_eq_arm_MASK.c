
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
struct TYPE_6__ {int lock; scalar_t__ n_posted; int doorbell_offset; int doorbell_rset; int id; } ;
typedef TYPE_2__ sli4_queue_t ;
typedef int int32_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int ,int ) ;

int32_t
FUNC_4(sli4_t *VAR_0, sli4_queue_t *VAR_1, uint8_t VAR_2)
{
 uint32_t VAR_3 = 0;

 FUNC_0(&VAR_1->lock);
  VAR_3 = FUNC_3(VAR_1->n_posted, VAR_1->id, VAR_2);
  FUNC_1(VAR_0->os, VAR_1->doorbell_rset, VAR_1->doorbell_offset, VAR_3);
  VAR_1->n_posted = 0;
 FUNC_2(&VAR_1->lock);

 return 0;
}
