
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uaudio_softc {struct uaudio_mixer_node* sc_mixer_root; } ;
struct uaudio_mixer_node {int nchan; char* name; int desc; int maxval; int minval; int * wValue; struct uaudio_mixer_node* next; } ;
struct sysctl_oid {int dummy; } ;
typedef int device_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*,int ,int ,int ,char*) ;
 struct sysctl_oid* FUNC_1 (int ,int ,int ,char*,int ,int *,char*) ;
 int FUNC_2 (int ,int ,int ,char*,int,struct uaudio_softc*,int ,int ,char*,char*) ;
 int FUNC_3 (int ,int ,int ,char*,int ,int ,int ,char*) ;
 int FUNC_4 (struct sysctl_oid*) ;
 int FUNC_5 (int ) ;
 struct sysctl_oid* FUNC_6 (int ) ;
 int FUNC_7 (char*,int,char*,char*,int,...) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_8(struct uaudio_softc *VAR_5, device_t VAR_6)
{
 struct uaudio_mixer_node *VAR_7;
 struct sysctl_oid *VAR_8;
 struct sysctl_oid *VAR_9;
 char VAR_10[32];
 int VAR_11;
 int VAR_12;

 VAR_8 = FUNC_1(FUNC_5(VAR_6),
     FUNC_4(FUNC_6(VAR_6)), VAR_3, "mixer",
     VAR_0, ((void*)0), "");

 if (VAR_8 == ((void*)0))
  return;

 for (VAR_12 = 0, VAR_7 = VAR_5->sc_mixer_root; VAR_7 != ((void*)0);
     VAR_7 = VAR_7->next, VAR_12++) {

  for (VAR_11 = 0; VAR_11 < VAR_7->nchan; VAR_11++) {

   if (VAR_7->nchan > 1) {
    FUNC_7(VAR_10, sizeof(VAR_10), "%s_%d_%d",
        VAR_7->name, VAR_12, VAR_11);
   } else {
    FUNC_7(VAR_10, sizeof(VAR_10), "%s_%d",
        VAR_7->name, VAR_12);
   }

   VAR_9 = FUNC_1(FUNC_5(VAR_6),
       FUNC_4(VAR_8), VAR_3, VAR_10,
       VAR_0, ((void*)0), "Mixer control nodes");

   if (VAR_9 == ((void*)0))
    continue;

   FUNC_2(FUNC_5(VAR_6),
       FUNC_4(VAR_9),
       VAR_3, "val", VAR_2 | VAR_1, VAR_5,
       VAR_7->wValue[VAR_11],
       VAR_4, "I", "Current value");

   FUNC_0(FUNC_5(VAR_6),
       FUNC_4(VAR_9),
       VAR_3, "min", VAR_0, 0, VAR_7->minval,
       "Minimum value");

   FUNC_0(FUNC_5(VAR_6),
       FUNC_4(VAR_9),
       VAR_3, "max", VAR_0, 0, VAR_7->maxval,
       "Maximum value");

   FUNC_3(FUNC_5(VAR_6),
       FUNC_4(VAR_9),
       VAR_3, "desc", VAR_0, VAR_7->desc, 0,
       "Description");
  }
 }
}
