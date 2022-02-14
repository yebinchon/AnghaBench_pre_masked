
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int ch_guid_type; } ;
struct hyperv_guid {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct hyperv_guid const*,int) ;
 struct vmbus_channel* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, device_t VAR_2,
    const struct hyperv_guid *VAR_3)
{
 const struct vmbus_channel *VAR_4 = FUNC_1(VAR_2);

 if (FUNC_0(&VAR_4->ch_guid_type, VAR_3, sizeof(struct hyperv_guid)) == 0)
  return 0;
 return VAR_0;
}
