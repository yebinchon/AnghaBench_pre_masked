
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_provider {int sectorsize; scalar_t__ mediasize; int name; int geom; } ;
struct g_gate_softc {scalar_t__ sc_readoffset; struct g_consumer* sc_readcons; struct g_provider* sc_provider; int sc_info; } ;
struct g_gate_ctl_modify {int gctl_modify; int gctl_mediasize; char* gctl_readprov; int gctl_readoffset; int gctl_info; } ;
struct g_consumer {int flags; TYPE_1__* provider; } ;
struct TYPE_2__ {scalar_t__ mediasize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct g_consumer*,int,int ,int ) ;
 int FUNC_2 (struct g_consumer*,struct g_provider*) ;
 int FUNC_3 (struct g_consumer*) ;
 int FUNC_4 (struct g_consumer*) ;
 struct g_consumer* FUNC_5 (int ) ;
 struct g_provider* FUNC_6 (char*) ;
 int FUNC_7 (struct g_provider*,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_11(struct g_gate_softc *VAR_7, struct g_gate_ctl_modify *VAR_8)
{
 struct g_provider *VAR_9;
 struct g_consumer *VAR_10;
 int VAR_11;

 if ((VAR_8->gctl_modify & VAR_2) != 0) {
  if (VAR_8->gctl_mediasize <= 0) {
   FUNC_0(1, "Invalid media size.");
   return (VAR_0);
  }
  VAR_9 = VAR_7->sc_provider;
  if ((VAR_8->gctl_mediasize % VAR_9->sectorsize) != 0) {
   FUNC_0(1, "Invalid media size.");
   return (VAR_0);
  }
  FUNC_7(VAR_9, VAR_8->gctl_mediasize);
  return (0);
 }

 if ((VAR_8->gctl_modify & VAR_1) != 0)
  (void)FUNC_10(VAR_7->sc_info, VAR_8->gctl_info, sizeof(VAR_7->sc_info));

 VAR_10 = ((void*)0);

 if ((VAR_8->gctl_modify & VAR_4) != 0) {
  FUNC_8();
  if (VAR_7->sc_readcons != ((void*)0)) {
   VAR_10 = VAR_7->sc_readcons;
   VAR_7->sc_readcons = ((void*)0);
   (void)FUNC_1(VAR_10, -1, 0, 0);
   FUNC_4(VAR_10);
   FUNC_3(VAR_10);
  }
  if (VAR_8->gctl_readprov[0] != '\0') {
   VAR_9 = FUNC_6(VAR_8->gctl_readprov);
   if (VAR_9 == ((void*)0)) {
    FUNC_9();
    FUNC_0(1, "Provider %s doesn't exist.",
        VAR_8->gctl_readprov);
    return (VAR_0);
   }
   VAR_10 = FUNC_5(VAR_7->sc_provider->geom);
   VAR_10->flags |= VAR_6 | VAR_5;
   VAR_11 = FUNC_2(VAR_10, VAR_9);
   if (VAR_11 != 0) {
    FUNC_0(1, "Unable to attach to %s.",
        VAR_9->name);
   } else {
    VAR_11 = FUNC_1(VAR_10, 1, 0, 0);
    if (VAR_11 != 0) {
     FUNC_0(1, "Unable to access %s.",
         VAR_9->name);
     FUNC_4(VAR_10);
    }
   }
   if (VAR_11 != 0) {
    FUNC_3(VAR_10);
    FUNC_9();
    return (VAR_11);
   }
  }
 } else {
  VAR_10 = VAR_7->sc_readcons;
 }

 if ((VAR_8->gctl_modify & VAR_3) != 0) {
  if (VAR_10 == ((void*)0)) {
   FUNC_0(1, "No read provider.");
   return (VAR_0);
  }
  VAR_9 = VAR_7->sc_provider;
  if ((VAR_8->gctl_readoffset % VAR_9->sectorsize) != 0) {
   FUNC_0(1, "Invalid read offset.");
   return (VAR_0);
  }
  if (VAR_9->mediasize + VAR_8->gctl_readoffset >
      VAR_10->provider->mediasize) {
   FUNC_0(1, "Invalid read offset or media size.");
   return (VAR_0);
  }
  VAR_7->sc_readoffset = VAR_8->gctl_readoffset;
 }

 if ((VAR_8->gctl_modify & VAR_4) != 0) {
  VAR_7->sc_readcons = VAR_10;
  FUNC_9();
 }

 return (0);
}
