
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tx_desc {int dummy; } ;
struct TYPE_5__ {unsigned int size; int * desc; } ;
struct sge_qset {TYPE_3__* fl; TYPE_2__ rspq; TYPE_1__* txq; } ;
struct rx_desc {int dummy; } ;
struct rsp_desc {int dummy; } ;
struct TYPE_6__ {unsigned int size; int * desc; } ;
struct TYPE_4__ {unsigned int size; int * desc; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int *,int) ;

int
FUNC_1(const struct sge_qset *VAR_1, unsigned int VAR_2, unsigned int VAR_3,
  unsigned char *VAR_4)
{
 if (VAR_2 >= 6)
  return (VAR_0);

 if (VAR_2 < 3) {
  if (!VAR_1->txq[VAR_2].desc || VAR_3 >= VAR_1->txq[VAR_2].size)
   return -VAR_0;
  FUNC_0(VAR_4, &VAR_1->txq[VAR_2].desc[VAR_3], sizeof(struct tx_desc));
  return sizeof(struct tx_desc);
 }

 if (VAR_2 == 3) {
  if (!VAR_1->rspq.desc || VAR_3 >= VAR_1->rspq.size)
   return (VAR_0);
  FUNC_0(VAR_4, &VAR_1->rspq.desc[VAR_3], sizeof(struct rsp_desc));
  return sizeof(struct rsp_desc);
 }

 VAR_2 -= 4;
 if (!VAR_1->fl[VAR_2].desc || VAR_3 >= VAR_1->fl[VAR_2].size)
  return (VAR_0);
 FUNC_0(VAR_4, &VAR_1->fl[VAR_2].desc[VAR_3], sizeof(struct rx_desc));
 return sizeof(struct rx_desc);
}
