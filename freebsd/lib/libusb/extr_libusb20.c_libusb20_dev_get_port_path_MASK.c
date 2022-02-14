
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct libusb20_device {int port_level; int parent_address; int parent_port; int port_path; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int ,int) ;

int
FUNC_1(struct libusb20_device *VAR_1, uint8_t *VAR_2, uint8_t VAR_3)
{

 if (VAR_1->port_level == 0) {



  if (VAR_3 < 2)
   return (VAR_0);
  VAR_2[0] = VAR_1->parent_address;
  VAR_2[1] = VAR_1->parent_port;
  return (2);
 }


 if (VAR_1->port_level > VAR_3)
  return (VAR_0);


 FUNC_0(VAR_2, VAR_1->port_path, VAR_1->port_level);

 return (VAR_1->port_level);
}
