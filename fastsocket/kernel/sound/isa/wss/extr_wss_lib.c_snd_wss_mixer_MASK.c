
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_wss {int hardware; TYPE_1__* pcm; struct snd_card* card; } ;
struct snd_card {int mixername; } ;
struct TYPE_2__ {int name; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int * VAR_3 ;
 int FUNC_2 (struct snd_card*,int ) ;
 int FUNC_3 (int *,struct snd_wss*) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(struct snd_wss *VAR_6)
{
 struct snd_card *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 if (FUNC_1(!VAR_6 || !VAR_6->pcm))
  return -VAR_0;

 VAR_7 = VAR_6->card;

 FUNC_4(VAR_7->mixername, VAR_6->pcm->name);

 if (VAR_6->hardware == VAR_2)
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++) {
   VAR_9 = FUNC_2(VAR_7,
     FUNC_3(&VAR_4[VAR_8],
           VAR_6));
   if (VAR_9 < 0)
    return VAR_9;
  }
 else if (VAR_6->hardware & VAR_1)
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++) {
   VAR_9 = FUNC_2(VAR_7,
     FUNC_3(&VAR_3[VAR_8],
           VAR_6));
   if (VAR_9 < 0)
    return VAR_9;
  }
 else
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); VAR_8++) {
   VAR_9 = FUNC_2(VAR_7,
     FUNC_3(&VAR_5[VAR_8],
           VAR_6));
   if (VAR_9 < 0)
    return VAR_9;
  }
 return 0;
}
