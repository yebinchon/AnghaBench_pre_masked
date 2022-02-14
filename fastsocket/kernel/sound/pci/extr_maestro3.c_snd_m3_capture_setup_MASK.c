
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct snd_m3 {int dummy; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct m3_dma {TYPE_1__ inst; } ;
struct TYPE_5__ {scalar_t__ val; scalar_t__ addr; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_1 (struct snd_m3*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct snd_m3 *VAR_8, struct m3_dma *VAR_9, struct snd_pcm_substream *VAR_10)
{
 unsigned int VAR_11;





 FUNC_1(VAR_8, VAR_5,
     VAR_9->inst.data + VAR_6 + 12,
     VAR_9->inst.data + 40 + 8);


 FUNC_1(VAR_8, VAR_5,
     VAR_9->inst.data + VAR_0,
     VAR_2 + VAR_1 +
     VAR_4 + VAR_3);




 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_7); VAR_11++)
  FUNC_1(VAR_8, VAR_5,
      VAR_9->inst.data + VAR_7[VAR_11].addr, VAR_7[VAR_11].val);
}
