
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {scalar_t__ vendor_id; scalar_t__ device_id; } ;
typedef TYPE_1__ ena_vendor_info_t ;
typedef int device_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_5)
{
 ena_vendor_info_t *VAR_6;
 char VAR_7[60];
 uint16_t VAR_8 = 0;
 uint16_t VAR_9 = 0;

 VAR_8 = FUNC_3(VAR_5);
 VAR_9 = FUNC_2(VAR_5);

 VAR_6 = VAR_4;
 while (VAR_6->vendor_id != 0) {
  if ((VAR_8 == VAR_6->vendor_id) &&
      (VAR_9 == VAR_6->device_id)) {
   FUNC_1(VAR_2, "vendor=%x device=%x\n",
       VAR_8, VAR_9);

   FUNC_4(VAR_7, VAR_1);
   FUNC_0(VAR_5, VAR_7);
   return (VAR_0);
  }

  VAR_6++;

 }

 return (VAR_3);
}
