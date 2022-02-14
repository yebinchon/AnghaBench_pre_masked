
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_rxq {int refill_delay; int refill_callout; } ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int *,int,int ,struct sfxge_rxq*) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct sfxge_rxq *VAR_2, boolean_t VAR_3)
{



 if (VAR_3)
  VAR_2->refill_delay = FUNC_1(VAR_2->refill_delay * 2, 10 * VAR_0);
 else
  VAR_2->refill_delay = VAR_0 / 10;

 FUNC_0(&VAR_2->refill_callout, VAR_2->refill_delay,
        VAR_1, VAR_2);
}
