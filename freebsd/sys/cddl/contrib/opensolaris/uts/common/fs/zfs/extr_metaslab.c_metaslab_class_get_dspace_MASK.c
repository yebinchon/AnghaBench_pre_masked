
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int mc_space; int mc_dspace; int mc_spa; } ;
typedef TYPE_1__ metaslab_class_t ;


 scalar_t__ FUNC_0 (int ) ;

uint64_t
FUNC_1(metaslab_class_t *VAR_0)
{
 return (FUNC_0(VAR_0->mc_spa) ? VAR_0->mc_dspace : VAR_0->mc_space);
}
