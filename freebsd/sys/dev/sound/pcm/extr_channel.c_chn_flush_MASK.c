
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dbuf {int dummy; } ;
struct pcm_channel {scalar_t__ direction; int flags; struct snd_dbuf* bufhard; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcm_channel*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct pcm_channel*,int ) ;
 int FUNC_4 (struct pcm_channel*,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct snd_dbuf*,int ) ;

int
FUNC_7(struct pcm_channel *VAR_4)
{
     struct snd_dbuf *VAR_5 = VAR_4->bufhard;

 FUNC_0(VAR_4);
 FUNC_2(VAR_4->direction == VAR_2, ("chn_flush on bad channel"));
     FUNC_1(FUNC_5("chn_flush: c->flags 0x%08x\n", VAR_4->flags));

 VAR_4->flags |= VAR_0;
 FUNC_3(VAR_4, 0);
 VAR_4->flags &= ~VAR_1;

 FUNC_4(VAR_4, VAR_3);
 FUNC_6(VAR_5, 0);

     VAR_4->flags &= ~VAR_0;
     return 0;
}
