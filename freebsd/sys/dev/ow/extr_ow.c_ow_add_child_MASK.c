
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ow_devinfo {int romid; } ;
typedef int romid_t ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,struct ow_devinfo*) ;
 int FUNC_2 (struct ow_devinfo*,int ) ;
 struct ow_devinfo* FUNC_3 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3, romid_t VAR_4)
{
 struct ow_devinfo *VAR_5;
 device_t VAR_6;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1, VAR_2);
 VAR_5->romid = VAR_4;
 VAR_6 = FUNC_0(VAR_3, ((void*)0), -1);
 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_5, VAR_1);
  return VAR_0;
 }
 FUNC_1(VAR_6, VAR_5);
 return (0);
}
