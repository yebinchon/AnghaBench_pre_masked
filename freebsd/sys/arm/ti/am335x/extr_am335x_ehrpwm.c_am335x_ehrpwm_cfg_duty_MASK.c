
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct am335x_ehrpwm_softc {size_t sc_clktick; TYPE_1__* sc_channels; } ;
struct TYPE_2__ {size_t duty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct am335x_ehrpwm_softc*,int ,size_t) ;
 int FUNC_1 (struct am335x_ehrpwm_softc*) ;
 size_t FUNC_2 (int,size_t) ;

__attribute__((used)) static void
FUNC_3(struct am335x_ehrpwm_softc *VAR_2, u_int VAR_3, u_int VAR_4)
{
 u_int VAR_5;

 if (VAR_4 == 0)
  VAR_5 = 0;
 else
  VAR_5 = FUNC_2(1, VAR_4 / VAR_2->sc_clktick);

 VAR_2->sc_channels[VAR_3].duty = VAR_5 * VAR_2->sc_clktick;

 FUNC_1(VAR_2);
 FUNC_0(VAR_2, (VAR_3 == 0) ? VAR_0 : VAR_1, VAR_5);
}
