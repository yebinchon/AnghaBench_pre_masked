
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_attach_args {int mii_phyno; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 struct mii_attach_args* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_10)
{
 device_t VAR_11;
 struct mii_attach_args *VAR_12;
 int VAR_13, VAR_14;

 VAR_11 = FUNC_2(VAR_10);
 VAR_12 = FUNC_1(VAR_10);







 VAR_13 = FUNC_0(VAR_11, VAR_12->mii_phyno, VAR_8);
 if ((VAR_13 & VAR_0) == 0 || (VAR_13 & VAR_1) != 0)
  return (VAR_3);

 VAR_14 = FUNC_0(VAR_11, VAR_12->mii_phyno, VAR_9);
 if (VAR_14 & (VAR_4|VAR_5))
  return (VAR_3);

 if (VAR_14 & (VAR_6|VAR_7)) {





  FUNC_3(VAR_10, "Generic ten-bit interface");
  return (VAR_2);
 }

 return (VAR_3);
}
