
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dbuf {int tmpbuf; } ;
struct pcm_feeder {int dummy; } ;
struct pcm_channel {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct pcm_feeder*,struct pcm_channel*,int ,int ,struct snd_dbuf*) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 unsigned int FUNC_2 (int ,int ) ;
 int FUNC_3 (unsigned int,unsigned int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_4 (struct snd_dbuf*,int ,unsigned int) ;
 int FUNC_5 (struct snd_dbuf*) ;
 unsigned int FUNC_6 (struct snd_dbuf*) ;

int
FUNC_7(struct snd_dbuf *VAR_4, struct snd_dbuf *VAR_5, struct pcm_channel *VAR_6, struct pcm_feeder *VAR_7, unsigned int VAR_8)
{
 unsigned int VAR_9, VAR_10;
 FUNC_1(VAR_8 > 0, ("can't feed 0 bytes"));

 if (FUNC_6(VAR_5) < VAR_8)
  return (VAR_0);

 VAR_10 = FUNC_2(VAR_1, FUNC_5(VAR_5));

 do {
  VAR_9 = FUNC_0(VAR_7, VAR_6, VAR_5->tmpbuf,
      FUNC_3(VAR_8, VAR_10), VAR_4);
  if (VAR_9 == 0)
   break;
  FUNC_4(VAR_5, VAR_5->tmpbuf, VAR_9);
  VAR_8 -= VAR_9;



 } while (VAR_8 != 0);






 return (0);
}
