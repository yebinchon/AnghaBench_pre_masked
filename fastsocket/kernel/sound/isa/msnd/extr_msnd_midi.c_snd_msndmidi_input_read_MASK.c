
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct snd_msndmidi {int input_lock; TYPE_1__* dev; int substream_input; int mode; } ;
struct TYPE_2__ {int MIDQ; void* mappedbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int,int) ;

void FUNC_6(void *VAR_5)
{
 unsigned long VAR_6;
 struct snd_msndmidi *VAR_7 = VAR_5;
 void *VAR_8 = VAR_7->dev->mappedbase + VAR_3;

 FUNC_2(&VAR_7->input_lock, VAR_6);
 while (FUNC_0(VAR_7->dev->MIDQ + VAR_2) !=
        FUNC_0(VAR_7->dev->MIDQ + VAR_0)) {
  u16 VAR_9, VAR_10;
  VAR_10 = FUNC_0(VAR_8 + 2 * FUNC_0(VAR_7->dev->MIDQ + VAR_0));

   if (FUNC_4(VAR_4,
         &VAR_7->mode))
    FUNC_1(VAR_7->substream_input,
          (unsigned char *)&VAR_10, 1);

  VAR_9 = FUNC_0(VAR_7->dev->MIDQ + VAR_0) + 1;
  if (VAR_9 > FUNC_0(VAR_7->dev->MIDQ + VAR_1))
   FUNC_5(0, VAR_7->dev->MIDQ + VAR_0);
  else
   FUNC_5(VAR_9, VAR_7->dev->MIDQ + VAR_0);
 }
 FUNC_3(&VAR_7->input_lock, VAR_6);
}
