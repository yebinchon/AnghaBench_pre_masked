
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ow_devinfo {int romid; } ;
typedef int device_t ;


 struct ow_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *,char*) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, device_t VAR_1)
{
 struct ow_devinfo *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 FUNC_1(VAR_0, "romid %8D: no driver\n", &VAR_2->romid, ":");
}
