
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct octeon_device {int subdevice_id; } ;


 int FUNC_0 (int) ;






__attribute__((used)) static uint64_t
FUNC_1(struct octeon_device *VAR_0)
{

 switch(VAR_0->subdevice_id) {
 case 132:
 case 131:
 case 129:
  return (FUNC_0(10));

 case 130:
 case 128:
  return (FUNC_0(25));
 }

 return (FUNC_0(10));
}
