
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct snd_mixer {int dummy; } ;
struct TYPE_2__ {int eapdbtl; } ;
struct hdaa_widget {scalar_t__ enable; scalar_t__ type; int nid; TYPE_1__ param; } ;
struct hdaa_pcm_devinfo {unsigned int* left; unsigned int* right; struct hdaa_devinfo* devinfo; } ;
struct hdaa_devinfo {int startnode; int endnode; int quirks; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct hdaa_pcm_devinfo*,unsigned int) ;
 int FUNC_3 (struct hdaa_devinfo*) ;
 int FUNC_4 (struct hdaa_devinfo*) ;
 struct hdaa_widget* FUNC_5 (struct hdaa_devinfo*,int) ;
 struct hdaa_pcm_devinfo* FUNC_6 (struct snd_mixer*) ;

__attribute__((used)) static int
FUNC_7(struct snd_mixer *VAR_5, unsigned VAR_6,
     unsigned VAR_7, unsigned VAR_8)
{
 struct hdaa_pcm_devinfo *VAR_9 = FUNC_6(VAR_5);
 struct hdaa_devinfo *VAR_10 = VAR_9->devinfo;
 struct hdaa_widget *VAR_11;
 int VAR_12;

 FUNC_3(VAR_10);


 VAR_9->left[VAR_6] = VAR_7;
 VAR_9->right[VAR_6] = VAR_8;


 if (VAR_6 == VAR_4) {
  uint32_t VAR_13;
  VAR_11 = ((void*)0);
  for (VAR_12 = VAR_10->startnode; VAR_12 < VAR_10->endnode; VAR_12++) {
   VAR_11 = FUNC_5(VAR_10, VAR_12);
   if (VAR_11 == ((void*)0) || VAR_11->enable == 0)
    continue;
   if (VAR_11->type != VAR_3 ||
       VAR_11->param.eapdbtl == VAR_2)
    continue;
   break;
  }
  if (VAR_12 >= VAR_10->endnode) {
   FUNC_4(VAR_10);
   return (-1);
  }
  VAR_13 = VAR_11->param.eapdbtl;
  if (VAR_7 == 0)
   VAR_11->param.eapdbtl &= ~VAR_1;
  else
   VAR_11->param.eapdbtl |= VAR_1;
  if (VAR_13 != VAR_11->param.eapdbtl) {
   uint32_t VAR_14;

   VAR_14 = VAR_11->param.eapdbtl;
   if (VAR_10->quirks & VAR_0)
    VAR_14 ^= VAR_1;
   FUNC_1(VAR_10->dev,
       FUNC_0(0, VAR_11->nid, VAR_14));
  }
  FUNC_4(VAR_10);
  return (VAR_7 | (VAR_7 << 8));
 }


 FUNC_2(VAR_9, VAR_6);

 FUNC_4(VAR_10);
 return (VAR_7 | (VAR_8 << 8));
}
