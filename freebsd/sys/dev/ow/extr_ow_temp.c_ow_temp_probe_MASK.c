
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{

 switch (FUNC_1(VAR_2)) {
 case 131:
  FUNC_0(VAR_2, "One Wire Temperature");
  return VAR_0;
 case 130:
 case 129:
 case 128:
  FUNC_0(VAR_2, "Advanced One Wire Temperature");
  return VAR_0;
 default:
  return VAR_1;
 }
}
