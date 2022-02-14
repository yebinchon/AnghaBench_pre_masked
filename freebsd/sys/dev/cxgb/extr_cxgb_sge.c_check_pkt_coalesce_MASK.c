
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct sge_txq {scalar_t__ in_use; } ;
struct sge_qset {size_t idx; scalar_t__ coalescing; TYPE_1__* port; struct sge_txq* txq; } ;
struct adapter {int* tunq_fill; int tunq_coalesce; } ;
struct TYPE_2__ {struct adapter* adapter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct sge_qset*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static __inline uint64_t
FUNC_2(struct sge_qset *VAR_6)
{
        struct adapter *VAR_7;
        struct sge_txq *VAR_8;
 uint8_t *VAR_9;

 if (FUNC_1(VAR_5))
  return (1);
 VAR_8 = &VAR_6->txq[VAR_2];
        VAR_7 = VAR_6->port->adapter;
 VAR_9 = &VAR_7->tunq_fill[VAR_6->idx];

 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;
 if (VAR_4 < VAR_1)
  VAR_3 = VAR_1;






        if (*VAR_9 != 0 && (VAR_8->in_use <= VAR_4) &&
     FUNC_0(VAR_6) && (VAR_6->coalescing == 0))
                *VAR_9 = 0;
        else if (*VAR_9 == 0 && (VAR_8->in_use >= VAR_3))
                *VAR_9 = 1;

 return (VAR_7->tunq_coalesce);
}
