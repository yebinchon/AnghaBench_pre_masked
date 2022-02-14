
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int u_char ;
struct thread {int dummy; } ;
struct synth_info {int device; float* name; int dev_type; int capabilities; int synth_type; } ;
struct TYPE_4__ {int fl; } ;
struct TYPE_3__ {int rl; } ;
struct seq_softc {int unit; int timerbase; int midi_number; int out_water; int pre_event_timeout; int seq_lock; TYPE_2__ out_q; int * midi_flags; int music; TYPE_1__ in_q; } ;
struct midi_info {int device; float* name; int dev_type; int capabilities; int synth_type; } ;
struct cdev {struct seq_softc* si_drv1; } ;
typedef int kobj_t ;
typedef int * caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (TYPE_2__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (int,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (struct synth_info*,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (struct seq_softc*,int,int ,int *) ;
 int FUNC_6 (struct cdev*) ;
 char* FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int,int *,int,struct thread*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int*,int*) ;
 int FUNC_13 (struct seq_softc*,int,int *) ;
 int FUNC_14 (struct seq_softc*,int*) ;
 int FUNC_15 (struct seq_softc*) ;
 int FUNC_16 (struct seq_softc*) ;
 int FUNC_17 (struct seq_softc*) ;

int
FUNC_18(struct cdev *VAR_16, u_long VAR_17, caddr_t VAR_18, int VAR_19,
    struct thread *VAR_20)
{
 int VAR_21, VAR_22, VAR_23;
 struct seq_softc *VAR_24 = VAR_16->si_drv1;
 struct synth_info *VAR_25;
 struct midi_info *VAR_26;
 u_char VAR_27[VAR_2];
 u_char VAR_28[VAR_2];

 kobj_t VAR_29;





 if (VAR_24 == ((void*)0))
  return VAR_1;

 FUNC_3(6, FUNC_11("seq_ioctl: unit %d, cmd %s.\n",
     VAR_24->unit, FUNC_7(VAR_17, VAR_14)));

 VAR_22 = 0;

 switch (VAR_17) {
 case 147:



  FUNC_9(&VAR_24->seq_lock);
  *(int *)VAR_18 = FUNC_17(VAR_24);
  FUNC_10(&VAR_24->seq_lock);
  FUNC_3(6, FUNC_11("seq_ioctl: gettime %d.\n", *(int *)VAR_18));
  VAR_22 = 0;
  break;
 case 134:

 case 132:



  VAR_22 = 0;
  break;
 case 129:
  VAR_27[1] = VAR_12;
  VAR_27[4] = *(int *)VAR_18 & 0xFF;
  VAR_27[5] = (*(int *)VAR_18 >> 8) & 0xFF;
  VAR_27[6] = (*(int *)VAR_18 >> 16) & 0xFF;
  VAR_27[7] = (*(int *)VAR_18 >> 24) & 0xFF;
  goto timerevent;
 case 128:
  VAR_27[1] = VAR_13;
  VAR_27[4] = *(int *)VAR_18 & 0xFF;
  VAR_27[5] = (*(int *)VAR_18 >> 8) & 0xFF;
  VAR_27[6] = (*(int *)VAR_18 >> 16) & 0xFF;
  VAR_27[7] = (*(int *)VAR_18 >> 24) & 0xFF;
  goto timerevent;
 case 131:
  VAR_27[1] = VAR_10;
  goto timerevent;
 case 130:
  VAR_27[1] = VAR_11;
  goto timerevent;
 case 135:
  VAR_27[1] = VAR_9;
timerevent:
  VAR_27[0] = VAR_3;
  FUNC_9(&VAR_24->seq_lock);
  if (!VAR_24->music) {
   VAR_22 = VAR_0;
   FUNC_10(&VAR_24->seq_lock);
   break;
  }
  FUNC_14(VAR_24, VAR_27);
  FUNC_10(&VAR_24->seq_lock);
  break;
 case 133:
  FUNC_3(2,
      FUNC_11("seq_ioctl: SNDCTL_TMR_SELECT not supported\n"));
  VAR_22 = VAR_0;
  break;
 case 140:
  if (VAR_19 == VAR_5) {
   VAR_22 = 0;
   break;
  }
  FUNC_9(&VAR_24->seq_lock);
  VAR_22 = FUNC_16(VAR_24);
  FUNC_10(&VAR_24->seq_lock);
  break;
 case 143:

 case 142:



  FUNC_9(&VAR_24->seq_lock);
  FUNC_15(VAR_24);
  FUNC_10(&VAR_24->seq_lock);
  VAR_22 = 0;
  break;
 case 139:
  FUNC_9(&VAR_24->seq_lock);




  FUNC_10(&VAR_24->seq_lock);
  break;
 case 150:
  if (*(int *)VAR_18 != 0) {
   VAR_22 = VAR_0;
   break;
  }
  FUNC_9(&VAR_24->seq_lock);
  *(int *)VAR_18 = VAR_24->timerbase;
  FUNC_10(&VAR_24->seq_lock);
  FUNC_3(3, FUNC_11("seq_ioctl: ctrlrate %d.\n", *(int *)VAR_18));
  VAR_22 = 0;
  break;
 case 145:
  FUNC_9(&VAR_24->seq_lock);
  *(int *)VAR_18 = VAR_24->midi_number;
  FUNC_10(&VAR_24->seq_lock);
  FUNC_3(3, FUNC_11("seq_ioctl: synths %d.\n", *(int *)VAR_18));
  VAR_22 = 0;
  break;
 case 146:
  FUNC_9(&VAR_24->seq_lock);
  if (VAR_24->music)
   *(int *)VAR_18 = 0;
  else {



   *(int *)VAR_18 = VAR_24->midi_number;
  }
  FUNC_10(&VAR_24->seq_lock);
  FUNC_3(3, FUNC_11("seq_ioctl: midis %d.\n", *(int *)VAR_18));
  VAR_22 = 0;
  break;
 case 144:
  for (VAR_22 = 0; VAR_22 < VAR_2; VAR_22++)
   VAR_27[VAR_22] = (u_char)VAR_18[0];

  FUNC_9(&VAR_24->seq_lock);
  if (VAR_24->music)
   VAR_22 = FUNC_14(VAR_24, VAR_27);
  else {
   if (FUNC_12(VAR_27, VAR_28) > 0)
    VAR_22 = FUNC_14(VAR_24, VAR_28);
   else
    VAR_22 = VAR_0;
  }
  FUNC_10(&VAR_24->seq_lock);
  break;
 case 137:
  VAR_25 = (struct synth_info *)VAR_18;
  VAR_21 = VAR_25->device;
  FUNC_9(&VAR_24->seq_lock);
  if (FUNC_13(VAR_24, VAR_21, &VAR_29) == 0) {
   FUNC_4(VAR_25, sizeof(*VAR_25));
   VAR_25->name[0] = 'f';
   VAR_25->name[1] = 'a';
   VAR_25->name[2] = 'k';
   VAR_25->name[3] = 'e';
   VAR_25->name[4] = 's';
   VAR_25->name[5] = 'y';
   VAR_25->name[6] = 'n';
   VAR_25->name[7] = 't';
   VAR_25->name[8] = 'h';
   VAR_25->device = VAR_21;
   VAR_25->synth_type = VAR_8;
   VAR_25->capabilities = VAR_24->midi_flags[VAR_21];
   VAR_22 = 0;
  } else
   VAR_22 = VAR_0;
  FUNC_10(&VAR_24->seq_lock);
  break;
 case 154:
  VAR_26 = (struct midi_info *)VAR_18;
  VAR_21 = VAR_26->device;
  FUNC_9(&VAR_24->seq_lock);
  if (FUNC_13(VAR_24, VAR_21, &VAR_29) == 0) {
   FUNC_4(VAR_26, sizeof(*VAR_26));
   VAR_26->name[0] = 'f';
   VAR_26->name[1] = 'a';
   VAR_26->name[2] = 'k';
   VAR_26->name[3] = 'e';
   VAR_26->name[4] = 'm';
   VAR_26->name[5] = 'i';
   VAR_26->name[6] = 'd';
   VAR_26->name[7] = 'i';
   VAR_26->device = VAR_21;
   VAR_26->capabilities = VAR_24->midi_flags[VAR_21];



   VAR_26->dev_type = 0x01;
   VAR_22 = 0;
  } else
   VAR_22 = VAR_0;
  FUNC_10(&VAR_24->seq_lock);
  break;
 case 138:
  FUNC_9(&VAR_24->seq_lock);
  FUNC_2(*(int *)VAR_18, 1, FUNC_1(VAR_24->out_q) - 1);
  VAR_24->out_water = *(int *)VAR_18;
  FUNC_10(&VAR_24->seq_lock);
  FUNC_3(3, FUNC_11("seq_ioctl: water %d.\n", *(int *)VAR_18));
  VAR_22 = 0;
  break;
 case 153:
  VAR_23 = *(int *)VAR_18;
  if (VAR_23 < 0)
   VAR_23 = 0;
  FUNC_9(&VAR_24->seq_lock);
  VAR_24->pre_event_timeout = (VAR_15 * VAR_23) / 10;
  *(int *)VAR_18 = VAR_24->pre_event_timeout;
  FUNC_10(&VAR_24->seq_lock);
  FUNC_3(3, FUNC_11("seq_ioctl: pretime %d.\n", *(int *)VAR_18));
  VAR_22 = 0;
  break;
 case 155:
 case 151:
 case 152:




 default:
  FUNC_3(2,
      FUNC_11("seq_ioctl: unsupported IOCTL %ld.\n", VAR_17));
  VAR_22 = VAR_0;
  break;
 }

 return VAR_22;
}
