
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dbuf {int total; int prev_total; } ;


 int FUNC_0 (struct snd_dbuf*) ;

void
FUNC_1(struct snd_dbuf *VAR_0)
{
 FUNC_0(VAR_0);

 VAR_0->prev_total = VAR_0->total;
}
