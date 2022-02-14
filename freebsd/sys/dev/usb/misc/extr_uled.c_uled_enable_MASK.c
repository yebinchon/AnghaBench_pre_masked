
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uled_softc {int sc_flags; int sc_mtx; int sc_state; } ;
typedef int cmdbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uled_softc*,int ,int ,int,int ,int *,int) ;

__attribute__((used)) static int
FUNC_3(struct uled_softc *VAR_6)
{
 uint8_t *VAR_7;
 int VAR_8;

 VAR_7 = (VAR_6->sc_flags & VAR_1) ? VAR_4 : VAR_5;

 VAR_6->sc_state |= VAR_0;
 FUNC_0(&VAR_6->sc_mtx);
 VAR_8 = FUNC_2(VAR_6, VAR_3, VAR_2,
     0x200, 0, VAR_7, sizeof(VAR_7));
 FUNC_1(&VAR_6->sc_mtx);
 return (VAR_8);
}
