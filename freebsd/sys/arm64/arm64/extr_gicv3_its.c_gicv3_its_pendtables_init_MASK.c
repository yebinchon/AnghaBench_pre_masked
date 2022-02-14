
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct gicv3_its_softc {scalar_t__* sc_pend_base; int sc_cpus; } ;


 scalar_t__ FUNC_0 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_3(struct gicv3_its_softc *VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_8 <= VAR_6; VAR_8++) {
  if (FUNC_0(VAR_8, &VAR_7->sc_cpus) == 0)
   continue;

  VAR_7->sc_pend_base[VAR_8] = (vm_offset_t)FUNC_1(
      VAR_2, VAR_3, VAR_4 | VAR_5,
      0, VAR_1, VAR_0, 0);


  FUNC_2((vm_offset_t)VAR_7->sc_pend_base[VAR_8],
      VAR_2);
 }
}
