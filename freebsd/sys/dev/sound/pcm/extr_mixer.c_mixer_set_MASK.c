
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int ;
struct snddev_info {int flags; } ;
struct snd_mixer {int devs; int* realdev; int* parent; int* child; int* level; int modify_counter; int lock; int dev; } ;


 scalar_t__ FUNC_0 (struct snd_mixer*,int,int,int) ;
 int FUNC_1 (struct snd_mixer*,int) ;
 int FUNC_2 (struct snd_mixer*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct snddev_info* FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct snd_mixer*,struct snddev_info*,int,int) ;
 int FUNC_6 (struct snd_mixer*,struct snddev_info*,int,int) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct snd_mixer *VAR_8, u_int VAR_9, u_int VAR_10)
{
 struct snddev_info *VAR_11;
 u_int VAR_12, VAR_13, VAR_14, VAR_15;
 u_int32_t VAR_16 = VAR_4, VAR_17 = 0;
 u_int32_t VAR_18;
 int VAR_19, VAR_20;

 if (VAR_8 == ((void*)0) || VAR_9 >= VAR_5 ||
     (0 == (VAR_8->devs & (1 << VAR_9))))
  return -1;

 VAR_12 = FUNC_4((VAR_10 & 0x00ff), 100);
 VAR_13 = FUNC_4(((VAR_10 & 0xff00) >> 8), 100);
 VAR_18 = VAR_8->realdev[VAR_9];

 VAR_11 = FUNC_3(VAR_8->dev);
 if (VAR_11 == ((void*)0))
  return -1;


 if (!(VAR_11->flags & VAR_1) && FUNC_7(VAR_8->lock) != 0)
  VAR_20 = 1;
 else
  VAR_20 = 0;

 FUNC_2(VAR_8, VAR_20);


 VAR_16 = VAR_8->parent[VAR_9];
 if (VAR_16 >= VAR_5)
  VAR_16 = VAR_4;
 if (VAR_16 == VAR_4)
  VAR_17 = VAR_8->child[VAR_9];

 if (VAR_16 != VAR_4) {
  VAR_14 = (VAR_12 * (VAR_8->level[VAR_16] & 0x00ff)) / 100;
  VAR_15 = (VAR_13 * ((VAR_8->level[VAR_16] & 0xff00) >> 8)) / 100;
  if (VAR_9 == VAR_6 && (VAR_11->flags & VAR_2))
   (void)FUNC_6(VAR_8, VAR_11, VAR_14, VAR_15);
  else if (VAR_18 != VAR_4 &&
      FUNC_0(VAR_8, VAR_18, VAR_14, VAR_15) < 0) {
   FUNC_1(VAR_8, VAR_20);
   return -1;
  }
 } else if (VAR_17 != 0) {
  for (VAR_19 = 0; VAR_19 < VAR_5; VAR_19++) {
   if (!(VAR_17 & (1 << VAR_19)) || VAR_8->parent[VAR_19] != VAR_9)
    continue;
   VAR_18 = VAR_8->realdev[VAR_19];
   VAR_14 = (VAR_12 * (VAR_8->level[VAR_19] & 0x00ff)) / 100;
   VAR_15 = (VAR_13 * ((VAR_8->level[VAR_19] & 0xff00) >> 8)) / 100;
   if (VAR_19 == VAR_6 &&
       (VAR_11->flags & VAR_2))
    (void)FUNC_6(VAR_8, VAR_11, VAR_14, VAR_15);
   else if (VAR_18 != VAR_4)
    FUNC_0(VAR_8, VAR_18, VAR_14, VAR_15);
  }
  VAR_18 = VAR_8->realdev[VAR_9];
  if (VAR_18 != VAR_4 &&
      FUNC_0(VAR_8, VAR_18, VAR_12, VAR_13) < 0) {
    FUNC_1(VAR_8, VAR_20);
    return -1;
  }
 } else {
  if (VAR_9 == VAR_6 && (VAR_11->flags & VAR_2))
   (void)FUNC_6(VAR_8, VAR_11, VAR_12, VAR_13);
  else if ((VAR_9 == VAR_7 ||
      VAR_9 == VAR_3) && (VAR_11->flags & VAR_0))
   (void)FUNC_5(VAR_8, VAR_11, VAR_9, (VAR_12 + VAR_13) >> 1);
  else if (VAR_18 != VAR_4 &&
      FUNC_0(VAR_8, VAR_18, VAR_12, VAR_13) < 0) {
   FUNC_1(VAR_8, VAR_20);
   return -1;
  }
 }

 FUNC_1(VAR_8, VAR_20);

 VAR_8->level[VAR_9] = VAR_12 | (VAR_13 << 8);
 VAR_8->modify_counter++;

 return 0;
}
