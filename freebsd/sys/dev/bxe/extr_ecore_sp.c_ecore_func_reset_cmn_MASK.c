
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_func_sp_drv_ops {int (* reset_hw_cmn ) (struct bxe_softc*) ;} ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,struct ecore_func_sp_drv_ops const*) ;
 int FUNC_1 (struct bxe_softc*) ;

__attribute__((used)) static inline void FUNC_2(struct bxe_softc *VAR_0,
     const struct ecore_func_sp_drv_ops *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 VAR_1->reset_hw_cmn(VAR_0);
}
