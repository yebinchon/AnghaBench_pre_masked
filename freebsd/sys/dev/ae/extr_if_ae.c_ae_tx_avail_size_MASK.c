
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ txd_cur; scalar_t__ txd_ack; } ;
typedef TYPE_1__ ae_softc_t ;


 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int
FUNC_0(ae_softc_t *VAR_1)
{
 unsigned int VAR_2;

 if (VAR_1->txd_cur >= VAR_1->txd_ack)
  VAR_2 = VAR_0 - (VAR_1->txd_cur - VAR_1->txd_ack);
 else
  VAR_2 = VAR_1->txd_ack - VAR_1->txd_cur;

 return (VAR_2);
}
