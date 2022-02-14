
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int width; int offset; int period; } ;
struct TYPE_3__ {int width; int offset; int period; } ;
struct ncr53c9x_tinfo {int flags; TYPE_2__ goal; TYPE_1__ curr; } ;
struct ncr53c9x_softc {int sc_ntarg; int sc_cfflags; int sc_minsync; struct ncr53c9x_tinfo* sc_tinfo; } ;
struct cam_path {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ncr53c9x_softc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct ncr53c9x_softc* FUNC_1 (void*) ;
 int FUNC_2 (struct ncr53c9x_softc*,int,int ) ;
 int FUNC_3 (struct cam_path*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_5, uint32_t VAR_6, struct cam_path *VAR_7, void *VAR_8)
{
 struct ncr53c9x_softc *VAR_9;
 struct ncr53c9x_tinfo *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_1(VAR_5);

 FUNC_0(VAR_9, VAR_1);

 switch (VAR_6) {
 case 128:
  VAR_11 = FUNC_3(VAR_7);
  if (VAR_11 < 0 || VAR_11 >= VAR_9->sc_ntarg)
   break;


  FUNC_2(VAR_9, VAR_11, VAR_0);


  VAR_10 = &VAR_9->sc_tinfo[VAR_11];

  VAR_10->flags = ((VAR_9->sc_minsync != 0 &&
      (VAR_9->sc_cfflags & (1 << ((VAR_11 & 7) + 8))) == 0) ?
      0 : VAR_4) |
      ((VAR_9->sc_cfflags & (1 << (VAR_11 & 7))) == 0 ?
      0 : VAR_3);
  VAR_10->curr.period = VAR_10->goal.period = 0;
  VAR_10->curr.offset = VAR_10->goal.offset = 0;
  VAR_10->curr.width = VAR_10->goal.width = VAR_2;
  break;
 }
}
