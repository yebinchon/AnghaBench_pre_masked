
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_widget {scalar_t__ enable; scalar_t__ type; size_t bindas; scalar_t__ ossdev; int pflags; int nconns; int* conns; int nid; int * connsenable; } ;
struct hdaa_devinfo {int startnode; int endnode; struct hdaa_audio_as* as; } ;
struct hdaa_audio_as {scalar_t__ dir; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct hdaa_widget*,scalar_t__,int,int,int) ;
 int FUNC_1 (struct hdaa_devinfo*,int ,int,scalar_t__,int ,int*,int*) ;
 int FUNC_2 (struct hdaa_devinfo*,int ,int,scalar_t__,int,int ,int*,int*) ;
 struct hdaa_widget* FUNC_3 (struct hdaa_devinfo*,int) ;

__attribute__((used)) static void
FUNC_4(struct hdaa_devinfo *VAR_12)
{
 struct hdaa_audio_as *VAR_13 = VAR_12->as;
 struct hdaa_widget *VAR_14, *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;


 for (VAR_16 = VAR_12->startnode; VAR_16 < VAR_12->endnode; VAR_16++) {
  VAR_14 = FUNC_3(VAR_12, VAR_16);
  if (VAR_14 == ((void*)0) || VAR_14->enable == 0)
   continue;
  VAR_18 = VAR_19 = 0;
  if (VAR_14->type == VAR_5 ||
      VAR_14->type == VAR_6 ||
      (VAR_14->type == VAR_7 &&
      VAR_13[VAR_14->bindas].dir == VAR_1)) {
   if (VAR_14->ossdev < 0)
    continue;
   VAR_20 = FUNC_2(VAR_12, VAR_14->nid, -1,
       VAR_14->ossdev, 1, 0, &VAR_18, &VAR_19);
   FUNC_0(VAR_14, VAR_14->ossdev, VAR_20, VAR_18, VAR_19);
  } else if (VAR_14->type == VAR_4) {
   VAR_20 = FUNC_1(VAR_12, VAR_14->nid, -1,
       VAR_10, 0, &VAR_18, &VAR_19);
   FUNC_0(VAR_14, VAR_10, VAR_20, VAR_18, VAR_19);
  } else if (VAR_14->type == VAR_7 &&
      VAR_13[VAR_14->bindas].dir == VAR_2) {
   VAR_20 = FUNC_1(VAR_12, VAR_14->nid, -1,
       VAR_11, 0, &VAR_18, &VAR_19);
   FUNC_0(VAR_14, VAR_11, VAR_20, VAR_18, VAR_19);
  }
  if (VAR_14->ossdev == VAR_9) {
   VAR_18 = VAR_19 = 0;
   VAR_20 = FUNC_2(VAR_12, VAR_14->nid, -1,
       VAR_14->ossdev, 1, 0, &VAR_18, &VAR_19);
   if (VAR_18 == VAR_19) {


    VAR_20 += FUNC_1(VAR_12, VAR_14->nid, -1,
        VAR_14->ossdev, 0, &VAR_18, &VAR_19);
    VAR_14->pflags |= VAR_3;
   }
   FUNC_0(VAR_14, VAR_14->ossdev, VAR_20, VAR_18, VAR_19);
  }
  if (VAR_14->pflags & VAR_0) {
   for (VAR_17 = 0; VAR_17 < VAR_14->nconns; VAR_17++) {
    if (!VAR_14->connsenable[VAR_17])
        continue;
    VAR_15 = FUNC_3(VAR_12, VAR_14->conns[VAR_17]);
    if (VAR_15 == ((void*)0) || VAR_15->enable == 0)
        continue;
    if (VAR_15->bindas == -1)
        continue;
    if (VAR_15->bindas >= 0 &&
        VAR_13[VAR_15->bindas].dir != VAR_1)
     continue;
    VAR_18 = VAR_19 = 0;
    VAR_20 = FUNC_1(VAR_12,
        VAR_14->nid, VAR_17, VAR_8, 0,
        &VAR_18, &VAR_19);
    FUNC_0(VAR_14, VAR_8,
        VAR_20, VAR_18, VAR_19);
   }
  }
 }
}
