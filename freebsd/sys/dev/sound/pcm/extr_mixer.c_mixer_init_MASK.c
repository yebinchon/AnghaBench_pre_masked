
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct snddev_info {int flags; struct cdev* mixer_dev; scalar_t__ eqpreamp; } ;
struct snd_mixer {int devs; int* realdev; int* parent; int* child; } ;
struct cdev {struct snd_mixer* si_drv1; } ;
typedef int kobj_class_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ) ;
 struct snddev_info* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 struct cdev* FUNC_5 (int *,int ,int ,int ,int,char*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 struct snd_mixer* FUNC_6 (int ,int ,void*,int ,int *) ;
 int FUNC_7 (struct snd_mixer*,int,int) ;
 int FUNC_8 (struct snd_mixer*,int ) ;
 int FUNC_9 (char*,...) ;
 scalar_t__ FUNC_10 (int ,int,char*,int*) ;
 int* VAR_12 ;
 char** VAR_13 ;
 int FUNC_11 (int,int ,int ) ;

int
FUNC_12(device_t VAR_14, kobj_class_t VAR_15, void *VAR_16)
{
 struct snddev_info *VAR_17;
 struct snd_mixer *VAR_18;
 u_int16_t VAR_19;
 struct cdev *VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24;

 VAR_17 = FUNC_2(VAR_14);
 if (VAR_17 == ((void*)0))
  return (-1);

 if (FUNC_10(FUNC_1(VAR_14),
     FUNC_3(VAR_14), "eq", &VAR_24) == 0 && VAR_24 != 0) {
  VAR_17->flags |= VAR_2;
  if ((VAR_24 & VAR_4) == VAR_24)
   VAR_17->flags |= VAR_24;
  else
   VAR_17->flags |= VAR_3;
  VAR_17->eqpreamp = 0;
 }

 VAR_18 = FUNC_6(VAR_14, VAR_15, VAR_16, VAR_1, ((void*)0));
 if (VAR_18 == ((void*)0))
  return (-1);

 for (VAR_21 = 0; VAR_21 < VAR_7; VAR_21++) {
  VAR_19 = VAR_12[VAR_21];

  if (FUNC_10(FUNC_1(VAR_14),
      FUNC_3(VAR_14), VAR_13[VAR_21], &VAR_24) == 0) {
   if (VAR_24 >= 0 && VAR_24 <= 100) {
    VAR_19 = (u_int16_t) VAR_24;
   }
  }

  FUNC_7(VAR_18, VAR_21, VAR_19 | (VAR_19 << 8));
 }

 FUNC_8(VAR_18, 0);

 VAR_22 = FUNC_3(VAR_14);
 VAR_23 = FUNC_11(VAR_22, VAR_6, 0);
 VAR_20 = FUNC_5(&VAR_10, FUNC_0(VAR_23),
   VAR_8, VAR_0, 0666, "mixer%d", VAR_22);
 VAR_20->si_drv1 = VAR_18;
 VAR_17->mixer_dev = VAR_20;

 ++VAR_11;

 if (VAR_9) {
  for (VAR_21 = 0; VAR_21 < VAR_7; VAR_21++) {
   if (!(VAR_18->devs & (1 << VAR_21)))
    continue;
   if (VAR_18->realdev[VAR_21] != VAR_21) {
    FUNC_4(VAR_14, "Mixer \"%s\" -> \"%s\":",
        VAR_13[VAR_21],
        (VAR_18->realdev[VAR_21] < VAR_7) ?
        VAR_13[VAR_18->realdev[VAR_21]] : "none");
   } else {
    FUNC_4(VAR_14, "Mixer \"%s\":",
        VAR_13[VAR_21]);
   }
   if (VAR_18->parent[VAR_21] < VAR_7)
    FUNC_9(" parent=\"%s\"",
        VAR_13[VAR_18->parent[VAR_21]]);
   if (VAR_18->child[VAR_21] != 0)
    FUNC_9(" child=0x%08x", VAR_18->child[VAR_21]);
   FUNC_9("\n");
  }
  if (VAR_17->flags & VAR_5)
   FUNC_4(VAR_14, "Soft PCM mixer ENABLED\n");
  if (VAR_17->flags & VAR_2)
   FUNC_4(VAR_14, "EQ Treble/Bass ENABLED\n");
 }

 return (0);
}
