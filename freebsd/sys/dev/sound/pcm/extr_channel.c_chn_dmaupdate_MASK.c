
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dbuf {int dummy; } ;
struct pcm_channel {scalar_t__ direction; int dev; struct snd_dbuf* bufhard; } ;


 int FUNC_0 (struct pcm_channel*) ;
 int FUNC_1 (struct pcm_channel*) ;
 scalar_t__ FUNC_2 (struct pcm_channel*) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_4 (struct pcm_channel*) ;
 int FUNC_5 (int ,char*,int ,unsigned int,unsigned int,unsigned int,unsigned int,int ,int ) ;
 unsigned int FUNC_6 (unsigned int,int ) ;
 int VAR_1 ;
 int FUNC_7 (struct snd_dbuf*,int *,unsigned int) ;
 int FUNC_8 (struct snd_dbuf*,int *,unsigned int) ;
 unsigned int FUNC_9 (struct snd_dbuf*) ;
 int FUNC_10 (struct snd_dbuf*) ;
 unsigned int FUNC_11 (struct snd_dbuf*) ;
 int FUNC_12 (struct snd_dbuf*) ;
 unsigned int FUNC_13 (struct snd_dbuf*) ;
 int FUNC_14 (struct snd_dbuf*,unsigned int) ;

__attribute__((used)) static unsigned int
FUNC_15(struct pcm_channel *VAR_2)
{
 struct snd_dbuf *VAR_3 = VAR_2->bufhard;
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7;

 FUNC_3(FUNC_13(VAR_3) > 0, ("bufsize == 0"));
 FUNC_1(VAR_2);

 VAR_5 = FUNC_11(VAR_3);
 VAR_6 = FUNC_4(VAR_2);
 VAR_4 = (FUNC_13(VAR_3) + VAR_6 - VAR_5) % FUNC_13(VAR_3);
 FUNC_14(VAR_3, VAR_6);

 if (VAR_2->direction == VAR_0) {
  VAR_7 = FUNC_6(VAR_4, FUNC_12(VAR_3));
  VAR_7 -= VAR_7 % FUNC_9(VAR_3);
  if (VAR_7 > 0)
   FUNC_8(VAR_3, ((void*)0), VAR_7);
 } else {
  VAR_7 = FUNC_6(VAR_4, FUNC_10(VAR_3));
  VAR_7 -= VAR_7 % FUNC_9(VAR_3);
  if (VAR_7 > 0)
         FUNC_7(VAR_3, ((void*)0), VAR_7);
 }
 if (VAR_1 > 3 && FUNC_2(VAR_2) && VAR_4 == 0) {
  FUNC_5(VAR_2->dev, "WARNING: %s DMA completion "
   "too fast/slow ! hwptr=%u, old=%u "
   "delta=%u amt=%u ready=%u free=%u\n",
   FUNC_0(VAR_2), VAR_6, VAR_5, VAR_4, VAR_7,
   FUNC_12(VAR_3), FUNC_10(VAR_3));
 }

 return VAR_4;
}
