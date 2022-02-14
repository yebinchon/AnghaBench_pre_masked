
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int r_idx; } ;
struct TYPE_6__ {int type; int dma; TYPE_1__ u; int index; } ;
typedef TYPE_2__ sli4_queue_t ;
struct TYPE_7__ {int vld; } ;
typedef TYPE_3__ sli4_eqe_t ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static uint8_t
FUNC_2(sli4_queue_t *VAR_3, uint8_t *VAR_4, uint8_t VAR_5)
{
 uint8_t VAR_6 = VAR_0;

 switch (VAR_3->type) {
 case 130:
  VAR_6 = ((sli4_eqe_t *)VAR_4)->vld;
  if (VAR_6 && VAR_5) {
   ((sli4_eqe_t *)VAR_4)->vld = 0;
  }
  break;
 case 131:




  VAR_6 = (VAR_4[15] & 0x80) != 0;
  if (VAR_6 & VAR_5) {
   VAR_4[15] &= ~0x80;
  }
  break;
 case 129:
  VAR_6 = VAR_3->index != VAR_3->u.r_idx;
  break;
 case 128:
  VAR_6 = VAR_2;
  VAR_5 = VAR_0;
  break;
 default:
  FUNC_1(((void*)0), "doesn't handle type=%#x\n", VAR_3->type);
 }

 if (VAR_5) {
  FUNC_0(&VAR_3->dma, VAR_1);
 }

 return VAR_6;
}
