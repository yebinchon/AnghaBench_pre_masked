
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mode; int rxbaud; } ;
typedef TYPE_1__ cx_chan_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0 (cx_chan_t *VAR_2)
{
 int VAR_3;
 if (VAR_2->mode == VAR_1) {
  VAR_3 = (VAR_2->rxbaud + 800 - 1) / 800 * 2;
  if (VAR_3 < 4)
   VAR_3 = 4;
  else if (VAR_3 > VAR_0)
   VAR_3 = VAR_0;
 }
 else
  VAR_3 = VAR_0;

 return VAR_3;
}
