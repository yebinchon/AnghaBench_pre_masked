
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int audio_format; int channels; } ;
typedef TYPE_1__ wavnc_port_info ;
struct TYPE_6__ {int audio_mode; unsigned int xfer_count; } ;
typedef TYPE_2__ wavnc_info ;
struct TYPE_7__ {int flags; scalar_t__ devc; scalar_t__ portc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__** VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,unsigned long,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (TYPE_2__*,int ,unsigned int) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_4(int VAR_9, unsigned long VAR_10, int VAR_11, int VAR_12)
{
 wavnc_port_info *VAR_13 = (wavnc_port_info *) VAR_6[VAR_9]->portc;
 wavnc_info *VAR_14 = (wavnc_info *) VAR_6[VAR_9]->devc;
 unsigned long VAR_15;
 unsigned int VAR_16 = VAR_11;

 if (VAR_7 & VAR_2)
  FUNC_0("waveartist: start input, buf=0x%lx, count=0x%x...\n",
   VAR_10, VAR_16);

 if (VAR_13->audio_format & (VAR_1 | VAR_0))
  VAR_16 >>= 1;

 if (VAR_13->channels > 1)
  VAR_16 >>= 1;

 VAR_16 -= 1;

 if (VAR_14->audio_mode & VAR_4 &&
     VAR_6[VAR_9]->flags & VAR_3 &&
     VAR_12 &&
     VAR_16 == VAR_14->xfer_count) {
  VAR_14->audio_mode |= VAR_4;
  return;


 }

 FUNC_1(&VAR_8, VAR_15);




 FUNC_3(VAR_14, VAR_5, VAR_16);

 VAR_14->xfer_count = VAR_16;
 VAR_14->audio_mode |= VAR_4;

 FUNC_2(&VAR_8, VAR_15);
}
