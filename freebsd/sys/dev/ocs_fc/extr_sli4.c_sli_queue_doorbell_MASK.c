
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int os; int port_type; } ;
typedef TYPE_3__ sli4_t ;
struct TYPE_7__ {int rq_batch; int is_hdr; } ;
struct TYPE_8__ {TYPE_1__ flag; } ;
struct TYPE_10__ {int type; int n_posted; int index; int doorbell_offset; int doorbell_rset; int id; TYPE_2__ u; } ;
typedef TYPE_4__ sli4_queue_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int,int ) ;





 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int,int ,int ) ;

__attribute__((used)) static int32_t
FUNC_7(sli4_t *VAR_3, sli4_queue_t *VAR_4)
{
 uint32_t VAR_5 = 0;

 switch (VAR_4->type) {
 case 131:
  VAR_5 = FUNC_6(VAR_4->n_posted, VAR_4->id, VAR_0);
  FUNC_4(VAR_3->os, VAR_4->doorbell_rset, VAR_4->doorbell_offset, VAR_5);
  break;
 case 132:
  VAR_5 = FUNC_5(VAR_4->n_posted, VAR_4->id, VAR_0);
  FUNC_4(VAR_3->os, VAR_4->doorbell_rset, VAR_4->doorbell_offset, VAR_5);
  break;
 case 130:
  VAR_5 = FUNC_0(VAR_4->n_posted, VAR_4->id);
  FUNC_4(VAR_3->os, VAR_4->doorbell_rset, VAR_4->doorbell_offset, VAR_5);
  break;
 case 129:
 {
  uint32_t VAR_6 = VAR_4->n_posted;






  if (VAR_1 == VAR_3->port_type) {






   if (!VAR_4->u.flag.is_hdr) {
    break;
   }





   if (VAR_4->u.flag.rq_batch) {
    if (((VAR_4->index + VAR_4->n_posted) % VAR_2)) {
     break;
    }
    VAR_6 = VAR_2;
   }
  }

  VAR_5 = FUNC_1(VAR_6, VAR_4->id);
  FUNC_4(VAR_3->os, VAR_4->doorbell_rset, VAR_4->doorbell_offset, VAR_5);
  break;
 }
 case 128:
  VAR_5 = FUNC_2(VAR_4->n_posted, VAR_4->index, VAR_4->id);
  FUNC_4(VAR_3->os, VAR_4->doorbell_rset, VAR_4->doorbell_offset, VAR_5);
  break;
 default:
  FUNC_3(VAR_3->os, "bad queue type %d\n", VAR_4->type);
  return -1;
 }

 return 0;
}
