
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_widget {scalar_t__ enable; int nconns; scalar_t__* connsenable; scalar_t__* conns; size_t bindas; int bindseqmask; scalar_t__ type; int nid; } ;
struct hdaa_devinfo {int startnode; int endnode; struct hdaa_audio_as* as; } ;
struct hdaa_audio_ctl {int ossmask; } ;
struct hdaa_audio_as {scalar_t__ hpredir; scalar_t__ fakeredir; } ;
typedef scalar_t__ nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct hdaa_audio_ctl*) ;
 scalar_t__ FUNC_1 (struct hdaa_audio_ctl*) ;
 struct hdaa_audio_ctl* FUNC_2 (struct hdaa_devinfo*,int ,int ,int,int) ;
 struct hdaa_widget* FUNC_3 (struct hdaa_devinfo*,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int
FUNC_6(struct hdaa_devinfo *VAR_4, nid_t VAR_5, int VAR_6,
    int VAR_7, int VAR_8, int *VAR_9, int *VAR_10)
{
 struct hdaa_audio_as *VAR_11 = VAR_4->as;
 struct hdaa_widget *VAR_12, *VAR_13;
 struct hdaa_audio_ctl *VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22 = 0;

 if (VAR_8 > VAR_3)
  return (VAR_22);

 VAR_12 = FUNC_3(VAR_4, VAR_5);
 if (VAR_12 == ((void*)0) || VAR_12->enable == 0)
  return (VAR_22);

 if (VAR_8 > 0) {


  VAR_17 = 0;
  for (VAR_15 = VAR_4->startnode; VAR_15 < VAR_4->endnode; VAR_15++) {
   VAR_13 = FUNC_3(VAR_4, VAR_15);
   if (VAR_13 == ((void*)0) || VAR_13->enable == 0)
    continue;
   for (VAR_16 = 0; VAR_16 < VAR_13->nconns; VAR_16++) {
    if (VAR_13->connsenable[VAR_16] && VAR_13->conns[VAR_16] == VAR_5)
     VAR_17++;
   }
  }




  if ((VAR_17 == 2 && (VAR_12->bindas < 0 ||
      VAR_11[VAR_12->bindas].hpredir < 0 || VAR_11[VAR_12->bindas].fakeredir ||
      (VAR_12->bindseqmask & (1 << 15)) == 0)) ||
      VAR_17 > 2)
   return (VAR_22);


  VAR_14 = FUNC_2(VAR_4, VAR_12->nid,
      VAR_1, -1, 1);
  if (VAR_14) {
   VAR_14->ossmask |= (1 << VAR_7);
   VAR_22++;
   if (*VAR_9 == *VAR_10) {
    *VAR_9 += FUNC_1(VAR_14);
    *VAR_10 += FUNC_0(VAR_14);
   }
  }
 }


 if (VAR_12->type == VAR_2 &&
     VAR_8 > 0)
  return (VAR_22);

 VAR_20 = VAR_21 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_12->nconns; VAR_15++) {
  if (VAR_12->connsenable[VAR_15] == 0)
   continue;
  if (VAR_6 >= 0 && VAR_15 != VAR_6)
   continue;
  VAR_18 = VAR_19 = 0;
  VAR_14 = FUNC_2(VAR_4, VAR_12->nid,
      VAR_0, VAR_15, 1);
  if (VAR_14) {
   VAR_14->ossmask |= (1 << VAR_7);
   VAR_22++;
   if (*VAR_9 == *VAR_10) {
    VAR_18 += FUNC_1(VAR_14);
    VAR_19 += FUNC_0(VAR_14);
   }
  }
  VAR_22 += FUNC_6(VAR_4, VAR_12->conns[VAR_15], -1, VAR_7,
      VAR_8 + 1, &VAR_18, &VAR_19);
  if (VAR_20 == 0 && VAR_21 == 0) {
   VAR_20 = VAR_18;
   VAR_21 = VAR_19;
  } else if (VAR_18 != VAR_19) {
   VAR_20 = FUNC_4(VAR_20, VAR_18);
   VAR_21 = FUNC_5(VAR_21, VAR_19);
  }
 }
 if (*VAR_9 == *VAR_10 && VAR_20 < VAR_21) {
  *VAR_9 += VAR_20;
  *VAR_10 += VAR_21;
 }
 return (VAR_22);
}
