
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {scalar_t__ nvp_type; size_t nvp_nitems; scalar_t__ nvp_data; } ;
typedef TYPE_1__ nvpair_t ;


 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;

const uint64_t *
FUNC_2(const nvpair_t *VAR_1, size_t *VAR_2)
{

 FUNC_0(VAR_1);
 FUNC_1(VAR_1->nvp_type == VAR_0);

 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_1->nvp_nitems;

 return ((const uint64_t *)(intptr_t)VAR_1->nvp_data);
}
