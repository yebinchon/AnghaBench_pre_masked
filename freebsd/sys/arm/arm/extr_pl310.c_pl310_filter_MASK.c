
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pl310_softc {int sc_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct pl310_softc*,int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_3)
{
 struct pl310_softc *VAR_4 = VAR_3;
 uint32_t VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_2);

 if (!VAR_4->sc_enabled && (VAR_5 & VAR_1)) {





  FUNC_0("pl310: caches disabled but cache event detected\n");
 }

 return (VAR_0);
}
