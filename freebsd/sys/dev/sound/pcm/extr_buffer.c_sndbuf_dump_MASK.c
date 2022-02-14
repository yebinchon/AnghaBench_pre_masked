
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int u_int32_t ;
struct snd_dbuf {int bufsize; int maxsize; int dl; int rp; int rl; int hp; int fmt; int spd; int blksz; int blkcnt; int flags; int xrun; scalar_t__ prev_total; scalar_t__ total; } ;


 int FUNC_0 (char*,...) ;

void
FUNC_1(struct snd_dbuf *VAR_0, char *VAR_1, u_int32_t VAR_2)
{
 FUNC_0("%s: [", VAR_1);
 if (VAR_2 & 0x01)
  FUNC_0(" bufsize: %d, maxsize: %d", VAR_0->bufsize, VAR_0->maxsize);
 if (VAR_2 & 0x02)
  FUNC_0(" dl: %d, rp: %d, rl: %d, hp: %d", VAR_0->dl, VAR_0->rp, VAR_0->rl, VAR_0->hp);
 if (VAR_2 & 0x04)
  FUNC_0(" total: %ju, prev_total: %ju, xrun: %d", (uintmax_t)VAR_0->total, (uintmax_t)VAR_0->prev_total, VAR_0->xrun);
    if (VAR_2 & 0x08)
  FUNC_0(" fmt: 0x%x, spd: %d", VAR_0->fmt, VAR_0->spd);
 if (VAR_2 & 0x10)
  FUNC_0(" blksz: %d, blkcnt: %d, flags: 0x%x", VAR_0->blksz, VAR_0->blkcnt, VAR_0->flags);
 FUNC_0(" ]\n");
}
