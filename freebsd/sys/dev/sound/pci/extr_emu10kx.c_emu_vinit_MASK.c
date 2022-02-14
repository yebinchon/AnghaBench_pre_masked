
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_dbuf {int dummy; } ;
struct emu_voice {int start; int ismaster; int vol; struct emu_voice* slave; int * vbuf; int buf; scalar_t__ running; scalar_t__ stereo; scalar_t__ b16; scalar_t__ speed; scalar_t__ end; } ;
struct emu_sc_info {int dbg_level; int mem; int dev; } ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (int *,int ,int *,char*) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (int *,void*) ;
 int FUNC_4 (struct snd_dbuf*,void*,int ) ;

int
FUNC_5(struct emu_sc_info *VAR_2, struct emu_voice *VAR_3, struct emu_voice *VAR_4,
    uint32_t VAR_5, struct snd_dbuf *VAR_6)
{
 void *VAR_7;
 bus_addr_t VAR_8;

 VAR_7 = FUNC_1(&VAR_2->mem, VAR_5, &VAR_8, "vinit");
 if (VAR_7 == ((void*)0)) {
  if(VAR_2->dbg_level > 2)
   FUNC_0(VAR_2->dev, "emu_memalloc returns NULL in enu_vinit\n");
  return (VAR_1);
  }
 if (VAR_6 != ((void*)0))
  FUNC_4(VAR_6, VAR_7, VAR_5);
 VAR_3->start = FUNC_3(&VAR_2->mem, VAR_7) * VAR_0;
 if (VAR_3->start < 0) {
  if(VAR_2->dbg_level > 2)
   FUNC_0(VAR_2->dev, "emu_memstart returns (-1) in enu_vinit\n");
  FUNC_2(&VAR_2->mem, VAR_7);
  return (VAR_1);
 }
 VAR_3->end = VAR_3->start + VAR_5;
 VAR_3->speed = 0;
 VAR_3->b16 = 0;
 VAR_3->stereo = 0;
 VAR_3->running = 0;
 VAR_3->ismaster = 1;
 VAR_3->vol = 0xff;
 VAR_3->buf = VAR_8;
 VAR_3->vbuf = VAR_7;
 VAR_3->slave = VAR_4;
 if (VAR_4 != ((void*)0)) {
  VAR_4->start = VAR_3->start;
  VAR_4->end = VAR_3->end;
  VAR_4->speed = 0;
  VAR_4->b16 = 0;
  VAR_4->stereo = 0;
  VAR_4->running = 0;
  VAR_4->ismaster = 0;
  VAR_4->vol = VAR_3->vol;
  VAR_4->buf = VAR_3->buf;
  VAR_4->vbuf = ((void*)0);
  VAR_4->slave = ((void*)0);
 }
 return (0);
}
