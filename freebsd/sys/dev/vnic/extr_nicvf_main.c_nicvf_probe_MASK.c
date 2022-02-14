
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_6)
{
 uint16_t VAR_7;
 uint16_t VAR_8;

 VAR_7 = FUNC_2(VAR_6);
 VAR_8 = FUNC_1(VAR_6);

 if (VAR_7 != VAR_4)
  return (VAR_1);

 if (VAR_8 == VAR_2 ||
     VAR_8 == VAR_3) {
  FUNC_0(VAR_6, VAR_5);
  return (VAR_0);
 }

 return (VAR_1);
}
