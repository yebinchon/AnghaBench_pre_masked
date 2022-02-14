
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_widget {scalar_t__ enable; int nconns; scalar_t__ type; scalar_t__ nid; scalar_t__ ossdev; int selconn; scalar_t__* conns; scalar_t__* connsenable; } ;
struct hdaa_pcm_devinfo {struct hdaa_devinfo* devinfo; } ;
struct hdaa_devinfo {int startnode; int endnode; } ;
struct hdaa_audio_ctl {int dummy; } ;
typedef scalar_t__ nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct hdaa_audio_ctl* FUNC_0 (struct hdaa_devinfo*,scalar_t__,int ,int,int) ;
 int FUNC_1 (struct hdaa_audio_ctl*,int,int,int*,int*) ;
 struct hdaa_widget* FUNC_2 (struct hdaa_devinfo*,int) ;

__attribute__((used)) static void
FUNC_3(struct hdaa_pcm_devinfo *VAR_6,
    int VAR_7, nid_t VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
 struct hdaa_devinfo *VAR_14 = VAR_6->devinfo;
 struct hdaa_widget *VAR_15, *VAR_16;
 struct hdaa_audio_ctl *VAR_17;
 int VAR_18, VAR_19, VAR_20 = 0;

 if (VAR_13 > VAR_5)
  return;

 VAR_15 = FUNC_2(VAR_14, VAR_8);
 if (VAR_15 == ((void*)0) || VAR_15->enable == 0)
  return;


 if (VAR_13 > 0) {
  for (VAR_19 = 0; VAR_19 < VAR_15->nconns; VAR_19++) {
   if (!VAR_15->connsenable[VAR_19])
    continue;
   VAR_20++;
  }
 }



 if (VAR_13 > 0 && (VAR_20 == 1 ||
     VAR_15->type != VAR_4)) {
  VAR_17 = FUNC_0(VAR_14, VAR_15->nid, VAR_0,
      VAR_9, 1);
  if (VAR_17)
   FUNC_1(VAR_17, VAR_7, VAR_10, &VAR_11, &VAR_12);
 }



 if (VAR_15->ossdev >= 0 && VAR_13 > 0)
  return;


 if ((VAR_15->type == VAR_2 ||
     VAR_15->type == VAR_4) &&
     VAR_13 > 0)
  return;





 if (VAR_20 > 1 &&
     (VAR_15->type == VAR_3 ||
      VAR_15->selconn != VAR_9))
  return;

 VAR_17 = FUNC_0(VAR_14, VAR_15->nid, VAR_1, -1, 1);
 if (VAR_17)
  FUNC_1(VAR_17, VAR_7, VAR_10, &VAR_11, &VAR_12);

 for (VAR_18 = VAR_14->startnode; VAR_18 < VAR_14->endnode; VAR_18++) {
  VAR_16 = FUNC_2(VAR_14, VAR_18);
  if (VAR_16 == ((void*)0) || VAR_16->enable == 0)
   continue;
  for (VAR_19 = 0; VAR_19 < VAR_16->nconns; VAR_19++) {
   if (VAR_16->connsenable[VAR_19] && VAR_16->conns[VAR_19] == VAR_8) {
    FUNC_3(VAR_6, VAR_7,
        VAR_16->nid, VAR_19, VAR_10, VAR_11, VAR_12, VAR_13 + 1);
   }
  }
 }
 return;
}
