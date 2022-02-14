
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {int rate; } ;
struct esschan {int fmt; int frag_size; } ;
struct es1968 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct es1968 *VAR_4, struct esschan *VAR_5,
    struct snd_pcm_runtime *VAR_6)
{

 int VAR_7 = VAR_6->rate * 4;
 if (VAR_5->fmt & VAR_3)
  VAR_7 <<= 1;
 if (VAR_5->fmt & VAR_2)
  VAR_7 <<= 1;
 VAR_7 /= VAR_5->frag_size;
 if (VAR_7 < VAR_0)
  VAR_7 = VAR_0;
 else if (VAR_7 > VAR_1)
  VAR_7 = VAR_1;
 return VAR_7;
}
