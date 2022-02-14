
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int ;
struct atp_softc {int sc_n_strokes; int sc_state; } ;
struct TYPE_9__ {int cum; int loc; } ;
typedef TYPE_2__ fg_pspan ;
struct TYPE_11__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_10__ {int matched; int age; TYPE_4__ ctime; TYPE_1__* components; int y; int x; int type; } ;
typedef TYPE_3__ atp_stroke_t ;
struct TYPE_8__ {int matched; int loc; int max_cum_pressure; int cum_pressure; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ,int ,unsigned long) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 TYPE_3__* FUNC_1 (struct atp_softc*) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_3(struct atp_softc *VAR_5, const fg_pspan *VAR_6,
    const fg_pspan *VAR_7)
{
 atp_stroke_t *VAR_8;

 VAR_8 = FUNC_1(VAR_5);
 if (VAR_8 == ((void*)0))
  return;






 VAR_8->type = VAR_2;
 VAR_8->matched = 0;
 FUNC_2(&VAR_8->ctime);
 VAR_8->age = 1;
 VAR_8->x = VAR_6->loc;
 VAR_8->y = VAR_7->loc;

 VAR_8->components[VAR_3].loc = VAR_6->loc;
 VAR_8->components[VAR_3].cum_pressure = VAR_6->cum;
 VAR_8->components[VAR_3].max_cum_pressure = VAR_6->cum;
 VAR_8->components[VAR_3].matched = 1;

 VAR_8->components[VAR_4].loc = VAR_7->loc;
 VAR_8->components[VAR_4].cum_pressure = VAR_7->cum;
 VAR_8->components[VAR_4].max_cum_pressure = VAR_7->cum;
 VAR_8->components[VAR_4].matched = 1;

 if (VAR_5->sc_n_strokes > 1) {

  VAR_5->sc_state &= ~VAR_0;
 }

 FUNC_0(VAR_1, "[%u,%u], time: %u,%ld\n",
     VAR_8->components[VAR_3].loc,
     VAR_8->components[VAR_4].loc,
     (u_int)VAR_8->ctime.tv_sec,
     (unsigned long int)VAR_8->ctime.tv_usec);
}
