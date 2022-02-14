
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int,int) ;
 int VAR_9 ;

int
FUNC_9(device_t VAR_10)
{
 int VAR_11;
 device_t VAR_12;
 uint16_t VAR_13;


 if ((FUNC_5(VAR_10) != VAR_1 &&
     (FUNC_5(VAR_10) != VAR_2 ||
      FUNC_6(VAR_10) != VAR_8)))
  return (0);

 VAR_11 = FUNC_3(VAR_10);

 if (VAR_9 >= 0) {





  return (VAR_9 == VAR_11);
 }
 VAR_12 = FUNC_2(FUNC_2(VAR_10));
 if (FUNC_1(FUNC_2(VAR_12)) ==
     FUNC_0("pci")) {




  VAR_13 = FUNC_7(VAR_12, VAR_6, 2);
  if ((VAR_13 & VAR_0) == 0)
   return (0);
 }

 VAR_13 = FUNC_7(VAR_10, VAR_7, 2);
 if ((VAR_13 & (VAR_5 | VAR_4)) == 0)
  return (0);






 FUNC_8(VAR_10, VAR_7, VAR_13 | VAR_3, 2);


 VAR_9 = VAR_11;
 FUNC_4(VAR_10, 1);

 return (1);
}
