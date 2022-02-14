
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmbus_channel {int ch_cpuid; int ch_vcpuid; int ch_id; TYPE_1__* ch_vmbus; } ;
struct TYPE_2__ {scalar_t__ vmbus_version; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct vmbus_channel*,char*,int ,int,int ) ;

void
FUNC_3(struct vmbus_channel *VAR_5, int VAR_6)
{
 FUNC_0(VAR_6 >= 0 && VAR_6 < VAR_3, ("invalid cpu %d", VAR_6));

 if (VAR_5->ch_vmbus->vmbus_version == VAR_1 ||
     VAR_5->ch_vmbus->vmbus_version == VAR_0) {

  VAR_6 = 0;
 }

 VAR_5->ch_cpuid = VAR_6;
 VAR_5->ch_vcpuid = FUNC_1(VAR_5->ch_vmbus, VAR_4, VAR_6);

 if (VAR_2) {
  FUNC_2(VAR_5,
      "chan%u assigned to cpu%u [vcpu%u]\n",
      VAR_5->ch_id, VAR_5->ch_cpuid, VAR_5->ch_vcpuid);
 }
}
