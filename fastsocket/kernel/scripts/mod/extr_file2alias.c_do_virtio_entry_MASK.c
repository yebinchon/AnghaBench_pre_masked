
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_device_id {scalar_t__ device; scalar_t__ vendor; } ;


 int FUNC_0 (char*,char*,int,scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, struct virtio_device_id *VAR_2,
      char *VAR_3)
{
 VAR_2->device = FUNC_1(VAR_2->device);
 VAR_2->vendor = FUNC_1(VAR_2->vendor);

 FUNC_3(VAR_3, "virtio:");
 FUNC_0(VAR_3, "d", VAR_2->device != VAR_0, VAR_2->device);
 FUNC_0(VAR_3, "v", VAR_2->vendor != VAR_0, VAR_2->vendor);

 FUNC_2(VAR_3);
 return 1;
}
