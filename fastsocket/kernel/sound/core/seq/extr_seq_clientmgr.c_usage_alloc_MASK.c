
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_usage {scalar_t__ cur; scalar_t__ peak; } ;



__attribute__((used)) static void FUNC_0(struct snd_seq_usage *VAR_0, int VAR_1)
{
 VAR_0->cur += VAR_1;
 if (VAR_0->cur > VAR_0->peak)
  VAR_0->peak = VAR_0->cur;
}
