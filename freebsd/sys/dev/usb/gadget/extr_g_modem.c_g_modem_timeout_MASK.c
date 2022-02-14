
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_modem_softc {int * sc_xfer; scalar_t__* sc_pattern; int sc_pattern_len; int sc_mode; } ;


 int FUNC_0 (int,char*,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct g_modem_softc*) ;
 int FUNC_2 (scalar_t__*,int ,int) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_6)
{
 struct g_modem_softc *VAR_7 = VAR_6;

 VAR_7->sc_mode = VAR_4;

 FUNC_2(VAR_7->sc_pattern, VAR_5, sizeof(VAR_7->sc_pattern));

 VAR_7->sc_pattern[VAR_3 - 1] = 0;

 VAR_7->sc_pattern_len = FUNC_3(VAR_7->sc_pattern);

 FUNC_0(11, "Timeout %p\n", VAR_7->sc_xfer[VAR_2]);

 FUNC_4(VAR_7->sc_xfer[VAR_1]);
 FUNC_4(VAR_7->sc_xfer[VAR_0]);

 FUNC_1(VAR_7);
}
