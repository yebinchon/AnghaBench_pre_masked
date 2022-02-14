
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int audio_format; int channels; } ;
typedef TYPE_1__ ad1848_port_info ;
struct TYPE_7__ {int audio_mode; unsigned long xfer_count; int intr_active; scalar_t__ model; int lock; } ;
typedef TYPE_2__ ad1848_info ;
struct TYPE_8__ {int flags; scalar_t__ portc; scalar_t__ devc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int,unsigned char) ;
 TYPE_3__** VAR_6 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(int VAR_7, unsigned long VAR_8, int VAR_9, int VAR_10)
{
 unsigned long VAR_11, VAR_12;
 ad1848_info *VAR_13 = (ad1848_info *) VAR_6[VAR_7]->devc;
 ad1848_port_info *VAR_14 = (ad1848_port_info *) VAR_6[VAR_7]->portc;

 VAR_12 = VAR_9;
 if (VAR_14->audio_format == VAR_0)
 {
  VAR_12 /= 4;
 }
 else
 {
  if (VAR_14->audio_format & (VAR_2 | VAR_1))
   VAR_12 >>= 1;
 }
 if (VAR_14->channels > 1)
  VAR_12 >>= 1;
 VAR_12--;

 if ((VAR_13->audio_mode & VAR_5) && (VAR_6[VAR_7]->flags & VAR_3) &&
  VAR_10 &&
  VAR_12 == VAR_13->xfer_count)
 {
  VAR_13->audio_mode |= VAR_5;
  VAR_13->intr_active = 1;
  return;


 }
 FUNC_2(&VAR_13->lock,VAR_11);

 if (VAR_13->model == VAR_4)
 {
    FUNC_1(VAR_13, 15, (unsigned char) (VAR_12 & 0xff));
    FUNC_1(VAR_13, 14, (unsigned char) ((VAR_12 >> 8) & 0xff));
 }
 else
 {
    FUNC_1(VAR_13, 31, (unsigned char) (VAR_12 & 0xff));
    FUNC_1(VAR_13, 30, (unsigned char) ((VAR_12 >> 8) & 0xff));
 }

 FUNC_0(VAR_13);

 VAR_13->xfer_count = VAR_12;
 VAR_13->audio_mode |= VAR_5;
 VAR_13->intr_active = 1;
 FUNC_3(&VAR_13->lock,VAR_11);
}
