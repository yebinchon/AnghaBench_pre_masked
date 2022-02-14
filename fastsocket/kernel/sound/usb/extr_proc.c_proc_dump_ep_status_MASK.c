
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_substream {int dev; } ;
struct snd_usb_endpoint {int freqm; int freqshift; int syncmaxsize; int curpacksize; } ;
struct snd_info_buffer {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct snd_info_buffer*,char*,int,...) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct snd_usb_substream *VAR_2,
    struct snd_usb_endpoint *VAR_3,
    struct snd_info_buffer *VAR_4)
{
 if (!VAR_3)
  return;
 FUNC_2(VAR_4, "    Packet Size = %d\n", VAR_3->curpacksize);
 FUNC_2(VAR_4, "    Momentary freq = %u Hz (%#x.%04x)\n",
      FUNC_3(VAR_2->dev) == VAR_1
      ? FUNC_0(VAR_3->freqm)
      : FUNC_1(VAR_3->freqm),
      VAR_3->freqm >> 16, VAR_3->freqm & 0xffff);
 if (VAR_3->freqshift != VAR_0) {
  int VAR_5 = 16 - VAR_3->freqshift;
  FUNC_2(VAR_4, "    Feedback Format = %d.%d\n",
       (VAR_3->syncmaxsize > 3 ? 32 : 24) - VAR_5, VAR_5);
 }
}
