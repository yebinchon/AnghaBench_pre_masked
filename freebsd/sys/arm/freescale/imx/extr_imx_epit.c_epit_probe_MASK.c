
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;
struct TYPE_2__ {int ocd_data; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 struct resource* FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ,int ,struct resource*) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__* VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__* VAR_7 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct resource*) ;
 int * FUNC_10 (int ,char*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_8)
{
 struct resource *VAR_9;
 rman_res_t VAR_10;
 int VAR_11, VAR_12, VAR_13;

 if (!FUNC_8(VAR_8))
  return (VAR_1);







 VAR_13 = FUNC_2(VAR_8);
 VAR_11 = FUNC_7(VAR_8, VAR_4)->ocd_data;
 if (VAR_13 < VAR_11) {
  FUNC_3(VAR_8, "i.MX EPIT timer");
  return (VAR_0);
 }






 if (FUNC_10(FUNC_6(VAR_8), "epit") == ((void*)0))
  return (VAR_1);

 VAR_12 = 0;
 VAR_9 = FUNC_0(VAR_8, VAR_3, &VAR_12, VAR_2);
 if (VAR_9 == ((void*)0))
  return (VAR_1);
 VAR_10 = FUNC_9(VAR_9);
 FUNC_1(VAR_8, VAR_3, VAR_9);

 if (FUNC_4() == 6) {
  if (VAR_13 > 0)
   return (VAR_1);
  if (VAR_10 != VAR_7[VAR_13])
   return (VAR_1);
 } else {
  if (VAR_13 > 1)
   return (VAR_1);
  switch (FUNC_5()) {
  case 129:
   if (VAR_10 != VAR_5[VAR_13])
    return (VAR_1);
   break;
  case 128:
   if (VAR_10 != VAR_6[VAR_13])
    return (VAR_1);
   break;
  default:
   return (VAR_1);
  }




  return (VAR_1);
 }

 FUNC_3(VAR_8, "i.MX EPIT timer");
 return (VAR_0);
}
