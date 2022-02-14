
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int open_mode; } ;
typedef TYPE_1__ ad1848_port_info ;
struct TYPE_6__ {int open_mode; int dual_dma; int record_dev; int playback_dev; int lock; scalar_t__ audio_mode; scalar_t__ intr_active; } ;
typedef TYPE_2__ ad1848_info ;
struct TYPE_7__ {int flags; scalar_t__ portc; scalar_t__ devc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_3__** VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(int VAR_7, int VAR_8)
{
 ad1848_info *VAR_9;
 ad1848_port_info *VAR_10;
 unsigned long VAR_11;

 if (VAR_7 < 0 || VAR_7 >= VAR_6)
  return -VAR_2;

 VAR_9 = (ad1848_info *) VAR_5[VAR_7]->devc;
 VAR_10 = (ad1848_port_info *) VAR_5[VAR_7]->portc;


 FUNC_2(&VAR_9->lock);
 if (VAR_10->open_mode || (VAR_9->open_mode & VAR_8))
 {
  FUNC_4(&VAR_9->lock);
  return -VAR_1;
 }
 VAR_9->dual_dma = 0;

 if (VAR_5[VAR_7]->flags & VAR_0)
 {
  VAR_9->dual_dma = 1;
 }
 VAR_9->intr_active = 0;
 VAR_9->audio_mode = 0;
 VAR_9->open_mode |= VAR_8;
 VAR_10->open_mode = VAR_8;
 FUNC_4(&VAR_9->lock);
 FUNC_0(VAR_7, 0);

 if (VAR_8 & VAR_3)
  VAR_9->record_dev = VAR_7;
 if (VAR_8 & VAR_4)
  VAR_9->playback_dev = VAR_7;



 FUNC_3(&VAR_9->lock,VAR_11);
 FUNC_1(VAR_9);
 FUNC_5(&VAR_9->lock,VAR_11);

 return 0;
}
