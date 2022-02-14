
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_func_sp_drv_ops {int (* init_hw_port ) (struct bxe_softc*) ;} ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,struct ecore_func_sp_drv_ops const*) ;
 int FUNC_1 (struct bxe_softc*) ;

__attribute__((used)) static inline int FUNC_2(struct bxe_softc *VAR_0,
           const struct ecore_func_sp_drv_ops *VAR_1)
{
 int VAR_2 = VAR_1->init_hw_port(VAR_0);
 if (VAR_2)
  return VAR_2;

 return FUNC_0(VAR_0, VAR_1);
}
