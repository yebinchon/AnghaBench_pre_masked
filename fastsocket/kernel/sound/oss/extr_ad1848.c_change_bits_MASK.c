
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__** mix_devices; } ;
typedef TYPE_2__ ad1848_info ;
struct TYPE_4__ {int mutepol; int polarity; int nbits; int bitpos; int mutepos; } ;



__attribute__((used)) static void FUNC_0(ad1848_info * VAR_0, unsigned char *VAR_1,
   unsigned char *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 unsigned char VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_10 = (VAR_5 == 0) ^ VAR_0->mix_devices[VAR_3][VAR_4].mutepol;

 if (VAR_0->mix_devices[VAR_3][VAR_4].polarity == 1)
  VAR_5 = 100 - VAR_5;

 VAR_6 = (1 << VAR_0->mix_devices[VAR_3][VAR_4].nbits) - 1;
 VAR_7 = VAR_0->mix_devices[VAR_3][VAR_4].bitpos;

 if (VAR_0->mix_devices[VAR_3][VAR_4].mutepos == 8)
 {
  VAR_8 = 0;
  VAR_9 = ~0;
 }
 else
 {
  VAR_8 = (VAR_10 << VAR_0->mix_devices[VAR_3][VAR_4].mutepos);
  VAR_9 = ~(1 << VAR_0->mix_devices[VAR_3][VAR_4].mutepos);
 }

 VAR_5 = (int) ((VAR_5 * VAR_6) + 50) / 100;
 *VAR_1 &= ~(VAR_6 << VAR_7);
 *VAR_1 |= (VAR_5 & VAR_6) << VAR_7;

 *VAR_2 &= VAR_9;
 *VAR_2 |= VAR_8;
}
