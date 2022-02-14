
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int audio_format; int channels; } ;
typedef TYPE_1__ ad1848_port_info ;
struct TYPE_6__ {int audio_mode; unsigned long xfer_count; int intr_active; int lock; } ;
typedef TYPE_2__ ad1848_info ;
struct TYPE_7__ {int flags; scalar_t__ portc; scalar_t__ devc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int,unsigned char) ;
 TYPE_3__** VAR_5 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(int VAR_6, unsigned long VAR_7, int VAR_8, int VAR_9)
{
 unsigned long VAR_10, VAR_11;
 ad1848_info *VAR_12 = (ad1848_info *) VAR_5[VAR_6]->devc;
 ad1848_port_info *VAR_13 = (ad1848_port_info *) VAR_5[VAR_6]->portc;

 VAR_11 = VAR_8;

 if (VAR_13->audio_format == VAR_0)
 {
  VAR_11 /= 4;
 }
 else
 {
  if (VAR_13->audio_format & (VAR_2 | VAR_1))
   VAR_11 >>= 1;
 }
 if (VAR_13->channels > 1)
  VAR_11 >>= 1;
 VAR_11--;

 if ((VAR_12->audio_mode & VAR_4) && (VAR_5[VAR_6]->flags & VAR_3) &&
     VAR_9 &&
     VAR_11 == VAR_12->xfer_count)
 {
  VAR_12->audio_mode |= VAR_4;
  VAR_12->intr_active = 1;
  return;


 }
 FUNC_1(&VAR_12->lock,VAR_10);

 FUNC_0(VAR_12, 15, (unsigned char) (VAR_11 & 0xff));
 FUNC_0(VAR_12, 14, (unsigned char) ((VAR_11 >> 8) & 0xff));

 VAR_12->xfer_count = VAR_11;
 VAR_12->audio_mode |= VAR_4;
 VAR_12->intr_active = 1;
 FUNC_2(&VAR_12->lock,VAR_10);
}
