
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct psm_softc {int dummy; } ;
struct TYPE_5__ {int* ipacket; } ;
typedef TYPE_1__ packetbuf_t ;
struct TYPE_6__ {int button; int obutton; } ;
typedef TYPE_2__ mousestatus_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct psm_softc *VAR_11, packetbuf_t *VAR_12, mousestatus_t *VAR_13,
    int *VAR_14, int *VAR_15, int *VAR_16)
{
 if (((VAR_12->ipacket[0] & VAR_7) == VAR_6) &&
     (FUNC_3(*VAR_14) > 191) && FUNC_0(VAR_12->ipacket)) {




  switch (FUNC_1(VAR_12->ipacket)) {
  case 1:

   *VAR_14 = *VAR_15 = 0;
   if (VAR_12->ipacket[2] & 0x80) {

    ;
   } else {

    *VAR_16 = (VAR_12->ipacket[2] & VAR_8) ?
        (VAR_12->ipacket[2] & 0x0f) - 16 :
        (VAR_12->ipacket[2] & 0x0f);
   }
   VAR_13->button |= (VAR_12->ipacket[2] &
       VAR_4) ?
       VAR_1 : 0;
   VAR_13->button |= (VAR_12->ipacket[2] &
       VAR_5) ?
       VAR_2 : 0;
   break;
  case 2:
   *VAR_14 = *VAR_15 = 0;

   if (VAR_12->ipacket[2] & 0x0f)
    *VAR_16 = (VAR_12->ipacket[2] & VAR_9) ?
        -2 : 2;

   if (VAR_12->ipacket[2] & 0xf0)
    *VAR_16 = (VAR_12->ipacket[2] & VAR_10) ?
        -1 : 1;
   break;
  case 0:


  default:
   *VAR_14 = *VAR_15 = 0;
   VAR_13->button = VAR_13->obutton;
   FUNC_2(1, (VAR_0, "psmintr: unknown PS2++ packet "
       "type %d: 0x%02x 0x%02x 0x%02x\n",
       FUNC_1(VAR_12->ipacket),
       VAR_12->ipacket[0], VAR_12->ipacket[1], VAR_12->ipacket[2]));
   break;
  }
 } else {

  VAR_13->button |= VAR_13->obutton & VAR_3;
 }
}
