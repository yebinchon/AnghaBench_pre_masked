
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nvp_type; scalar_t__ nvp_data; scalar_t__ nvp_datasize; } ;
typedef TYPE_1__ nvpair_t ;
typedef int nvlist_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int const*) ;

void
FUNC_2(nvpair_t *VAR_1)
{

 FUNC_0(VAR_1);

 if (VAR_1->nvp_type == VAR_0) {
  if (VAR_1->nvp_data == 0) {
   VAR_1->nvp_datasize = 0;
  } else {
   VAR_1->nvp_datasize =
       FUNC_1((const nvlist_t *)(intptr_t)VAR_1->nvp_data);
  }
 }
}
