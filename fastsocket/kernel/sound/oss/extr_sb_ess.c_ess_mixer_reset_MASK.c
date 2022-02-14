
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int submodel; scalar_t__ recmask; scalar_t__ supported_rec_devices; } ;
typedef TYPE_1__ sb_devc ;



 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int,int,int) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3 (sb_devc * VAR_0)
{



 if (FUNC_2 (VAR_0->submodel)) {
  switch (VAR_0->submodel) {
  case 128:





   FUNC_1(VAR_0, 0x7a, 0x18, 0x08);
   FUNC_1(VAR_0, 0x1c, 0x07, 0x07);
   break;
  };



  VAR_0->recmask = VAR_0->supported_rec_devices;
  FUNC_0(VAR_0, 0);
  VAR_0->recmask = 0;

  return 1;
 } else {
  return 0;
 }
}
