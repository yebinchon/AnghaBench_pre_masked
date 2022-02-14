
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {size_t isp_maxcmds; TYPE_1__* isp_xflist; } ;
typedef TYPE_2__ ispsoftc_t ;
struct TYPE_4__ {void* cmd; size_t handle; } ;


 size_t VAR_0 ;

uint32_t
FUNC_0(ispsoftc_t *VAR_1, void *VAR_2)
{
 uint32_t VAR_3, VAR_4 = VAR_0;

 if (VAR_2 != ((void*)0)) {
  for (VAR_3 = 0; VAR_3 < VAR_1->isp_maxcmds; VAR_3++) {
   if (VAR_1->isp_xflist[VAR_3].cmd != VAR_2) {
    continue;
   }
   VAR_4 = VAR_1->isp_xflist[VAR_3].handle;
   break;
  }
 }
 return (VAR_4);
}
