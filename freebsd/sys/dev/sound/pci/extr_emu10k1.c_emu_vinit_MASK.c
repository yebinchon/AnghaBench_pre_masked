
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct snd_dbuf {int dummy; } ;
struct sc_info {scalar_t__ audigy; } ;
struct emu_voice {int start; int ismaster; int vol; int fxrt1; int fxrt2; struct emu_voice* slave; int buf; scalar_t__ running; scalar_t__ stereo; scalar_t__ b16; scalar_t__ speed; int * channel; scalar_t__ end; } ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct sc_info*,int ,int *) ;
 int FUNC_1 (struct sc_info*,void*) ;
 int FUNC_2 (struct snd_dbuf*,void*,int ) ;

__attribute__((used)) static int
FUNC_3(struct sc_info *VAR_5, struct emu_voice *VAR_6, struct emu_voice *VAR_7,
   u_int32_t VAR_8, struct snd_dbuf *VAR_9)
{
 void *VAR_10;
 bus_addr_t VAR_11;

 VAR_10 = FUNC_0(VAR_5, VAR_8, &VAR_11);
 if (VAR_10 == ((void*)0))
  return -1;
 if (VAR_9 != ((void*)0))
  FUNC_2(VAR_9, VAR_10, VAR_8);
 VAR_6->start = FUNC_1(VAR_5, VAR_10) * VAR_0;
 VAR_6->end = VAR_6->start + VAR_8;
 VAR_6->channel = ((void*)0);
 VAR_6->speed = 0;
 VAR_6->b16 = 0;
 VAR_6->stereo = 0;
 VAR_6->running = 0;
 VAR_6->ismaster = 1;
 VAR_6->vol = 0xff;
 VAR_6->buf = VAR_11;
 VAR_6->slave = VAR_7;
 if (VAR_5->audigy) {
  VAR_6->fxrt1 = VAR_1 | VAR_4 << 8 |
      VAR_3 << 16 | VAR_2 << 24;
  VAR_6->fxrt2 = 0x3f3f3f3f;
 } else {
  VAR_6->fxrt1 = VAR_1 | VAR_4 << 4 |
      VAR_3 << 8 | VAR_2 << 12;
  VAR_6->fxrt2 = 0;
 }

 if (VAR_7 != ((void*)0)) {
  VAR_7->start = VAR_6->start;
  VAR_7->end = VAR_6->end;
  VAR_7->channel = ((void*)0);
  VAR_7->speed = 0;
  VAR_7->b16 = 0;
  VAR_7->stereo = 0;
  VAR_7->running = 0;
  VAR_7->ismaster = 0;
  VAR_7->vol = VAR_6->vol;
  VAR_7->buf = VAR_6->buf;
  VAR_7->fxrt1 = VAR_6->fxrt1;
  VAR_7->fxrt2 = VAR_6->fxrt2;
  VAR_7->slave = ((void*)0);
 }
 return 0;
}
