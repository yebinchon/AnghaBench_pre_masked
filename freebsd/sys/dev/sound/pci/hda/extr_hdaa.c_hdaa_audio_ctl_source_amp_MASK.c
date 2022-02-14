
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_widget {scalar_t__ enable; int nconns; scalar_t__ type; scalar_t__ nid; scalar_t__ ossdev; int ossmask; scalar_t__* conns; scalar_t__* connsenable; } ;
struct hdaa_devinfo {int startnode; int endnode; } ;
struct hdaa_audio_ctl {int ossmask; } ;
typedef scalar_t__ nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct hdaa_audio_ctl*) ;
 scalar_t__ FUNC_1 (struct hdaa_audio_ctl*) ;
 struct hdaa_audio_ctl* FUNC_2 (struct hdaa_devinfo*,scalar_t__,int ,int,int) ;
 struct hdaa_widget* FUNC_3 (struct hdaa_devinfo*,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int
FUNC_6(struct hdaa_devinfo *VAR_6, nid_t VAR_7, int VAR_8,
    int VAR_9, int VAR_10, int VAR_11, int *VAR_12, int *VAR_13)
{
 struct hdaa_widget *VAR_14, *VAR_15;
 struct hdaa_audio_ctl *VAR_16;
 int VAR_17, VAR_18, VAR_19 = 0, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24 = 0;

 if (VAR_11 > VAR_5)
  return (VAR_24);

 VAR_14 = FUNC_3(VAR_6, VAR_7);
 if (VAR_14 == ((void*)0) || VAR_14->enable == 0)
  return (VAR_24);


 if (VAR_11 > 0) {
  for (VAR_18 = 0; VAR_18 < VAR_14->nconns; VAR_18++) {
   if (!VAR_14->connsenable[VAR_18])
    continue;
   VAR_19++;
  }
 }



 if (VAR_11 > 0 && VAR_10 && (VAR_19 == 1 ||
     VAR_14->type != VAR_4)) {
  VAR_16 = FUNC_2(VAR_6, VAR_14->nid, VAR_0,
      VAR_8, 1);
  if (VAR_16) {
   VAR_16->ossmask |= (1 << VAR_9);
   VAR_24++;
   if (*VAR_12 == *VAR_13) {
    *VAR_12 += FUNC_1(VAR_16);
    *VAR_13 += FUNC_0(VAR_16);
   }
  }
 }



 if (VAR_14->ossdev >= 0 && VAR_11 > 0)
  return (VAR_24);


 if ((VAR_14->type == VAR_2 ||
     VAR_14->type == VAR_4) &&
     VAR_11 > 0)
  return (VAR_24);


 VAR_14->ossmask |= (1 << VAR_9);





 if (VAR_19 > 1 &&
     VAR_14->type == VAR_3)
  VAR_10 = 0;

 if (VAR_10) {
  VAR_16 = FUNC_2(VAR_6, VAR_14->nid, VAR_1, -1, 1);
  if (VAR_16) {
   VAR_16->ossmask |= (1 << VAR_9);
   VAR_24++;
   if (*VAR_12 == *VAR_13) {
    *VAR_12 += FUNC_1(VAR_16);
    *VAR_13 += FUNC_0(VAR_16);
   }
  }
 }

 VAR_22 = VAR_23 = 0;
 for (VAR_17 = VAR_6->startnode; VAR_17 < VAR_6->endnode; VAR_17++) {
  VAR_15 = FUNC_3(VAR_6, VAR_17);
  if (VAR_15 == ((void*)0) || VAR_15->enable == 0)
   continue;
  for (VAR_18 = 0; VAR_18 < VAR_15->nconns; VAR_18++) {
   if (VAR_15->connsenable[VAR_18] && VAR_15->conns[VAR_18] == VAR_7) {
    VAR_20 = VAR_21 = 0;
    VAR_24 += FUNC_6(VAR_6,
        VAR_15->nid, VAR_18, VAR_9, VAR_10, VAR_11 + 1,
        &VAR_20, &VAR_21);
    if (VAR_22 == 0 && VAR_23 == 0) {
     VAR_22 = VAR_20;
     VAR_23 = VAR_21;
    } else if (VAR_20 != VAR_21) {
     VAR_22 = FUNC_4(VAR_22, VAR_20);
     VAR_23 = FUNC_5(VAR_23, VAR_21);
    }
   }
  }
 }
 if (*VAR_12 == *VAR_13 && VAR_22 < VAR_23) {
  *VAR_12 += VAR_22;
  *VAR_13 += VAR_23;
 }
 return (VAR_24);
}
