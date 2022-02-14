
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int sw_framerate; int sw_channels; int swstate; int sw_fragshift; int sw_subdivshift; int sw_fragcount; int sw_samplefmt; int MSC_offset; int frame_size; int byte_count; int swb_i_avail; int hwbuf_size; int flags; int lock; int chan; int hwstate; int frag_count; int swbuf; } ;
typedef TYPE_1__ vwsnd_port_t ;
typedef int vwsnd_port_hwstate_t ;
typedef int vwsnd_port_flags_t ;
struct TYPE_16__ {TYPE_1__ wport; TYPE_1__ rport; } ;
typedef TYPE_2__ vwsnd_dev_t ;
struct TYPE_17__ {int msc; } ;
typedef TYPE_3__ ustmsc_t ;
struct inode {int dummy; } ;
struct file {int f_mode; int f_lock; int f_flags; scalar_t__ private_data; } ;
struct count_info {int fragments; int fragstotal; int fragsize; int bytes; int ptr; int blocks; } ;
struct audio_buf_info {int fragments; int fragstotal; int fragsize; int bytes; int ptr; int blocks; } ;




 int VAR_0 ;



 int FUNC_0 (int) ;
 int FUNC_1 (char*,struct inode*,struct file*,unsigned int,unsigned long) ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int) ;
 int VAR_12 ;
 int VAR_13 ;

 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_8 (void*,struct count_info*,int) ;
 int FUNC_9 (int,int*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,TYPE_3__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int ,int ) ;
 int FUNC_15 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_16 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (int,int*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,unsigned long) ;
 int FUNC_23 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_24(struct inode *VAR_20,
    struct file *VAR_21,
    unsigned int VAR_22,
    unsigned long VAR_23)
{
 vwsnd_dev_t *VAR_24 = (vwsnd_dev_t *) VAR_21->private_data;
 vwsnd_port_t *VAR_25 = (VAR_21->f_mode & VAR_7) ?
  &VAR_24->rport : ((void*)0);
 vwsnd_port_t *VAR_26 = (VAR_21->f_mode & VAR_8) ?
  &VAR_24->wport : ((void*)0);
 vwsnd_port_t *VAR_27 = VAR_25 ? VAR_25 : VAR_26;
 struct audio_buf_info VAR_28;
 struct count_info VAR_29;
 unsigned long VAR_30;
 int VAR_31;


 FUNC_1("(inode=0x%p, file=0x%p, cmd=0x%x, arg=0x%lx)\n",
       VAR_20, VAR_21, VAR_22, VAR_23);
 switch (VAR_22) {
 case 151:
  FUNC_4("OSS_GETVERSION\n");
  VAR_31 = VAR_17;
  return FUNC_18(VAR_31, (int *) VAR_23);

 case 148:
  FUNC_4("SNDCTL_DSP_GETCAPS\n");
  VAR_31 = VAR_2 | VAR_3 | VAR_4;
  return FUNC_18(VAR_31, (int *) VAR_23);

 case 147:
  FUNC_4("SNDCTL_DSP_GETFMTS\n");
  VAR_31 = (154 | 155 | 156 |
   152 | 153);
  return FUNC_18(VAR_31, (int *) VAR_23);
  break;

 case 128:
  FUNC_4("SOUND_PCM_READ_RATE\n");
  VAR_31 = VAR_27->sw_framerate;
  return FUNC_18(VAR_31, (int *) VAR_23);

 case 129:
  FUNC_4("SOUND_PCM_READ_CHANNELS\n");
  VAR_31 = VAR_27->sw_channels;
  return FUNC_18(VAR_31, (int *) VAR_23);

 case 133:
  if (FUNC_9(VAR_31, (int *) VAR_23))
   return -VAR_5;
  FUNC_4("SNDCTL_DSP_SPEED %d\n", VAR_31);
  if (VAR_31) {
   if (VAR_27->swstate != VAR_18) {
    FUNC_4("SNDCTL_DSP_SPEED failed: swstate = %d\n",
         VAR_27->swstate);
    return -VAR_6;
   }
   if (VAR_31 < VAR_13)
    VAR_31 = VAR_13;
   if (VAR_31 > VAR_11)
    VAR_31 = VAR_11;
   if (VAR_25)
    VAR_25->sw_framerate = VAR_31;
   if (VAR_26)
    VAR_26->sw_framerate = VAR_31;
  } else
   VAR_31 = VAR_27->sw_framerate;
  return FUNC_18(VAR_31, (int *) VAR_23);

 case 132:
  if (FUNC_9(VAR_31, (int *) VAR_23))
   return -VAR_5;
  FUNC_4("SNDCTL_DSP_STEREO %d\n", VAR_31);
  if (VAR_31 != 0 && VAR_31 != 1)
   return -VAR_6;
  if (VAR_27->swstate != VAR_18)
   return -VAR_6;
  if (VAR_25)
   VAR_25->sw_channels = VAR_31 + 1;
  if (VAR_26)
   VAR_26->sw_channels = VAR_31 + 1;
  return FUNC_18(VAR_31, (int *) VAR_23);

 case 150:
  if (FUNC_9(VAR_31, (int *) VAR_23))
   return -VAR_5;
  FUNC_4("SNDCTL_DSP_CHANNELS %d\n", VAR_31);
  if (VAR_31 != 1 && VAR_31 != 2)
   return -VAR_6;
  if (VAR_27->swstate != VAR_18)
   return -VAR_6;
  if (VAR_25)
   VAR_25->sw_channels = VAR_31;
  if (VAR_26)
   VAR_26->sw_channels = VAR_31;
  return FUNC_18(VAR_31, (int *) VAR_23);

 case 149:
  VAR_31 = FUNC_15(VAR_24, VAR_25, VAR_26);
  if (VAR_31 < 0) {
   FUNC_4("SNDCTL_DSP_GETBLKSIZE failed, errno %d\n", VAR_31);
   return VAR_31;
  }
  VAR_31 = 1 << VAR_27->sw_fragshift;
  FUNC_4("SNDCTL_DSP_GETBLKSIZE returning %d\n", VAR_31);
  return FUNC_18(VAR_31, (int *) VAR_23);

 case 135:
  if (FUNC_9(VAR_31, (int *) VAR_23))
   return -VAR_5;
  FUNC_4("SNDCTL_DSP_SETFRAGMENT %d:%d\n",
       VAR_31 >> 16, VAR_31 & 0xFFFF);
  if (VAR_27->swstate != VAR_18)
   return -VAR_6;
  {
   int VAR_32 = VAR_31 & 0xFFFF;
   int VAR_33 = VAR_27->sw_subdivshift;
   int VAR_34 = VAR_32 - VAR_33;
   int VAR_35 = (VAR_31 >> 16) & 0xFFFF;
   int VAR_36;
   if (VAR_34 < VAR_12)
    VAR_34 = VAR_12;
   if (VAR_34 > VAR_10)
    VAR_34 = VAR_10;
   VAR_32 = VAR_34 + VAR_27->sw_subdivshift;
   VAR_36 = 1 << VAR_34;
   if (VAR_35 < FUNC_7(VAR_36))
    VAR_35 = FUNC_7(VAR_36);
   if (VAR_35 > FUNC_6(VAR_36))
    VAR_35 = FUNC_6(VAR_36);
   FUNC_3("sw_fragshift = %d\n", VAR_32);
   FUNC_3("rport = 0x%p, wport = 0x%p\n", VAR_25, VAR_26);
   if (VAR_25) {
    VAR_25->sw_fragshift = VAR_32;
    VAR_25->sw_fragcount = VAR_35;
   }
   if (VAR_26) {
    VAR_26->sw_fragshift = VAR_32;
    VAR_26->sw_fragcount = VAR_35;
   }
   VAR_31 = VAR_35 << 16 | VAR_32;
  }
  FUNC_4("SNDCTL_DSP_SETFRAGMENT returns %d:%d\n",
        VAR_31 >> 16, VAR_31 & 0xFFFF);
  return FUNC_18(VAR_31, (int *) VAR_23);

 case 131:
                if (FUNC_9(VAR_31, (int *) VAR_23))
   return -VAR_5;
  FUNC_4("SNDCTL_DSP_SUBDIVIDE %d\n", VAR_31);
  if (VAR_27->swstate != VAR_18)
   return -VAR_6;
  {
   int VAR_37;
   int VAR_38, VAR_39, VAR_40;
   switch (VAR_31) {
   case 1: VAR_37 = 0; break;
   case 2: VAR_37 = 1; break;
   case 4: VAR_37 = 2; break;
   default: return -VAR_6;
   }
   VAR_38 = VAR_27->sw_fragshift - VAR_37;
   if (VAR_38 < VAR_12 ||
       VAR_38 > VAR_10)
    return -VAR_6;
   VAR_39 = 1 << VAR_38;
   VAR_40 = VAR_27->sw_fragcount >> VAR_37;
   if (VAR_40 < FUNC_7(VAR_39) ||
       VAR_40 > FUNC_6(VAR_39))
    return -VAR_6;
   if (VAR_25)
    VAR_25->sw_subdivshift = VAR_37;
   if (VAR_26)
    VAR_26->sw_subdivshift = VAR_37;
  }
  return 0;

 case 136:
  if (FUNC_9(VAR_31, (int *) VAR_23))
   return -VAR_5;
  FUNC_4("SNDCTL_DSP_SETFMT %d\n", VAR_31);
  if (VAR_31 != VAR_0) {
   if (VAR_27->swstate != VAR_18) {
    FUNC_2("SETFMT failed, swstate = %d\n",
         VAR_27->swstate);
    return -VAR_6;
   }
   switch (VAR_31) {
   case 155:
   case 156:
   case 152:
   case 153:
   case 154:
    if (VAR_25)
     VAR_25->sw_samplefmt = VAR_31;
    if (VAR_26)
     VAR_26->sw_samplefmt = VAR_31;
    break;
   default:
    return -VAR_6;
   }
  }
  VAR_31 = VAR_27->sw_samplefmt;
  return FUNC_18(VAR_31, (int *) VAR_23);

 case 142:
  FUNC_5("SNDCTL_DSP_GETOSPACE\n");
  if (!VAR_26)
   return -VAR_6;
  VAR_31 = FUNC_15(VAR_24, VAR_25, VAR_26);
  if (VAR_31 < 0)
   return VAR_31;
  VAR_31 = FUNC_23(VAR_26, 0);
  VAR_28.fragments = VAR_31 >> VAR_26->sw_fragshift;
  VAR_28.fragstotal = VAR_26->sw_fragcount;
  VAR_28.fragsize = 1 << VAR_26->sw_fragshift;
  VAR_28.bytes = VAR_31;
  FUNC_5("SNDCTL_DSP_GETOSPACE returns { %d %d %d %d }\n",
       VAR_28.fragments, VAR_28.fragstotal,
       VAR_28.fragsize, VAR_28.bytes);
  if (FUNC_8((void *) VAR_23, &VAR_28, sizeof VAR_28))
   return -VAR_5;
  return 0;

 case 145:
  FUNC_4("SNDCTL_DSP_GETISPACE\n");
  if (!VAR_25)
   return -VAR_6;
  VAR_31 = FUNC_15(VAR_24, VAR_25, VAR_26);
  if (VAR_31 < 0)
   return VAR_31;
  VAR_31 = FUNC_23(VAR_25, 0);
  VAR_28.fragments = VAR_31 >> VAR_25->sw_fragshift;
  VAR_28.fragstotal = VAR_25->sw_fragcount;
  VAR_28.fragsize = 1 << VAR_25->sw_fragshift;
  VAR_28.bytes = VAR_31;
  FUNC_4("SNDCTL_DSP_GETISPACE returns { %d %d %d %d }\n",
       VAR_28.fragments, VAR_28.fragstotal,
       VAR_28.fragsize, VAR_28.bytes);
  if (FUNC_8((void *) VAR_23, &VAR_28, sizeof VAR_28))
   return -VAR_5;
  return 0;

 case 140:
  FUNC_4("SNDCTL_DSP_NONBLOCK\n");
  FUNC_19(&VAR_21->f_lock);
  VAR_21->f_flags |= VAR_14;
  FUNC_21(&VAR_21->f_lock);
  return 0;

 case 137:
  FUNC_4("SNDCTL_DSP_RESET\n");





  if (VAR_26 && VAR_26->swbuf) {
   VAR_26->swstate = VAR_18;
   FUNC_14(VAR_24, 0, 0);
   FUNC_17(VAR_24);
  }
  FUNC_16(VAR_24, VAR_25, VAR_26);
  return 0;

 case 130:
  FUNC_4("SNDCTL_DSP_SYNC\n");
  if (VAR_26) {
   FUNC_13(VAR_24);
   FUNC_17(VAR_24);
  }
  FUNC_16(VAR_24, VAR_25, VAR_26);
  return 0;

 case 139:
  FUNC_4("SNDCTL_DSP_POST\n");
  if (!VAR_26)
   return -VAR_6;
  FUNC_13(VAR_24);
  return 0;

 case 146:
  FUNC_4("SNDCTL_DSP_GETIPTR\n");
  if (!VAR_25)
   return -VAR_6;
  FUNC_20(&VAR_25->lock, VAR_30);
  {
   ustmsc_t VAR_41;
   if (VAR_25->hwstate == VAR_9) {
    FUNC_0(VAR_25->swstate == VAR_19);
    FUNC_11(&VAR_25->chan, &VAR_41);
    VAR_29.bytes = VAR_41.msc - VAR_25->MSC_offset;
    VAR_29.bytes *= VAR_25->frame_size;
   } else {
    VAR_29.bytes = VAR_25->byte_count;
   }
   VAR_29.blocks = VAR_25->frag_count;
   VAR_29.ptr = 0;
   VAR_25->frag_count = 0;
  }
  FUNC_22(&VAR_25->lock, VAR_30);
  if (FUNC_8((void *) VAR_23, &VAR_29, sizeof VAR_29))
   return -VAR_5;
  return 0;

 case 143:
  FUNC_4("SNDCTL_DSP_GETOPTR\n");
  if (!VAR_26)
   return -VAR_6;
  FUNC_20(&VAR_26->lock, VAR_30);
  {
   ustmsc_t VAR_42;
   if (VAR_26->hwstate == VAR_9) {
    FUNC_0(VAR_26->swstate == VAR_19);
    FUNC_11(&VAR_26->chan, &VAR_42);
    VAR_29.bytes = VAR_42.msc - VAR_26->MSC_offset;
    VAR_29.bytes *= VAR_26->frame_size;
   } else {
    VAR_29.bytes = VAR_26->byte_count;
   }
   VAR_29.blocks = VAR_26->frag_count;
   VAR_29.ptr = 0;
   VAR_26->frag_count = 0;
  }
  FUNC_22(&VAR_26->lock, VAR_30);
  if (FUNC_8((void *) VAR_23, &VAR_29, sizeof VAR_29))
   return -VAR_5;
  return 0;

 case 144:
  FUNC_4("SNDCTL_DSP_GETODELAY\n");
  if (!VAR_26)
   return -VAR_6;
  FUNC_20(&VAR_26->lock, VAR_30);
  {
   int VAR_43 = VAR_26->frame_size;
   VAR_31 = VAR_26->swb_i_avail / VAR_43;
   if (VAR_26->hwstate == VAR_9) {
    int VAR_44, VAR_45, VAR_46, VAR_47, VAR_48;
    int VAR_49;
    ustmsc_t VAR_50;

    VAR_48 = VAR_26->hwbuf_size;
    VAR_44 = FUNC_12(&VAR_26->chan);
    FUNC_11(&VAR_26->chan, &VAR_50);
    VAR_46 = VAR_50.msc - VAR_26->MSC_offset;
    VAR_49 = VAR_46 * VAR_43;
    VAR_45 = VAR_49 % VAR_48;
    VAR_47 = (VAR_44 - VAR_45 + VAR_48) % VAR_48;
    VAR_31 += VAR_47 / VAR_43;
   }
  }
  FUNC_22(&VAR_26->lock, VAR_30);
  return FUNC_18(VAR_31, (int *) VAR_23);

 case 138:
  FUNC_4("SNDCTL_DSP_PROFILE\n");
  break;

 case 141:
  FUNC_4("SNDCTL_DSP_GETTRIGGER\n");
  VAR_31 = 0;
  if (VAR_25) {
   FUNC_20(&VAR_25->lock, VAR_30);
   {
    if (!(VAR_25->flags & VAR_1))
     VAR_31 |= VAR_15;
   }
   FUNC_22(&VAR_25->lock, VAR_30);
  }
  if (VAR_26) {
   FUNC_20(&VAR_26->lock, VAR_30);
   {
    if (!(VAR_26->flags & VAR_1))
     VAR_31 |= VAR_16;
   }
   FUNC_22(&VAR_26->lock, VAR_30);
  }
  return FUNC_18(VAR_31, (int *) VAR_23);

 case 134:
  if (FUNC_9(VAR_31, (int *) VAR_23))
   return -VAR_5;
  FUNC_4("SNDCTL_DSP_SETTRIGGER %d\n", VAR_31);






  if (((VAR_25 && !(VAR_31 & VAR_15)) ||
       (VAR_26 && !(VAR_31 & VAR_16))) &&
      VAR_27->swstate != VAR_18)
   return -VAR_6;

  if (VAR_25) {
   vwsnd_port_hwstate_t VAR_51;
   FUNC_20(&VAR_25->lock, VAR_30);
   {
    VAR_51 = VAR_25->hwstate;
    if (VAR_31 & VAR_15)
     VAR_25->flags &= ~VAR_1;
    else
     VAR_25->flags |= VAR_1;
   }
   FUNC_22(&VAR_25->lock, VAR_30);
   if (VAR_51 != VAR_9 && VAR_31 & VAR_15) {

    if (VAR_25->swstate == VAR_18)
     FUNC_15(VAR_24, VAR_25, VAR_26);
    else
     FUNC_10(&VAR_25->chan);
   }
  }
  if (VAR_26) {
   vwsnd_port_flags_t VAR_52;
   FUNC_20(&VAR_26->lock, VAR_30);
   {
    VAR_52 = VAR_26->flags;
    if (VAR_31 & VAR_16)
     VAR_26->flags &= ~VAR_1;
    else
     VAR_26->flags |= VAR_1;
   }
   FUNC_22(&VAR_26->lock, VAR_30);
   if (VAR_52 & VAR_1 && VAR_31 & VAR_16) {
    if (VAR_26->swstate == VAR_19)
     FUNC_14(VAR_24, 0, 0);
   }
  }
  return 0;

 default:
  FUNC_2("unknown ioctl 0x%x\n", VAR_22);
  return -VAR_6;
 }
 FUNC_2("unimplemented ioctl 0x%x\n", VAR_22);
 return -VAR_6;
}
