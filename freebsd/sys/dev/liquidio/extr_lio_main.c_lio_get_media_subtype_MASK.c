
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_device {int subdevice_id; } ;


 int VAR_0 ;
 int VAR_1 ;






__attribute__((used)) static int
FUNC_0(struct octeon_device *VAR_2)
{

 switch(VAR_2->subdevice_id) {
 case 132:
 case 131:
 case 129:
  return (VAR_0);

 case 130:
 case 128:
  return (VAR_1);
 }

 return (VAR_0);
}
