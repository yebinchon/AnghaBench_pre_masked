
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct mv_pcib_softc {int sc_bsh; int sc_bst; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 struct mv_pcib_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct mv_pcib_softc*,int ,int ,int ,int ,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_2, u_int VAR_3, u_int VAR_4, u_int VAR_5,
    u_int VAR_6, uint32_t VAR_7, int VAR_8)
{
 struct mv_pcib_softc *VAR_9 = FUNC_1(VAR_2);


 if ((FUNC_0(VAR_9->sc_bst, VAR_9->sc_bsh, VAR_0) &
     VAR_1) || FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5))
  return;

 FUNC_2(VAR_9, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
