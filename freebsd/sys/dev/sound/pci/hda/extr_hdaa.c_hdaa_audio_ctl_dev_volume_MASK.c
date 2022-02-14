
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct hdaa_widget {scalar_t__ enable; size_t bindas; scalar_t__ type; int pflags; int nconns; int* conns; unsigned int ossdev; int nid; int * connsenable; } ;
struct hdaa_pcm_devinfo {int* left; int* maxamp; int* minamp; int* right; scalar_t__ index; size_t playas; size_t recas; struct hdaa_devinfo* devinfo; } ;
struct hdaa_devinfo {int startnode; int endnode; TYPE_1__* as; } ;
struct TYPE_2__ {scalar_t__ dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_0 (struct hdaa_pcm_devinfo*,unsigned int,int ,int,int ,int,int,int ) ;
 int FUNC_1 (struct hdaa_pcm_devinfo*,unsigned int,int ,int,int ,int,int,int ) ;
 struct hdaa_widget* FUNC_2 (struct hdaa_devinfo*,int) ;

__attribute__((used)) static void
FUNC_3(struct hdaa_pcm_devinfo *VAR_12, unsigned VAR_13)
{
 struct hdaa_devinfo *VAR_14 = VAR_12->devinfo;
 struct hdaa_widget *VAR_15, *VAR_16;
 uint32_t VAR_17;
 int VAR_18, VAR_19;
 int VAR_20, VAR_21;

 VAR_17 = 0;
 if (VAR_12->left[VAR_13] == 0) {
  VAR_17 |= VAR_1;
  VAR_18 = -4000;
 } else
  VAR_18 = ((VAR_12->maxamp[VAR_13] - VAR_12->minamp[VAR_13]) *
      VAR_12->left[VAR_13] + 50) / 100 + VAR_12->minamp[VAR_13];
 if (VAR_12->right[VAR_13] == 0) {
  VAR_17 |= VAR_2;
  VAR_19 = -4000;
 } else
  VAR_19 = ((VAR_12->maxamp[VAR_13] - VAR_12->minamp[VAR_13]) *
      VAR_12->right[VAR_13] + 50) / 100 + VAR_12->minamp[VAR_13];
 for (VAR_20 = VAR_14->startnode; VAR_20 < VAR_14->endnode; VAR_20++) {
  VAR_15 = FUNC_2(VAR_14, VAR_20);
  if (VAR_15 == ((void*)0) || VAR_15->enable == 0)
   continue;
  if (VAR_15->bindas < 0) {
   if (VAR_12->index != 0)
    continue;
  } else {
   if (VAR_15->bindas != VAR_12->playas &&
       VAR_15->bindas != VAR_12->recas)
    continue;
  }
  if (VAR_13 == VAR_10 &&
      VAR_15->type == VAR_6) {
   FUNC_0(VAR_12, VAR_13,
       VAR_15->nid, -1, VAR_17, VAR_18, VAR_19, 0);
   continue;
  }
  if (VAR_13 == VAR_11 &&
      VAR_15->type == VAR_7 &&
      VAR_14->as[VAR_15->bindas].dir == VAR_4) {
   FUNC_0(VAR_12, VAR_13,
       VAR_15->nid, -1, VAR_17, VAR_18, VAR_19, 0);
   continue;
  }
  if (VAR_13 == VAR_8 &&
      VAR_15->pflags & VAR_0) {
   for (VAR_21 = 0; VAR_21 < VAR_15->nconns; VAR_21++) {
    if (!VAR_15->connsenable[VAR_21])
        continue;
    VAR_16 = FUNC_2(VAR_14, VAR_15->conns[VAR_21]);
    if (VAR_16 == ((void*)0) || VAR_16->enable == 0)
        continue;
    if (VAR_16->bindas == -1)
        continue;
    if (VAR_16->bindas >= 0 &&
        VAR_14->as[VAR_16->bindas].dir != VAR_3)
     continue;
    FUNC_0(VAR_12, VAR_13,
        VAR_15->nid, VAR_21, VAR_17, VAR_18, VAR_19, 0);
   }
   continue;
  }
  if (VAR_15->ossdev != VAR_13)
   continue;
  FUNC_1(VAR_12, VAR_13,
      VAR_15->nid, -1, VAR_17, VAR_18, VAR_19, 0);
  if (VAR_13 == VAR_9 && (VAR_15->pflags & VAR_5))
   FUNC_0(VAR_12, VAR_13,
       VAR_15->nid, -1, VAR_17, VAR_18, VAR_19, 0);
 }
}
