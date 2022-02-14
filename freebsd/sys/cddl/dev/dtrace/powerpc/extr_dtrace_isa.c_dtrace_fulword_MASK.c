
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ret ;
struct TYPE_2__ {uintptr_t cpuc_dtrace_illval; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void const*,void*,int) ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_2 (uintptr_t,uintptr_t,int) ;

uintptr_t
FUNC_3(void *VAR_3)
{
 uintptr_t VAR_4 = 0;

 if (FUNC_2((uintptr_t)VAR_3, (uintptr_t)&VAR_4, sizeof(VAR_4))) {
  if (FUNC_1((const void *)VAR_3, (void *)&VAR_4, sizeof(VAR_4))) {
   FUNC_0(VAR_0);
   VAR_1[VAR_2].cpuc_dtrace_illval = (uintptr_t)VAR_3;
  }
 }
 return VAR_4;
}
