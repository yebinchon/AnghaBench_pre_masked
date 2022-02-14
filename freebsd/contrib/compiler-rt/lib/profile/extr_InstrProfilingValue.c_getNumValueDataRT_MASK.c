
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {scalar_t__** SiteCountArray; TYPE_1__* Data; } ;
typedef TYPE_2__ ValueProfRuntimeRecord ;
struct TYPE_3__ {size_t* NumValueSites; } ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static uint32_t FUNC_0(const void *VAR_1, uint32_t VAR_2) {
  uint32_t VAR_3 = 0, VAR_4;
  const ValueProfRuntimeRecord *VAR_5 = (const ValueProfRuntimeRecord *)VAR_1;
  if (VAR_5->SiteCountArray[VAR_2] == VAR_0)
    return 0;
  for (VAR_4 = 0; VAR_4 < VAR_5->Data->NumValueSites[VAR_2]; VAR_4++)
    VAR_3 += VAR_5->SiteCountArray[VAR_2][VAR_4];
  return VAR_3;
}
