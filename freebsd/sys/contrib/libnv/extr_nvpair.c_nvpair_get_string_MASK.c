
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nvp_type; scalar_t__ nvp_data; } ;
typedef TYPE_1__ nvpair_t ;


 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;

const char *
FUNC_2(const nvpair_t *VAR_1)
{

 FUNC_0(VAR_1);
 FUNC_1(VAR_1->nvp_type == VAR_0);

 return ((const char *)(intptr_t)VAR_1->nvp_data);
}
