
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_devinfo {int address; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct adb_devinfo* FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, device_t VAR_1)
{
 struct adb_devinfo *VAR_2;
 int VAR_3 = 0;

 VAR_2 = FUNC_2(VAR_1);

 VAR_3 += FUNC_1(VAR_0,VAR_1);
 FUNC_3(" at device %d",VAR_2->address);
 VAR_3 += FUNC_0(VAR_0, VAR_1);

 return (VAR_3);
}
