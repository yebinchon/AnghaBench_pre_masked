
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_2__ {int drv_desc; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4)
{
 int VAR_5 = VAR_1;

 switch (FUNC_2(VAR_4)) {
 case 129:
  if(VAR_2)
   FUNC_0(VAR_4,
       "Enlightened ATA/IDE detected\n");
  FUNC_1(VAR_4, VAR_3[129].drv_desc);
  VAR_5 = VAR_0;
  break;
 case 128:
  if(VAR_2)
   FUNC_0(VAR_4, "Enlightened SCSI device detected\n");
  FUNC_1(VAR_4, VAR_3[128].drv_desc);
  VAR_5 = VAR_0;
  break;
 default:
  VAR_5 = VAR_1;
 }
 return (VAR_5);
}
