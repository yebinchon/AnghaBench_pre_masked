
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_exeq_elem {int dummy; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,struct ecore_exeq_elem*,int) ;
 int FUNC_1 (struct bxe_softc*,char*) ;

__attribute__((used)) static inline void FUNC_2(struct bxe_softc *VAR_0,
          struct ecore_exeq_elem *VAR_1)
{
 FUNC_1(VAR_0, "Deleting an exe_queue element\n");
 FUNC_0(VAR_0, VAR_1, sizeof(*VAR_1));
}
