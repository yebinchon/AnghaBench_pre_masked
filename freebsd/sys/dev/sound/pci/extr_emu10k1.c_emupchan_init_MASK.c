
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dbuf {int dummy; } ;
struct sc_pchinfo {int blksz; int spd; struct snd_dbuf* buffer; void* slave; void* master; int fmt; struct pcm_channel* channel; struct sc_info* parent; } ;
struct sc_info {int bufsz; int lock; int pnum; struct sc_pchinfo* pch; } ;
struct pcm_channel {int dummy; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int ) ;
 void* FUNC_2 (struct sc_info*) ;
 scalar_t__ FUNC_3 (struct sc_info*,void*,void*,int,struct snd_dbuf*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void *
FUNC_6(kobj_t VAR_2, void *VAR_3, struct snd_dbuf *VAR_4,
    struct pcm_channel *VAR_5, int VAR_6)
{
 struct sc_info *VAR_7 = VAR_3;
 struct sc_pchinfo *VAR_8;
 void *VAR_9;

 FUNC_0(VAR_6 == VAR_1, ("emupchan_init: bad direction"));
 VAR_8 = &VAR_7->pch[VAR_7->pnum++];
 VAR_8->buffer = VAR_4;
 VAR_8->parent = VAR_7;
 VAR_8->channel = VAR_5;
 VAR_8->blksz = VAR_7->bufsz / 2;
 VAR_8->fmt = FUNC_1(VAR_0, 1, 0);
 VAR_8->spd = 8000;
 FUNC_4(VAR_7->lock);
 VAR_8->master = FUNC_2(VAR_7);
 VAR_8->slave = FUNC_2(VAR_7);
 FUNC_5(VAR_7->lock);
 VAR_9 = (FUNC_3(VAR_7, VAR_8->master, VAR_8->slave, VAR_7->bufsz, VAR_8->buffer))
     ? ((void*)0) : VAR_8;

 return VAR_9;
}
