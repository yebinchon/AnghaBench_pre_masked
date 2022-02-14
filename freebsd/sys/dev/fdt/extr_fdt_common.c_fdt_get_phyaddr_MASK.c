
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int phy_reg ;
typedef int phy_handle ;
typedef scalar_t__ phandle_t ;
typedef int pcell_t ;
typedef int * device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,char*,void*,int) ;
 scalar_t__ FUNC_1 (scalar_t__,char*,void*,int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int * FUNC_4 (int *,int ,scalar_t__) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

int
FUNC_9(phandle_t VAR_1, device_t VAR_2, int *VAR_3, void **VAR_4)
{
 phandle_t VAR_5;
 pcell_t VAR_6, VAR_7;
 uint32_t VAR_8;
 device_t VAR_9, VAR_10;

 if (FUNC_0(VAR_1, "phy-handle", (void *)&VAR_6,
     sizeof(VAR_6)) <= 0)
  return (VAR_0);

 VAR_5 = FUNC_2(VAR_6);

 if (FUNC_0(VAR_5, "reg", (void *)&VAR_7,
     sizeof(VAR_7)) <= 0)
  return (VAR_0);

 *VAR_3 = VAR_7;

 if (VAR_4 == ((void*)0))
  return (0);
 VAR_5 = FUNC_3(VAR_5);
 while (VAR_5 != 0) {
  if (FUNC_1(VAR_5, "phy-handle", (void *)&VAR_6,
      sizeof(VAR_6)) > 0)
   break;
  VAR_5 = FUNC_3(VAR_5);
 }
 if (VAR_5 == 0)
  return (VAR_0);






 VAR_9 = FUNC_6(VAR_2);
 VAR_8 = 0;
 VAR_10 = FUNC_4(VAR_9, FUNC_5(VAR_2), VAR_8);
 while (VAR_10 != ((void*)0)) {
  if (FUNC_8(VAR_10) == VAR_5)
   break;
  VAR_8++;
  VAR_10 = FUNC_4(VAR_9, FUNC_5(VAR_2), VAR_8);
 }
 if (VAR_10 == ((void*)0))
  return (VAR_0);




 *VAR_4 = (void *)FUNC_7(VAR_10);

 return (0);
}
