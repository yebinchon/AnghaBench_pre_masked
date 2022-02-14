
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_5__ {int tstamp_precision; } ;
struct TYPE_6__ {int tstamp_precision_count; scalar_t__* tstamp_precision_list; TYPE_1__ opt; } ;
typedef TYPE_2__ pcap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

int
FUNC_1(pcap_t *VAR_3, int VAR_4)
{
 int VAR_5;

 if (FUNC_0(VAR_3))
  return (VAR_0);





 if (VAR_4 < 0)
  return (VAR_1);
 if (VAR_3->tstamp_precision_count == 0) {
  if (VAR_4 == VAR_2) {
   VAR_3->opt.tstamp_precision = VAR_4;
   return (0);
  }
 } else {




  for (VAR_5 = 0; VAR_5 < VAR_3->tstamp_precision_count; VAR_5++) {
   if (VAR_3->tstamp_precision_list[VAR_5] == (u_int)VAR_4) {



    VAR_3->opt.tstamp_precision = VAR_4;
    return (0);
   }
  }
 }




 return (VAR_1);
}
