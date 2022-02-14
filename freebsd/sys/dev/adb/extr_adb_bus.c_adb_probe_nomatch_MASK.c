
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_devinfo {size_t default_address; int address; } ;
typedef int device_t ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 struct adb_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_2, device_t VAR_3)
{
 struct adb_devinfo *VAR_4;

 if (VAR_1) {
  VAR_4 = FUNC_0(VAR_3);

  FUNC_1(VAR_2,"ADB %s at device %d (no driver attached)\n",
      VAR_0[VAR_4->default_address],VAR_4->address);
 }
}
