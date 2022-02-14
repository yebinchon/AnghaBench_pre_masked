
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int* eaddr; int dev; } ;
typedef TYPE_1__ ae_softc_t ;


 int FUNC_0 (TYPE_1__*,int*) ;
 int FUNC_1 (TYPE_1__*,int*) ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(ae_softc_t *VAR_1)
{
 uint32_t VAR_2[2] = {0, 0};
 int VAR_3;




 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 != 0)
  VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 != 0) {
  if (VAR_0)
   FUNC_3(VAR_1->dev,
       "Generating random ethernet address.\n");
  VAR_2[0] = FUNC_2();




  VAR_1->eaddr[0] = 0x02;
  VAR_1->eaddr[1] = 0x1f;
  VAR_1->eaddr[2] = 0xc6;
  VAR_1->eaddr[3] = (VAR_2[0] >> 16) & 0xff;
  VAR_1->eaddr[4] = (VAR_2[0] >> 8) & 0xff;
  VAR_1->eaddr[5] = (VAR_2[0] >> 0) & 0xff;
 } else {
  VAR_1->eaddr[0] = (VAR_2[1] >> 8) & 0xff;
  VAR_1->eaddr[1] = (VAR_2[1] >> 0) & 0xff;
  VAR_1->eaddr[2] = (VAR_2[0] >> 24) & 0xff;
  VAR_1->eaddr[3] = (VAR_2[0] >> 16) & 0xff;
  VAR_1->eaddr[4] = (VAR_2[0] >> 8) & 0xff;
  VAR_1->eaddr[5] = (VAR_2[0] >> 0) & 0xff;
 }
}
