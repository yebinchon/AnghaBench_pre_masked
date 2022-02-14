
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct snd_dbuf {unsigned int bufsize; int fmt; } ;


 int * FUNC_0 (struct snd_dbuf*) ;
 int FUNC_1 (struct snd_dbuf*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct snd_dbuf *VAR_0, unsigned int VAR_1)
{
 int VAR_2;
 u_char VAR_3, *VAR_4;

 if (VAR_1 == 0)
  return;
 if (VAR_1 > VAR_0->bufsize)
  VAR_1 = VAR_0->bufsize;

 VAR_3 = FUNC_2(VAR_0->fmt);

 VAR_2 = FUNC_1(VAR_0);
 VAR_4 = FUNC_0(VAR_0);
 while (VAR_1 > 0) {
  VAR_4[VAR_2] = VAR_3;
  VAR_1--;
  VAR_2++;
  if (VAR_2 >= VAR_0->bufsize)
   VAR_2 = 0;
 }
}
