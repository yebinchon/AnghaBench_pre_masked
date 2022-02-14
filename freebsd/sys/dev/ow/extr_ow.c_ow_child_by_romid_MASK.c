
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ow_devinfo {scalar_t__ romid; } ;
typedef scalar_t__ romid_t ;
typedef int * device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ***,int*) ;
 struct ow_devinfo* FUNC_1 (int *) ;
 int FUNC_2 (int **,int ) ;

__attribute__((used)) static device_t
FUNC_3(device_t VAR_1, romid_t VAR_2)
{
 device_t *VAR_3, VAR_4, VAR_5;
 int VAR_6, VAR_7;
 struct ow_devinfo *VAR_8;

 if (FUNC_0(VAR_1, &VAR_3, &VAR_6) != 0)
  return (((void*)0));
 VAR_4 = ((void*)0);
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_5 = VAR_3[VAR_7];
  VAR_8 = FUNC_1(VAR_5);
  if (VAR_8->romid == VAR_2) {
   VAR_4 = VAR_5;
   break;
  }
 }
 FUNC_2(VAR_3, VAR_0);

 return (VAR_4);
}
