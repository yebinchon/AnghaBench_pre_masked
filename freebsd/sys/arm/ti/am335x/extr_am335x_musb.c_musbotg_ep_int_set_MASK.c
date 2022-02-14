
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct musbotg_super_softc {int dummy; } ;
struct musbotg_softc {struct musbotg_super_softc* sc_platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct musbotg_super_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct musbotg_softc *VAR_4, int VAR_5, int VAR_6)
{
 struct musbotg_super_softc *VAR_7 = VAR_4->sc_platform_data;
 uint32_t VAR_8;

 VAR_8 = ((1 << VAR_5) << VAR_0);
 VAR_8 |= ((1 << VAR_5) << VAR_1);
 if (VAR_6)
  FUNC_0(VAR_7, VAR_3, VAR_8);
 else
  FUNC_0(VAR_7, VAR_2, VAR_8);
}
