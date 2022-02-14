
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid3_softc {int sc_name; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct g_raid3_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2)
{
 struct g_raid3_softc *VAR_3;

 VAR_3 = VAR_2;
 FUNC_0(0, "Force device %s start due to timeout.", VAR_3->sc_name);
 FUNC_1(VAR_3, 0,
     VAR_1 | VAR_0);
}
