
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct g_gate_softc {int sc_flags; TYPE_3__* sc_readcons; scalar_t__ sc_readoffset; } ;
struct bio {int bio_cmd; TYPE_2__* bio_to; scalar_t__ bio_offset; int bio_done; } ;
struct TYPE_6__ {TYPE_2__* provider; } ;
struct TYPE_5__ {TYPE_1__* geom; } ;
struct TYPE_4__ {struct g_gate_softc* softc; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,struct bio*,char*) ;
 struct bio* FUNC_1 (struct bio*) ;
 int VAR_6 ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (struct bio*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_5(struct bio *VAR_7)
{
 struct g_gate_softc *VAR_8;

 VAR_8 = VAR_7->bio_to->geom->softc;
 if (VAR_8 == ((void*)0) || (VAR_8->sc_flags & VAR_4) != 0) {
  FUNC_3(VAR_7, VAR_1);
  return;
 }
 FUNC_0(2, VAR_7, "Request received.");
 switch (VAR_7->bio_cmd) {
 case 129:
  if (VAR_8->sc_readcons != ((void*)0)) {
   struct bio *VAR_9;

   VAR_9 = FUNC_1(VAR_7);
   if (VAR_9 == ((void*)0)) {
    FUNC_3(VAR_7, VAR_0);
    return;
   }
   VAR_9->bio_done = VAR_6;
   VAR_9->bio_offset = VAR_7->bio_offset + VAR_8->sc_readoffset;
   VAR_9->bio_to = VAR_8->sc_readcons->provider;
   FUNC_4(VAR_9, VAR_8->sc_readcons);
   return;
  }
  break;
 case 132:
 case 128:
 case 131:

  if ((VAR_8->sc_flags & VAR_5) != 0) {
   FUNC_3(VAR_7, VAR_3);
   return;
  }
  break;
 case 130:
 default:
  FUNC_0(2, VAR_7, "Ignoring request.");
  FUNC_3(VAR_7, VAR_2);
  return;
 }

 FUNC_2(VAR_7);
}
