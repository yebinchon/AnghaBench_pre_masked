
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct snddev_info {int flags; } ;
struct snd_mixer {int* parent; int* child; int devs; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct snddev_info* FUNC_0 (int ) ;

void
FUNC_1(struct snd_mixer *VAR_6, u_int32_t VAR_7)
{
 struct snddev_info *VAR_8;
 int VAR_9;

 if (VAR_6 == ((void*)0))
  return;

 VAR_8 = FUNC_0(VAR_6->dev);
 if (VAR_8 != ((void*)0) && (VAR_8->flags & VAR_1))
  VAR_7 |= VAR_3;
 if (VAR_8 != ((void*)0) && (VAR_8->flags & VAR_0))
  VAR_7 |= VAR_4 | VAR_2;
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  if (VAR_6->parent[VAR_9] < VAR_5)
   VAR_7 |= 1 << VAR_6->parent[VAR_9];
  VAR_7 |= VAR_6->child[VAR_9];
 }
 VAR_6->devs = VAR_7;
}
