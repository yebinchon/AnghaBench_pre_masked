
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_device_id {scalar_t__ class; scalar_t__ vendor; scalar_t__ device; } ;
typedef scalar_t__ __u8 ;
typedef scalar_t__ __u16 ;


 int FUNC_0 (char*,char*,int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1,
   struct sdio_device_id *VAR_2, char *VAR_3)
{
 VAR_2->class = FUNC_1(VAR_2->class);
 VAR_2->vendor = FUNC_1(VAR_2->vendor);
 VAR_2->device = FUNC_1(VAR_2->device);

 FUNC_3(VAR_3, "sdio:");
 FUNC_0(VAR_3, "c", VAR_2->class != (__u8)VAR_0, VAR_2->class);
 FUNC_0(VAR_3, "v", VAR_2->vendor != (__u16)VAR_0, VAR_2->vendor);
 FUNC_0(VAR_3, "d", VAR_2->device != (__u16)VAR_0, VAR_2->device);
 FUNC_2(VAR_3);
 return 1;
}
