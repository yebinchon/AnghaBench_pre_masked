
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ if_rxd_info_t ;
typedef TYPE_1__* if_rxd_info_pad_t ;
struct TYPE_2__ {scalar_t__* rxd_val; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void
FUNC_0(if_rxd_info_t VAR_2)
{
 if_rxd_info_pad_t VAR_3;
 int VAR_4;

 VAR_3 = (if_rxd_info_pad_t)VAR_2;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4 += 4) {
  VAR_3->rxd_val[VAR_4] = 0;
  VAR_3->rxd_val[VAR_4+1] = 0;
  VAR_3->rxd_val[VAR_4+2] = 0;
  VAR_3->rxd_val[VAR_4+3] = 0;
 }

 VAR_3->rxd_val[VAR_0-1] = 0;

}
