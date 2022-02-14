
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_4__ {size_t _type; } ;
typedef TYPE_1__ sldns_rr_descriptor ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__ const* VAR_2 ;

const sldns_rr_descriptor *
FUNC_0(uint16_t VAR_3)
{
 size_t VAR_4;
 if (VAR_3 < VAR_0) {
  return &VAR_2[VAR_3];
 } else {

  for (VAR_4 = VAR_0;
       VAR_4 < VAR_1;
       VAR_4++) {
          if (VAR_2[VAR_4]._type == VAR_3) {
         return &VAR_2[VAR_4];
   }
  }
                return &VAR_2[0];
 }
}
