
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int open_mode; } ;
typedef TYPE_1__ wavnc_port_info ;
struct TYPE_5__ {int open_mode; int record_dev; int playback_dev; scalar_t__ audio_mode; } ;
typedef TYPE_2__ wavnc_info ;
struct TYPE_6__ {scalar_t__ portc; scalar_t__ devc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__** VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int VAR_6 ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int
FUNC_3(int VAR_7, int VAR_8)
{
 wavnc_info *VAR_9;
 wavnc_port_info *VAR_10;
 unsigned long VAR_11;

 if (VAR_7 < 0 || VAR_7 >= VAR_5)
  return -VAR_1;

 VAR_9 = (wavnc_info *) VAR_4[VAR_7]->devc;
 VAR_10 = (wavnc_port_info *) VAR_4[VAR_7]->portc;

 FUNC_0(&VAR_6, VAR_11);
 if (VAR_10->open_mode || (VAR_9->open_mode & VAR_8)) {
  FUNC_1(&VAR_6, VAR_11);
  return -VAR_0;
 }

 VAR_9->audio_mode = 0;
 VAR_9->open_mode |= VAR_8;
 VAR_10->open_mode = VAR_8;
 FUNC_2(VAR_7, 0);

 if (VAR_8 & VAR_2)
  VAR_9->record_dev = VAR_7;
 if (VAR_8 & VAR_3)
  VAR_9->playback_dev = VAR_7;
 FUNC_1(&VAR_6, VAR_11);

 return 0;
}
