
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int lock; int audio_mode; } ;
typedef TYPE_2__ ad1848_info ;
struct TYPE_10__ {TYPE_1__* dmap_in; scalar_t__ devc; } ;
struct TYPE_8__ {int dma; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 TYPE_4__** VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(int VAR_3)
{
 ad1848_info *VAR_4 = (ad1848_info *) VAR_1[VAR_3]->devc;
 unsigned long VAR_5;

 if (!(FUNC_1(VAR_4, 9) & 0x02))
  return;

 FUNC_7(&VAR_4->lock,VAR_5);

 FUNC_0(VAR_4);

 {
  int VAR_6;

  if(!VAR_2)
          FUNC_3(VAR_1[VAR_3]->dmap_in->dma);

  for (VAR_6 = 0; VAR_6 < 100000; VAR_6++)
   if (FUNC_1(VAR_4, 11) & 0x10)
    break;
  FUNC_2(VAR_4, 9, FUNC_1(VAR_4, 9) & ~0x02);

  if(!VAR_2)
          FUNC_4(VAR_1[VAR_3]->dmap_in->dma);
  VAR_4->audio_mode &= ~VAR_0;
 }

 FUNC_6(0, FUNC_5(VAR_4));
 FUNC_6(0, FUNC_5(VAR_4));

 VAR_4->audio_mode &= ~VAR_0;

 FUNC_8(&VAR_4->lock,VAR_5);
}
