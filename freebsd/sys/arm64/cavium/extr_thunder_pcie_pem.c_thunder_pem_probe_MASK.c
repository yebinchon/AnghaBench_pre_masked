
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
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4)
{
 uint16_t VAR_5;
 uint16_t VAR_6;

 VAR_5 = FUNC_2(VAR_4);
 VAR_6 = FUNC_1(VAR_4);

 if ((VAR_5 == VAR_3) &&
     (VAR_6 == VAR_2)) {
  FUNC_0(VAR_4, VAR_1);
  return (0);
 }

 return (VAR_0);
}
