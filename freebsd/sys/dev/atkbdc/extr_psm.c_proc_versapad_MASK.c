
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct psm_softc {int flags; int xold; int yold; } ;
struct TYPE_5__ {int* ipacket; } ;
typedef TYPE_1__ packetbuf_t ;
struct TYPE_6__ {int button; } ;
typedef TYPE_2__ mousestatus_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_0(struct psm_softc *VAR_5, packetbuf_t *VAR_6, mousestatus_t *VAR_7,
    int *VAR_8, int *VAR_9, int *VAR_10)
{
 static int VAR_11[8] = {
  0,
  128,
  0,
  128,
  129,
  129 | 128,
  129,
  129 | 128
 };
 int VAR_12, VAR_13, VAR_14;
 VAR_12 = VAR_6->ipacket[0];
 *VAR_8 = *VAR_9 = 0;
 VAR_7->button = VAR_11[VAR_12 & VAR_1];
 VAR_7->button |= (VAR_12 & VAR_3) ? VAR_0 : 0;
 if (VAR_12 & VAR_2) {
  VAR_13 = VAR_6->ipacket[1] | (((VAR_6->ipacket[4]) & 0x0f) << 8);
  VAR_14 = VAR_6->ipacket[2] | (((VAR_6->ipacket[4]) & 0xf0) << 4);
  if (VAR_13 & 0x800)
   VAR_13 -= 0x1000;
  if (VAR_14 & 0x800)
   VAR_14 -= 0x1000;
  if (VAR_5->flags & VAR_4) {
   *VAR_8 = VAR_5->xold - VAR_13;
   *VAR_9 = VAR_14 - VAR_5->yold;
   if (*VAR_8 < 0)
    ++*VAR_8;
   else if (*VAR_8)
    --*VAR_8;
   if (*VAR_9 < 0)
    ++*VAR_9;
   else if (*VAR_9)
    --*VAR_9;
  } else
   VAR_5->flags |= VAR_4;
  VAR_5->xold = VAR_13;
  VAR_5->yold = VAR_14;
 } else
  VAR_5->flags &= ~VAR_4;
}
