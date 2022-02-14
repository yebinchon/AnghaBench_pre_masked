
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {size_t** SiteCountArray; } ;
typedef TYPE_1__ ValueProfRuntimeRecord ;



__attribute__((used)) static uint32_t FUNC_0(const void *VAR_0, uint32_t VAR_1,
                                         uint32_t VAR_2) {
  const ValueProfRuntimeRecord *VAR_3 = (const ValueProfRuntimeRecord *)VAR_0;
  return VAR_3->SiteCountArray[VAR_1][VAR_2];
}
