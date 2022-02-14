
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdc_data {int fdct; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (struct fdc_data*,int,int,int,int*,...) ;
 int FUNC_6 (struct fdc_data*,int ) ;
 int FUNC_7 (struct fdc_data*) ;

int
FUNC_8(device_t VAR_8, struct fdc_data *VAR_9)
{
 int VAR_10, VAR_11;





 if (FUNC_7(VAR_9) == 0xff)
  return (VAR_0);





 FUNC_6(VAR_9, 0);
 FUNC_6(VAR_9, 0);
 if (FUNC_7(VAR_9) != 0)
  return (VAR_0);




 FUNC_6(VAR_9, VAR_4);
 FUNC_0(100);
 if (FUNC_7(VAR_9) != 0x80)
  return (VAR_0);


 if (FUNC_5(VAR_9, 3, VAR_5, FUNC_1(6, 240),
     FUNC_2(31, 0), 0))
  return (VAR_0);
 if (FUNC_5(VAR_9, 1, VAR_6, 1, &VAR_10))
  return (VAR_0);
 if (FUNC_5(VAR_9, 1, 0x18, 1, &VAR_11))
  return (VAR_0);
 if (VAR_7)
  FUNC_3(VAR_8,
      "ic_type %02x part_id %02x\n", VAR_10, VAR_11);
 switch (VAR_10 & 0xff) {
 case 0x80:
  FUNC_4(VAR_8, "NEC 765 or clone");
  VAR_9->fdct = VAR_2;
  break;
 case 0x81:
 case 0x90:
  FUNC_4(VAR_8,
      "Enhanced floppy controller");
  VAR_9->fdct = VAR_1;
  break;
 default:
  FUNC_4(VAR_8, "Generic floppy controller");
  VAR_9->fdct = VAR_3;
  break;
 }
 return (0);
}
