
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct run_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct run_softc*,int ,char*,...) ;
 int FUNC_1 (struct run_softc*,int ) ;
 int FUNC_2 (struct run_softc*,int) ;
 int FUNC_3 (struct run_softc*,int ,int*) ;
 int FUNC_4 (struct run_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct run_softc *VAR_7)
{
 uint32_t VAR_8;

 FUNC_1(VAR_7, VAR_0);






 FUNC_3(VAR_7, VAR_1, &VAR_8);
 FUNC_0(VAR_7, VAR_6, "debug reg %08x\n", VAR_8);
 if ((VAR_8 & (1 << 29)) && (VAR_8 & (1 << 7 | 1 << 5))) {
  FUNC_0(VAR_7, VAR_6,
      "CTS-to-self livelock detected\n");
  FUNC_4(VAR_7, VAR_4, VAR_3);
  FUNC_2(VAR_7, 1);
  FUNC_4(VAR_7, VAR_4,
      VAR_2 | VAR_5);
 }
}
