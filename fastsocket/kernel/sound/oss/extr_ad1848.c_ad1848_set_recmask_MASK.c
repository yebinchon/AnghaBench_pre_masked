
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int supported_rec_devices; int* mixer_reroute; int recmask; int lock; TYPE_1__** mix_devices; } ;
typedef TYPE_2__ ad1848_info ;
struct TYPE_6__ {scalar_t__ nbits; int recpol; int recreg; int recpos; } ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int,unsigned char) ;
 int VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(ad1848_info * VAR_3, int VAR_4)
{
 unsigned char VAR_5;
 int VAR_6, VAR_7;
 unsigned long VAR_8;

 VAR_4 &= VAR_3->supported_rec_devices;


 for (VAR_6 = 0; VAR_6 < 32; VAR_6++)
 {
  if (VAR_3->mixer_reroute[VAR_6] != VAR_6)
  {
   if (VAR_4 & (1 << VAR_6))
   {
    VAR_4 &= ~(1 << VAR_6);
    VAR_4 |= (1 << VAR_3->mixer_reroute[VAR_6]);
   }
  }
 }

 VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 < 32; VAR_6++)
  if (VAR_4 & (1 << VAR_6))
   VAR_7++;

 FUNC_2(&VAR_3->lock,VAR_8);
 if (!VAR_2) {
  if (VAR_7 == 0)
   VAR_4 = 128;
  else if (VAR_7 != 1) {
   VAR_4 &= ~VAR_3->recmask;

   VAR_7 = 0;
   for (VAR_6 = 0; VAR_6 < 32; VAR_6++)
    if (VAR_4 & (1 << VAR_6))
     VAR_7++;

   if (VAR_7 != 1)
    VAR_4 = 128;
  }
  switch (VAR_4) {
  case 128:
   VAR_5 = 2;
   break;

  case 131:
  case 129:
   VAR_5 = 0;
   break;

  case 133:
  case 130:
   VAR_5 = 1;
   break;

  case 132:
   VAR_5 = 3;
   break;

  default:
   VAR_4 = 128;
   VAR_5 = 2;
  }

  VAR_5 <<= 6;
  FUNC_1(VAR_3, 0, (FUNC_0(VAR_3, 0) & 0x3f) | VAR_5);
  FUNC_1(VAR_3, 1, (FUNC_0(VAR_3, 1) & 0x3f) | VAR_5);
 } else {
  unsigned char VAR_9;
  int VAR_10;
  int VAR_11;

  for (VAR_6 = 0; VAR_6 < 32; VAR_6++) {
   if ((VAR_3->supported_rec_devices & (1 << VAR_6)) == 0)
    continue;

   for (VAR_11 = VAR_0; VAR_11 <= VAR_1; VAR_11++) {
    if (VAR_3->mix_devices[VAR_6][VAR_11].nbits == 0)
     continue;






    VAR_10 = ((VAR_4 & (1 << VAR_6)) != 0) ^ VAR_3->mix_devices[VAR_6][VAR_11].recpol;

    VAR_9 = FUNC_0(VAR_3, VAR_3->mix_devices[VAR_6][VAR_11].recreg);
    VAR_9 &= ~(1 << VAR_3->mix_devices[VAR_6][VAR_11].recpos);
    VAR_9 |= (VAR_10 << VAR_3->mix_devices[VAR_6][VAR_11].recpos);
    FUNC_1(VAR_3, VAR_3->mix_devices[VAR_6][VAR_11].recreg, VAR_9);
   }
  }
 }
 FUNC_3(&VAR_3->lock,VAR_8);


 for (VAR_6 = 0; VAR_6 < 32; VAR_6++)
 {
  if (VAR_3->mixer_reroute[VAR_6] != VAR_6)
  {
   if (VAR_4 & (1 << VAR_3->mixer_reroute[VAR_6]))
   {
    VAR_4 &= ~(1 << VAR_3->mixer_reroute[VAR_6]);
    VAR_4 |= (1 << VAR_6);
   }
  }
 }
 VAR_3->recmask = VAR_4;
 return VAR_4;
}
