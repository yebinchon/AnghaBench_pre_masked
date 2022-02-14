
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int nvpriv_t ;
struct TYPE_3__ {int nvl_nvflag; scalar_t__ nvl_pad; scalar_t__ nvl_flag; scalar_t__ nvl_priv; int nvl_version; } ;
typedef TYPE_1__ nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(nvlist_t *VAR_3, uint32_t VAR_4, nvpriv_t *VAR_5)
{
 VAR_3->nvl_version = VAR_2;
 VAR_3->nvl_nvflag = VAR_4 & (VAR_0|VAR_1);
 VAR_3->nvl_priv = (uint64_t)(uintptr_t)VAR_5;
 VAR_3->nvl_flag = 0;
 VAR_3->nvl_pad = 0;
}
