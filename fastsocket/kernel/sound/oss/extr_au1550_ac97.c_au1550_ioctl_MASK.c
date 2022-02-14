
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct inode {int dummy; } ;
struct file {int f_mode; int f_flags; int f_lock; scalar_t__ private_data; } ;
struct TYPE_9__ {int mapped; int count; int total_bytes; int sample_rate; int num_channels; int sample_size; int fragsize; int cnt_factor; int fragshift; int ossfragshift; int ossmaxfrags; int subdivision; int dma_fragsize; int rawbuf; int nextOut; int stopped; int nextIn; int numfrag; int dmasize; } ;
struct au1550_state {int open_mode; int codec_ext_caps; int codec; TYPE_4__ dma_dac; TYPE_4__ dma_adc; int lock; } ;
struct TYPE_7__ {int fragsize; int bytes; int fragments; int blocks; void* ptr; int fragstotal; } ;
typedef TYPE_1__ count_info ;
typedef int cinfo ;
typedef TYPE_1__ audio_buf_info ;
typedef int abinfo ;
struct TYPE_8__ {unsigned int cmd; unsigned int str; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (void*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct au1550_state*,int) ;
 int FUNC_4 (int,int*) ;
 TYPE_3__* VAR_21 ;
 int FUNC_5 (int ,unsigned int,unsigned long) ;
 int FUNC_6 (char*,unsigned int,unsigned long) ;
 int FUNC_7 (struct au1550_state*) ;
 int FUNC_8 (struct au1550_state*) ;
 int FUNC_9 (int,int*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct au1550_state*,int) ;
 int FUNC_12 (struct au1550_state*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (struct au1550_state*) ;
 int FUNC_18 (struct au1550_state*) ;
 int FUNC_19 (struct au1550_state*) ;
 int FUNC_20 (struct au1550_state*) ;
 int FUNC_21 () ;
 void* FUNC_22 (int ) ;
 int FUNC_23 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_24(struct inode *VAR_22, struct file *VAR_23, unsigned int VAR_24,
       unsigned long VAR_25)
{
 struct au1550_state *VAR_26 = (struct au1550_state *)VAR_23->private_data;
 unsigned long VAR_27;
 audio_buf_info VAR_28;
 count_info VAR_29;
 int VAR_30;
 int VAR_31, VAR_32, VAR_33, VAR_34;

 VAR_32 = ((VAR_23->f_mode & VAR_16) && VAR_26->dma_dac.mapped) ||
  ((VAR_23->f_mode & VAR_15) && VAR_26->dma_adc.mapped);
 switch (VAR_24) {
 case 155:
  return FUNC_9(VAR_20, (int *) VAR_25);

 case 133:
  if (VAR_23->f_mode & VAR_16)
   return FUNC_3(VAR_26, VAR_23->f_flags & VAR_17);
  return 0;

 case 141:
  return 0;

 case 152:
  return FUNC_9(VAR_9 | VAR_11 |
    VAR_12 | VAR_10, (int *)VAR_25);

 case 142:
  if (VAR_23->f_mode & VAR_16) {
   FUNC_20(VAR_26);
   FUNC_21();
   VAR_26->dma_dac.count = VAR_26->dma_dac.total_bytes = 0;
   VAR_26->dma_dac.nextIn = VAR_26->dma_dac.nextOut =
    VAR_26->dma_dac.rawbuf;
  }
  if (VAR_23->f_mode & VAR_15) {
   FUNC_19(VAR_26);
   FUNC_21();
   VAR_26->dma_adc.count = VAR_26->dma_adc.total_bytes = 0;
   VAR_26->dma_adc.nextIn = VAR_26->dma_adc.nextOut =
    VAR_26->dma_adc.rawbuf;
  }
  return 0;

 case 136:
  if (FUNC_4(VAR_31, (int *) VAR_25))
   return -VAR_13;
  if (VAR_31 >= 0) {
   if (VAR_23->f_mode & VAR_15) {
    FUNC_19(VAR_26);
    FUNC_11(VAR_26, VAR_31);
   }
   if (VAR_23->f_mode & VAR_16) {
    FUNC_20(VAR_26);
    FUNC_12(VAR_26, VAR_31);
   }
   if (VAR_26->open_mode & VAR_15)
    if ((VAR_33 = FUNC_7(VAR_26)))
     return VAR_33;
   if (VAR_26->open_mode & VAR_16)
    if ((VAR_33 = FUNC_8(VAR_26)))
     return VAR_33;
  }
  return FUNC_9((VAR_23->f_mode & VAR_15) ?
    VAR_26->dma_adc.sample_rate :
    VAR_26->dma_dac.sample_rate,
    (int *)VAR_25);

 case 135:
  if (FUNC_4(VAR_31, (int *) VAR_25))
   return -VAR_13;
  if (VAR_23->f_mode & VAR_15) {
   FUNC_19(VAR_26);
   VAR_26->dma_adc.num_channels = VAR_31 ? 2 : 1;
   if ((VAR_33 = FUNC_7(VAR_26)))
    return VAR_33;
  }
  if (VAR_23->f_mode & VAR_16) {
   FUNC_20(VAR_26);
   VAR_26->dma_dac.num_channels = VAR_31 ? 2 : 1;
   if (VAR_26->codec_ext_caps & VAR_5) {


    u16 VAR_35 = FUNC_10(VAR_26->codec,
             VAR_0);
    FUNC_23(VAR_26->codec, VAR_0,
     VAR_35 | (VAR_2 |
          VAR_3 |
          VAR_4));
   }
   if ((VAR_33 = FUNC_8(VAR_26)))
    return VAR_33;
  }
  return 0;

 case 154:
  if (FUNC_4(VAR_31, (int *) VAR_25))
   return -VAR_13;
  if (VAR_31 != 0) {
   if (VAR_23->f_mode & VAR_15) {
    if (VAR_31 < 0 || VAR_31 > 2)
     return -VAR_14;
    FUNC_19(VAR_26);
    VAR_26->dma_adc.num_channels = VAR_31;
    if ((VAR_33 = FUNC_7(VAR_26)))
     return VAR_33;
   }
   if (VAR_23->f_mode & VAR_16) {
    switch (VAR_31) {
    case 1:
    case 2:
     break;
    case 3:
    case 5:
     return -VAR_14;
    case 4:
     if (!(VAR_26->codec_ext_caps &
           VAR_1))
      return -VAR_14;
     break;
    case 6:
     if ((VAR_26->codec_ext_caps &
          VAR_5) != VAR_5)
      return -VAR_14;
     break;
    default:
     return -VAR_14;
    }

    FUNC_20(VAR_26);
    if (VAR_31 <= 2 &&
        (VAR_26->codec_ext_caps & VAR_5)) {



     u16 VAR_36 =
      FUNC_10(VAR_26->codec,
       VAR_0);
     FUNC_23(VAR_26->codec,
      VAR_0,
      VAR_36 | (VAR_2 |
           VAR_3 |
           VAR_4));
    } else if (VAR_31 >= 4) {



     u16 VAR_37 =
      FUNC_10(VAR_26->codec,
       VAR_0);
     VAR_37 &= ~VAR_3;
     if (VAR_31 == 6)
      VAR_37 &=
       ~(VAR_2 |
         VAR_4);
     FUNC_23(VAR_26->codec,
      VAR_0,
      VAR_37);
    }

    VAR_26->dma_dac.num_channels = VAR_31;
    if ((VAR_33 = FUNC_8(VAR_26)))
     return VAR_33;
   }
  }
  return FUNC_9(VAR_31, (int *) VAR_25);

 case 151:
  return FUNC_9(VAR_7 | VAR_8, (int *) VAR_25);

 case 140:
  if (FUNC_4(VAR_31, (int *) VAR_25))
   return -VAR_13;
  if (VAR_31 != VAR_6) {
   if (VAR_23->f_mode & VAR_15) {
    FUNC_19(VAR_26);
    if (VAR_31 == VAR_7)
     VAR_26->dma_adc.sample_size = 16;
    else {
     VAR_31 = VAR_8;
     VAR_26->dma_adc.sample_size = 8;
    }
    if ((VAR_33 = FUNC_7(VAR_26)))
     return VAR_33;
   }
   if (VAR_23->f_mode & VAR_16) {
    FUNC_20(VAR_26);
    if (VAR_31 == VAR_7)
     VAR_26->dma_dac.sample_size = 16;
    else {
     VAR_31 = VAR_8;
     VAR_26->dma_dac.sample_size = 8;
    }
    if ((VAR_33 = FUNC_8(VAR_26)))
     return VAR_33;
   }
  } else {
   if (VAR_23->f_mode & VAR_15)
    VAR_31 = (VAR_26->dma_adc.sample_size == 16) ?
     VAR_7 : VAR_8;
   else
    VAR_31 = (VAR_26->dma_dac.sample_size == 16) ?
     VAR_7 : VAR_8;
  }
  return FUNC_9(VAR_31, (int *) VAR_25);

 case 143:
  return 0;

 case 145:
  VAR_31 = 0;
  FUNC_14(&VAR_26->lock, VAR_27);
  if (VAR_23->f_mode & VAR_15 && !VAR_26->dma_adc.stopped)
   VAR_31 |= VAR_18;
  if (VAR_23->f_mode & VAR_16 && !VAR_26->dma_dac.stopped)
   VAR_31 |= VAR_19;
  FUNC_16(&VAR_26->lock, VAR_27);
  return FUNC_9(VAR_31, (int *) VAR_25);

 case 137:
  if (FUNC_4(VAR_31, (int *) VAR_25))
   return -VAR_13;
  if (VAR_23->f_mode & VAR_15) {
   if (VAR_31 & VAR_18) {
    FUNC_14(&VAR_26->lock, VAR_27);
    FUNC_17(VAR_26);
    FUNC_16(&VAR_26->lock, VAR_27);
   } else
    FUNC_19(VAR_26);
  }
  if (VAR_23->f_mode & VAR_16) {
   if (VAR_31 & VAR_19) {
    FUNC_14(&VAR_26->lock, VAR_27);
    FUNC_18(VAR_26);
    FUNC_16(&VAR_26->lock, VAR_27);
   } else
    FUNC_20(VAR_26);
  }
  return 0;

 case 146:
  if (!(VAR_23->f_mode & VAR_16))
   return -VAR_14;
  VAR_28.fragsize = VAR_26->dma_dac.fragsize;
  FUNC_14(&VAR_26->lock, VAR_27);
  VAR_30 = VAR_26->dma_dac.count;
  VAR_30 -= FUNC_2(&VAR_26->dma_dac);
  FUNC_16(&VAR_26->lock, VAR_27);
  if (VAR_30 < 0)
   VAR_30 = 0;
  VAR_28.bytes = (VAR_26->dma_dac.dmasize - VAR_30) /
   VAR_26->dma_dac.cnt_factor;
  VAR_28.fragstotal = VAR_26->dma_dac.numfrag;
  VAR_28.fragments = VAR_28.bytes >> VAR_26->dma_dac.fragshift;
  FUNC_6("ioctl SNDCTL_DSP_GETOSPACE: bytes=%d, fragments=%d\n", VAR_28.bytes, VAR_28.fragments);
  return FUNC_1((void *) VAR_25, &VAR_28,
        sizeof(VAR_28)) ? -VAR_13 : 0;

 case 149:
  if (!(VAR_23->f_mode & VAR_15))
   return -VAR_14;
  VAR_28.fragsize = VAR_26->dma_adc.fragsize;
  FUNC_14(&VAR_26->lock, VAR_27);
  VAR_30 = VAR_26->dma_adc.count;
  VAR_30 += FUNC_2(&VAR_26->dma_adc);
  FUNC_16(&VAR_26->lock, VAR_27);
  if (VAR_30 < 0)
   VAR_30 = 0;
  VAR_28.bytes = VAR_30 / VAR_26->dma_adc.cnt_factor;
  VAR_28.fragstotal = VAR_26->dma_adc.numfrag;
  VAR_28.fragments = VAR_28.bytes >> VAR_26->dma_adc.fragshift;
  return FUNC_1((void *) VAR_25, &VAR_28,
        sizeof(VAR_28)) ? -VAR_13 : 0;

 case 144:
  FUNC_13(&VAR_23->f_lock);
  VAR_23->f_flags |= VAR_17;
  FUNC_15(&VAR_23->f_lock);
  return 0;

 case 148:
  if (!(VAR_23->f_mode & VAR_16))
   return -VAR_14;
  FUNC_14(&VAR_26->lock, VAR_27);
  VAR_30 = VAR_26->dma_dac.count;
  VAR_30 -= FUNC_2(&VAR_26->dma_dac);
  FUNC_16(&VAR_26->lock, VAR_27);
  if (VAR_30 < 0)
   VAR_30 = 0;
  VAR_30 /= VAR_26->dma_dac.cnt_factor;
  return FUNC_9(VAR_30, (int *) VAR_25);

 case 150:
  if (!(VAR_23->f_mode & VAR_15))
   return -VAR_14;
  FUNC_14(&VAR_26->lock, VAR_27);
  VAR_29.bytes = VAR_26->dma_adc.total_bytes;
  VAR_30 = VAR_26->dma_adc.count;
  if (!VAR_26->dma_adc.stopped) {
   VAR_34 = FUNC_2(&VAR_26->dma_adc);
   VAR_30 += VAR_34;
   VAR_29.bytes += VAR_34;
   VAR_29.ptr = FUNC_22(VAR_26->dma_adc.nextIn) + VAR_34 -
    FUNC_22(VAR_26->dma_adc.rawbuf);
  } else
   VAR_29.ptr = FUNC_22(VAR_26->dma_adc.nextIn) -
    FUNC_22(VAR_26->dma_adc.rawbuf);
  if (VAR_26->dma_adc.mapped)
   VAR_26->dma_adc.count &= (VAR_26->dma_adc.dma_fragsize-1);
  FUNC_16(&VAR_26->lock, VAR_27);
  if (VAR_30 < 0)
   VAR_30 = 0;
  VAR_29.blocks = VAR_30 >> VAR_26->dma_adc.fragshift;
  return FUNC_1((void *) VAR_25, &VAR_29, sizeof(VAR_29));

 case 147:
  if (!(VAR_23->f_mode & VAR_15))
   return -VAR_14;
  FUNC_14(&VAR_26->lock, VAR_27);
  VAR_29.bytes = VAR_26->dma_dac.total_bytes;
  VAR_30 = VAR_26->dma_dac.count;
  if (!VAR_26->dma_dac.stopped) {
   VAR_34 = FUNC_2(&VAR_26->dma_dac);
   VAR_30 -= VAR_34;
   VAR_29.bytes += VAR_34;
   VAR_29.ptr = FUNC_22(VAR_26->dma_dac.nextOut) + VAR_34 -
    FUNC_22(VAR_26->dma_dac.rawbuf);
  } else
   VAR_29.ptr = FUNC_22(VAR_26->dma_dac.nextOut) -
    FUNC_22(VAR_26->dma_dac.rawbuf);
  if (VAR_26->dma_dac.mapped)
   VAR_26->dma_dac.count &= (VAR_26->dma_dac.dma_fragsize-1);
  FUNC_16(&VAR_26->lock, VAR_27);
  if (VAR_30 < 0)
   VAR_30 = 0;
  VAR_29.blocks = VAR_30 >> VAR_26->dma_dac.fragshift;
  return FUNC_1((void *) VAR_25, &VAR_29, sizeof(VAR_29));

 case 153:
  if (VAR_23->f_mode & VAR_16)
   return FUNC_9(VAR_26->dma_dac.fragsize, (int *) VAR_25);
  else
   return FUNC_9(VAR_26->dma_adc.fragsize, (int *) VAR_25);

 case 139:
  if (FUNC_4(VAR_31, (int *) VAR_25))
   return -VAR_13;
  if (VAR_23->f_mode & VAR_15) {
   FUNC_19(VAR_26);
   VAR_26->dma_adc.ossfragshift = VAR_31 & 0xffff;
   VAR_26->dma_adc.ossmaxfrags = (VAR_31 >> 16) & 0xffff;
   if (VAR_26->dma_adc.ossfragshift < 4)
    VAR_26->dma_adc.ossfragshift = 4;
   if (VAR_26->dma_adc.ossfragshift > 15)
    VAR_26->dma_adc.ossfragshift = 15;
   if (VAR_26->dma_adc.ossmaxfrags < 4)
    VAR_26->dma_adc.ossmaxfrags = 4;
   if ((VAR_33 = FUNC_7(VAR_26)))
    return VAR_33;
  }
  if (VAR_23->f_mode & VAR_16) {
   FUNC_20(VAR_26);
   VAR_26->dma_dac.ossfragshift = VAR_31 & 0xffff;
   VAR_26->dma_dac.ossmaxfrags = (VAR_31 >> 16) & 0xffff;
   if (VAR_26->dma_dac.ossfragshift < 4)
    VAR_26->dma_dac.ossfragshift = 4;
   if (VAR_26->dma_dac.ossfragshift > 15)
    VAR_26->dma_dac.ossfragshift = 15;
   if (VAR_26->dma_dac.ossmaxfrags < 4)
    VAR_26->dma_dac.ossmaxfrags = 4;
   if ((VAR_33 = FUNC_8(VAR_26)))
    return VAR_33;
  }
  return 0;

 case 134:
  if ((VAR_23->f_mode & VAR_15 && VAR_26->dma_adc.subdivision) ||
      (VAR_23->f_mode & VAR_16 && VAR_26->dma_dac.subdivision))
   return -VAR_14;
  if (FUNC_4(VAR_31, (int *) VAR_25))
   return -VAR_13;
  if (VAR_31 != 1 && VAR_31 != 2 && VAR_31 != 4)
   return -VAR_14;
  if (VAR_23->f_mode & VAR_15) {
   FUNC_19(VAR_26);
   VAR_26->dma_adc.subdivision = VAR_31;
   if ((VAR_33 = FUNC_7(VAR_26)))
    return VAR_33;
  }
  if (VAR_23->f_mode & VAR_16) {
   FUNC_20(VAR_26);
   VAR_26->dma_dac.subdivision = VAR_31;
   if ((VAR_33 = FUNC_8(VAR_26)))
    return VAR_33;
  }
  return 0;

 case 129:
  return FUNC_9((VAR_23->f_mode & VAR_15) ?
    VAR_26->dma_adc.sample_rate :
    VAR_26->dma_dac.sample_rate,
    (int *)VAR_25);

 case 131:
  if (VAR_23->f_mode & VAR_15)
   return FUNC_9(VAR_26->dma_adc.num_channels, (int *)VAR_25);
  else
   return FUNC_9(VAR_26->dma_dac.num_channels, (int *)VAR_25);

 case 132:
  if (VAR_23->f_mode & VAR_15)
   return FUNC_9(VAR_26->dma_adc.sample_size, (int *)VAR_25);
  else
   return FUNC_9(VAR_26->dma_dac.sample_size, (int *)VAR_25);

 case 128:
 case 138:
 case 130:
  return -VAR_14;
 }

 return FUNC_5(VAR_26->codec, VAR_24, VAR_25);
}
