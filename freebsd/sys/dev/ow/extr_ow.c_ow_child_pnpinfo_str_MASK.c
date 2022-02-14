
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ow_devinfo {int romid; } ;
typedef int device_t ;


 struct ow_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t,char*,int *,char*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, device_t VAR_1, char *VAR_2,
    size_t VAR_3)
{
 struct ow_devinfo *VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 FUNC_1(VAR_2, VAR_3, "romid=%8D", &VAR_4->romid, ":");
 return (0);
}
