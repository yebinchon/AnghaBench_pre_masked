
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mge_softc {TYPE_1__* ifp; } ;
struct TYPE_2__ {int if_capenable; } ;


 int VAR_0 ;
 int FUNC_0 (struct mge_softc*) ;
 int FUNC_1 (struct mge_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct mge_softc*,int ) ;
 int FUNC_3 (struct mge_softc*) ;
 int FUNC_4 (struct mge_softc*) ;
 int FUNC_5 (struct mge_softc*,int ,int) ;
 int FUNC_6 (struct mge_softc*,int,int) ;
 int FUNC_7 (struct mge_softc*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_5)
{
 struct mge_softc *VAR_6;
 uint32_t VAR_7, VAR_8;

 VAR_6 = VAR_5;
 FUNC_0(VAR_6);
 VAR_7 = FUNC_2(VAR_6, VAR_1);
 VAR_8 = FUNC_2(VAR_6, VAR_2);


 if (VAR_8 & (VAR_3 |
     VAR_4)) {
  FUNC_5(VAR_6, VAR_2, ~(VAR_8 &
      (VAR_3 | VAR_4)));
  FUNC_7(VAR_6);
 }

 FUNC_4(VAR_6);


 FUNC_6(VAR_6, VAR_7, VAR_8);

 FUNC_3(VAR_6);
}
