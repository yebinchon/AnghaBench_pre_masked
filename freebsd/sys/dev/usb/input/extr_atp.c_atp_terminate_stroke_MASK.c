
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct atp_softc {int sc_state; int sc_callout; } ;
struct TYPE_4__ {int flags; scalar_t__ age; scalar_t__ type; } ;
typedef TYPE_1__ atp_stroke_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct atp_softc*,TYPE_1__*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *,int ,int ,struct atp_softc*) ;

__attribute__((used)) static void
FUNC_2(struct atp_softc *VAR_7, atp_stroke_t *VAR_8)
{
 if (VAR_8->flags & VAR_4)
  return;


 if (VAR_8->age <= VAR_6) {
  FUNC_0(VAR_7, VAR_8);
  return;
 }

 VAR_8->flags |= VAR_4;
 VAR_7->sc_state |= VAR_2;

 FUNC_1(&VAR_7->sc_callout, VAR_3,
     VAR_5, VAR_7);





 if (VAR_8->type == VAR_1)
  VAR_7->sc_state &= ~VAR_0;
}
