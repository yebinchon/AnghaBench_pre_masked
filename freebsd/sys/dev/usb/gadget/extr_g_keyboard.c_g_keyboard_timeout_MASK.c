
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_keyboard_softc {int * sc_xfer; scalar_t__* sc_pattern; int sc_pattern_len; int sc_mode; } ;


 int FUNC_0 (int,char*,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct g_keyboard_softc*) ;
 int FUNC_2 (scalar_t__*,int ,int) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_4)
{
 struct g_keyboard_softc *VAR_5 = VAR_4;

 VAR_5->sc_mode = VAR_3;

 FUNC_2(VAR_5->sc_pattern, VAR_2, sizeof(VAR_5->sc_pattern));

 VAR_5->sc_pattern[VAR_1 - 1] = 0;

 VAR_5->sc_pattern_len = FUNC_3(VAR_5->sc_pattern);

 FUNC_0(11, "Timeout %p\n", VAR_5->sc_xfer[VAR_0]);

 FUNC_4(VAR_5->sc_xfer[VAR_0]);

 FUNC_1(VAR_5);
}
