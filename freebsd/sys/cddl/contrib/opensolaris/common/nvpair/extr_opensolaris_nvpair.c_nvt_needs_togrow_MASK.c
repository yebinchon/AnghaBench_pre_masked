
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nvp_nentries; int nvp_nbuckets; } ;
typedef TYPE_1__ nvpriv_t ;
typedef int boolean_t ;


 int VAR_0 ;

__attribute__((used)) static boolean_t
FUNC_0(nvpriv_t *VAR_1)
{




 return (VAR_1->nvp_nentries > VAR_1->nvp_nbuckets &&
     (VAR_0 >> 1) >= VAR_1->nvp_nbuckets);
}
