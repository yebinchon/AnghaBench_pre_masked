
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct gicv3_its_softc {scalar_t__ sc_conf_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (void*,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct gicv3_its_softc *VAR_7)
{

 VAR_7->sc_conf_base = (vm_offset_t)FUNC_0(VAR_3,
     VAR_5, VAR_6, 0, VAR_2, VAR_1,
     0);


 FUNC_2((void *)VAR_7->sc_conf_base, VAR_0 | VAR_4,
     VAR_3);


 FUNC_1(VAR_7->sc_conf_base, VAR_3);
}
