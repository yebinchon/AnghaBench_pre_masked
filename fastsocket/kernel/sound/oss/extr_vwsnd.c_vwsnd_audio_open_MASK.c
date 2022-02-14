
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sw_channels; int sw_samplefmt; int sw_framerate; scalar_t__ frag_count; scalar_t__ byte_count; void* sw_subdivshift; void* sw_fragcount; void* sw_fragshift; scalar_t__ flags; void* swstate; } ;
struct TYPE_5__ {int sw_channels; int sw_samplefmt; int sw_framerate; scalar_t__ frag_count; scalar_t__ byte_count; void* sw_subdivshift; void* sw_fragcount; void* sw_fragshift; scalar_t__ flags; void* swstate; } ;
struct TYPE_7__ {int audio_minor; int open_mode; int io_mutex; TYPE_2__ wport; TYPE_1__ rport; int open_mutex; int open_wait; struct TYPE_7__* next_dev; } ;
typedef TYPE_3__ vwsnd_dev_t ;
struct inode {int dummy; } ;
struct file {int f_mode; int f_flags; TYPE_3__* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,struct inode*,struct file*) ;
 int FUNC_2 () ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 TYPE_3__* VAR_19 ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_20, struct file *VAR_21)
{
 vwsnd_dev_t *VAR_22;
 int VAR_23 = FUNC_3(VAR_20);
 int VAR_24;

 FUNC_1("(inode=0x%p, file=0x%p)\n", VAR_20, VAR_21);

 VAR_12;
 for (VAR_22 = VAR_19; VAR_22; VAR_22 = VAR_22->next_dev)
  if ((VAR_22->audio_minor & ~0x0F) == (VAR_23 & ~0x0F))
   break;

 if (VAR_22 == ((void*)0)) {
  VAR_3;
  return -VAR_8;
 }

 FUNC_5(&VAR_22->open_mutex);
 while (VAR_22->open_mode & VAR_21->f_mode) {
  FUNC_6(&VAR_22->open_mutex);
  if (VAR_21->f_flags & VAR_13) {
   VAR_3;
   return -VAR_7;
  }
  FUNC_4(&VAR_22->open_wait);
  if (FUNC_7(VAR_18)) {
   VAR_3;
   return -VAR_9;
  }
  FUNC_5(&VAR_22->open_mutex);
 }
 VAR_22->open_mode |= VAR_21->f_mode & (VAR_10 | VAR_11);
 FUNC_6(&VAR_22->open_mutex);



 VAR_24 = 0;
 if ((VAR_23 & 0xF) == VAR_15)
  VAR_24 = VAR_2;
 else if ((VAR_23 & 0xF) == VAR_14)
  VAR_24 = VAR_0;
 else if ((VAR_23 & 0xF) == VAR_16)
  VAR_24 = VAR_1;
 else
  FUNC_0(0);



 FUNC_5(&VAR_22->io_mutex);
 {
  if (VAR_21->f_mode & VAR_10) {
   VAR_22->rport.swstate = VAR_17;
   VAR_22->rport.flags = 0;
   VAR_22->rport.sw_channels = 1;
   VAR_22->rport.sw_samplefmt = VAR_24;
   VAR_22->rport.sw_framerate = 8000;
   VAR_22->rport.sw_fragshift = VAR_5;
   VAR_22->rport.sw_fragcount = VAR_4;
   VAR_22->rport.sw_subdivshift = VAR_6;
   VAR_22->rport.byte_count = 0;
   VAR_22->rport.frag_count = 0;
  }
  if (VAR_21->f_mode & VAR_11) {
   VAR_22->wport.swstate = VAR_17;
   VAR_22->wport.flags = 0;
   VAR_22->wport.sw_channels = 1;
   VAR_22->wport.sw_samplefmt = VAR_24;
   VAR_22->wport.sw_framerate = 8000;
   VAR_22->wport.sw_fragshift = VAR_5;
   VAR_22->wport.sw_fragcount = VAR_4;
   VAR_22->wport.sw_subdivshift = VAR_6;
   VAR_22->wport.byte_count = 0;
   VAR_22->wport.frag_count = 0;
  }
 }
 FUNC_6(&VAR_22->io_mutex);

 VAR_21->private_data = VAR_22;
 FUNC_2();
 return 0;
}
