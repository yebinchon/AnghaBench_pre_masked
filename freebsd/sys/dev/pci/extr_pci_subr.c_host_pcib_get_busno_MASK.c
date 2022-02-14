
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef void* (* pci_read_config_fn ) (int,int,int,int,int) ;


 int VAR_0 ;

int
FUNC_0(pci_read_config_fn VAR_1, int VAR_2, int VAR_3, int VAR_4,
    uint8_t *VAR_5)
{
 uint32_t VAR_6;

 VAR_6 = VAR_1(VAR_2, VAR_3, VAR_4, VAR_0, 4);
 if (VAR_6 == 0xffffffff)
  return (0);

 switch (VAR_6) {
 case 0x12258086:



  *VAR_5 = VAR_2;
  break;
 case 0x84c48086:

  *VAR_5 = VAR_1(VAR_2, VAR_3, VAR_4, 0x4a, 1);
  break;
 case 0x84ca8086:
  return (0);
 case 0x84cb8086:
  switch (VAR_3) {
  case 0x12:

   *VAR_5 = VAR_1(VAR_2, 0x10, VAR_4, 0xd0, 1);
   break;
  case 0x13:

   *VAR_5 = VAR_1(VAR_2, 0x10, VAR_4, 0xd1, 1) + 1;
   break;
  case 0x14:

   *VAR_5 = VAR_1(VAR_2, 0x10, VAR_4, 0xd3, 1);
   break;
  case 0x15:

   *VAR_5 = VAR_1(VAR_2, 0x10, VAR_4, 0xd4, 1) + 1;
   break;
  }
  break;


 case 0x00051166:
 case 0x00061166:
 case 0x00081166:
 case 0x00091166:
 case 0x00101166:
 case 0x00111166:
 case 0x00171166:
 case 0x01011166:
 case 0x010f1014:
 case 0x01101166:
 case 0x02011166:
 case 0x02251166:
 case 0x03021014:
  *VAR_5 = VAR_1(VAR_2, VAR_3, VAR_4, 0x44, 1);
  break;


 case 0x60100e11:
  *VAR_5 = VAR_1(VAR_2, VAR_3, VAR_4, 0xc8, 1);
  break;
 default:

  return 0;
 }

 return 1;
}
