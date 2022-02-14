
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahd_softc {int flags; } ;
typedef int ahd_mode_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ahd_softc*,int ) ;
 char* FUNC_1 (struct ahd_softc*) ;
 int FUNC_2 (struct ahd_softc*,int ,int) ;
 int FUNC_3 (struct ahd_softc*,int ) ;
 int FUNC_4 (struct ahd_softc*) ;
 int FUNC_5 (struct ahd_softc*,int ,int ) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static void
FUNC_7(struct ahd_softc *VAR_11)
{
 ahd_mode_state VAR_12;

 VAR_12 = FUNC_4(VAR_11);
 FUNC_5(VAR_11, VAR_1, VAR_1);
 FUNC_2(VAR_11, VAR_4, FUNC_0(VAR_11, VAR_4)
        | VAR_3 | VAR_7 | VAR_9);
 FUNC_2(VAR_11, VAR_8, FUNC_0(VAR_11, VAR_8) | (VAR_6|VAR_5));




 FUNC_3(VAR_11, VAR_12);
 VAR_11->flags &= ~VAR_0;
}
