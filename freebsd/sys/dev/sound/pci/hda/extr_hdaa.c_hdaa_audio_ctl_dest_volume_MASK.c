
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_widget {scalar_t__ enable; int nconns; scalar_t__* connsenable; scalar_t__* conns; size_t bindas; int bindseqmask; scalar_t__ type; int nid; } ;
struct hdaa_pcm_devinfo {struct hdaa_devinfo* devinfo; } ;
struct hdaa_devinfo {int startnode; int endnode; struct hdaa_audio_as* as; } ;
struct hdaa_audio_ctl {int dummy; } ;
struct hdaa_audio_as {scalar_t__ hpredir; scalar_t__ fakeredir; } ;
typedef scalar_t__ nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct hdaa_audio_ctl* FUNC_0 (struct hdaa_devinfo*,int ,int ,int,int) ;
 int FUNC_1 (struct hdaa_audio_ctl*,int,int,int*,int*) ;
 struct hdaa_widget* FUNC_2 (struct hdaa_devinfo*,int) ;

__attribute__((used)) static void
FUNC_3(struct hdaa_pcm_devinfo *VAR_4,
    int VAR_5, nid_t VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 struct hdaa_devinfo *VAR_12 = VAR_4->devinfo;
 struct hdaa_audio_as *VAR_13 = VAR_12->as;
 struct hdaa_widget *VAR_14, *VAR_15;
 struct hdaa_audio_ctl *VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;

 if (VAR_11 > VAR_3)
  return;

 VAR_14 = FUNC_2(VAR_12, VAR_6);
 if (VAR_14 == ((void*)0) || VAR_14->enable == 0)
  return;

 if (VAR_11 > 0) {


  VAR_19 = 0;
  for (VAR_17 = VAR_12->startnode; VAR_17 < VAR_12->endnode; VAR_17++) {
   VAR_15 = FUNC_2(VAR_12, VAR_17);
   if (VAR_15 == ((void*)0) || VAR_15->enable == 0)
    continue;
   for (VAR_18 = 0; VAR_18 < VAR_15->nconns; VAR_18++) {
    if (VAR_15->connsenable[VAR_18] && VAR_15->conns[VAR_18] == VAR_6)
     VAR_19++;
   }
  }




  if ((VAR_19 == 2 && (VAR_14->bindas < 0 ||
      VAR_13[VAR_14->bindas].hpredir < 0 || VAR_13[VAR_14->bindas].fakeredir ||
      (VAR_14->bindseqmask & (1 << 15)) == 0)) ||
      VAR_19 > 2)
   return;


  VAR_16 = FUNC_0(VAR_12, VAR_14->nid,
      VAR_1, -1, 1);
  if (VAR_16)
   FUNC_1(VAR_16, VAR_5, VAR_8, &VAR_9, &VAR_10);
 }


 if (VAR_14->type == VAR_2 &&
     VAR_11 > 0)
  return;

 for (VAR_17 = 0; VAR_17 < VAR_14->nconns; VAR_17++) {
  if (VAR_14->connsenable[VAR_17] == 0)
   continue;
  if (VAR_7 >= 0 && VAR_17 != VAR_7)
   continue;
  VAR_20 = VAR_9;
  VAR_21 = VAR_10;
  VAR_16 = FUNC_0(VAR_12, VAR_14->nid,
      VAR_0, VAR_17, 1);
  if (VAR_16)
   FUNC_1(VAR_16, VAR_5, VAR_8, &VAR_20, &VAR_21);
  FUNC_3(VAR_4, VAR_5, VAR_14->conns[VAR_17], -1,
      VAR_8, VAR_20, VAR_21, VAR_11 + 1);
 }
}
