
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int link_width; int pectl; int dev; } ;
typedef TYPE_1__ mxge_softc_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int,int) ;

__attribute__((used)) static void
FUNC_4(mxge_softc_t *VAR_1)
{
 device_t VAR_2 = VAR_1->dev;
 int VAR_3;
 uint16_t VAR_4, VAR_5;


 if (FUNC_1(VAR_2, VAR_0, &VAR_3) == 0) {
  VAR_4 = FUNC_2(VAR_2, VAR_3 + 0x12, 2);
  VAR_1->link_width = (VAR_4 >> 4) & 0x3f;

  if (VAR_1->pectl == 0) {
   VAR_5 = FUNC_2(VAR_2, VAR_3 + 0x8, 2);
   VAR_5 = (VAR_5 & ~0x7000) | (5 << 12);
   FUNC_3(VAR_2, VAR_3 + 0x8, VAR_5, 2);
   VAR_1->pectl = VAR_5;
  } else {

   FUNC_3(VAR_2, VAR_3 + 0x8, VAR_1->pectl, 2);
  }
 }


 FUNC_0(VAR_2);
}
