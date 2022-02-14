
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct musbotg_super_softc {int dummy; } ;
struct musbotg_softc {int sc_id; struct musbotg_super_softc* sc_platform_data; } ;


 int FUNC_0 (int,char*,int ,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct musbotg_super_softc*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct musbotg_super_softc*,int ,int) ;
 int FUNC_3 (void*,int,int,int) ;
 int FUNC_4 (struct musbotg_softc*,int) ;

__attribute__((used)) static void
FUNC_5(void *VAR_4)
{
 struct musbotg_softc *VAR_5 = VAR_4;
 struct musbotg_super_softc *VAR_6 = VAR_5->sc_platform_data;
 uint32_t VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_1(VAR_6, VAR_3);
 VAR_8 = FUNC_1(VAR_6, VAR_1);
 VAR_9 = FUNC_1(VAR_6, VAR_2);
 if (VAR_8)
  FUNC_2(VAR_6, VAR_1, VAR_8);
 if (VAR_9)
  FUNC_2(VAR_6, VAR_2, VAR_9);

 FUNC_0(4, "port%d: stat0=%08x stat1=%08x, stat=%08x\n",
     VAR_5->sc_id, VAR_8, VAR_9, VAR_7);

 if (VAR_9 & VAR_0)
  FUNC_4(VAR_5, VAR_7 & 1);

 FUNC_3(VAR_4, ((VAR_8 >> 16) & 0xffff),
     VAR_8 & 0xffff, VAR_9 & 0xff);
}
