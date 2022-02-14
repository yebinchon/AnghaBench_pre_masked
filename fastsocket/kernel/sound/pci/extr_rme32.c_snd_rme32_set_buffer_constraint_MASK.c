
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {int dummy; } ;
struct rme32 {int fullduplex_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int ,int *) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct rme32 *VAR_4, struct snd_pcm_runtime *VAR_5)
{
 if (! VAR_4->fullduplex_mode) {
  FUNC_1(VAR_5,
          VAR_1,
          VAR_0, VAR_0);
  FUNC_0(VAR_5, 0,
        VAR_2,
        &VAR_3);
 }
}
