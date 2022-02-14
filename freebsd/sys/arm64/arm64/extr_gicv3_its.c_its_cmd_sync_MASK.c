
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct its_cmd {int dummy; } ;
struct gicv3_its_softc {int sc_its_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;

__attribute__((used)) static inline void
FUNC_2(struct gicv3_its_softc *VAR_2, struct its_cmd *VAR_3)
{

 if ((VAR_2->sc_its_flags & VAR_0) != 0) {

  FUNC_0((vm_offset_t)VAR_3, sizeof(*VAR_3));
 } else {

  FUNC_1(VAR_1);
 }

}
