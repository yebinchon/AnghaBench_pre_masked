
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm {int name; void* private_free; struct oxygen* private_data; TYPE_1__* streams; } ;
struct TYPE_4__ {int device_config; } ;
struct oxygen {int pci; int card; TYPE_2__ model; scalar_t__ has_ac97_1; } ;
struct TYPE_3__ {int substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct oxygen*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct snd_pcm*,int ,int ,int ,int ) ;
 int FUNC_4 (int ,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_5 (struct snd_pcm*,size_t,int *) ;
 int FUNC_6 (int ,char*) ;

int FUNC_7(struct oxygen *VAR_25)
{
 struct snd_pcm *VAR_26;
 int VAR_27, VAR_28;
 int VAR_29;

 VAR_27 = !!(VAR_25->model.device_config & VAR_12);
 VAR_28 = !!(VAR_25->model.device_config & (VAR_2 |
           VAR_3));
 if (VAR_27 | VAR_28) {
  VAR_29 = FUNC_4(VAR_25->card, "Multichannel",
      0, VAR_27, VAR_28, &VAR_26);
  if (VAR_29 < 0)
   return VAR_29;
  if (VAR_27)
   FUNC_5(VAR_26, VAR_17,
     &VAR_19);
  if (VAR_25->model.device_config & VAR_2)
   FUNC_5(VAR_26, VAR_16,
     &VAR_21);
  else if (VAR_25->model.device_config & VAR_3)
   FUNC_5(VAR_26, VAR_16,
     &VAR_22);
  VAR_26->private_data = VAR_25;
  VAR_26->private_free = VAR_20;
  FUNC_6(VAR_26->name, "Multichannel");
  if (VAR_27)
   FUNC_2(VAR_26->streams[VAR_17].substream,
            VAR_15,
            FUNC_1(VAR_25->pci),
            VAR_8,
            VAR_1);
  if (VAR_28)
   FUNC_2(VAR_26->streams[VAR_16].substream,
            VAR_15,
            FUNC_1(VAR_25->pci),
            VAR_7,
            VAR_0);
 }

 VAR_27 = !!(VAR_25->model.device_config & VAR_13);
 VAR_28 = !!(VAR_25->model.device_config & VAR_4);
 if (VAR_27 | VAR_28) {
  VAR_29 = FUNC_4(VAR_25->card, "Digital", 1, VAR_27, VAR_28, &VAR_26);
  if (VAR_29 < 0)
   return VAR_29;
  if (VAR_27)
   FUNC_5(VAR_26, VAR_17,
     &VAR_24);
  if (VAR_28)
   FUNC_5(VAR_26, VAR_16,
     &VAR_23);
  VAR_26->private_data = VAR_25;
  VAR_26->private_free = VAR_20;
  FUNC_6(VAR_26->name, "Digital");
  FUNC_3(VAR_26, VAR_15,
            FUNC_1(VAR_25->pci),
            VAR_7,
            VAR_0);
 }

 if (VAR_25->has_ac97_1) {
  VAR_27 = !!(VAR_25->model.device_config & VAR_14);
  VAR_28 = !!(VAR_25->model.device_config & VAR_5);
 } else {
  VAR_27 = 0;
  VAR_28 = !!(VAR_25->model.device_config & VAR_6);
 }
 if (VAR_27 | VAR_28) {
  VAR_29 = FUNC_4(VAR_25->card, VAR_27 ? "AC97" : "Analog2",
      2, VAR_27, VAR_28, &VAR_26);
  if (VAR_29 < 0)
   return VAR_29;
  if (VAR_27) {
   FUNC_5(VAR_26, VAR_17,
     &VAR_18);
   FUNC_0(VAR_25, VAR_11,
          VAR_9,
          VAR_10);
  }
  if (VAR_28)
   FUNC_5(VAR_26, VAR_16,
     &VAR_22);
  VAR_26->private_data = VAR_25;
  VAR_26->private_free = VAR_20;
  FUNC_6(VAR_26->name, VAR_27 ? "Front Panel" : "Analog 2");
  FUNC_3(VAR_26, VAR_15,
            FUNC_1(VAR_25->pci),
            VAR_7,
            VAR_0);
 }
 return 0;
}
