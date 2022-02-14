
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int reset_phase; } ;
struct TYPE_4__ {TYPE_1__ hw_reset; } ;
struct ecore_func_state_params {struct ecore_func_sp_obj* f_obj; TYPE_2__ params; } ;
struct ecore_func_sp_obj {int (* complete_cmd ) (struct bxe_softc*,struct ecore_func_sp_obj*,int ) ;struct ecore_func_sp_drv_ops* drv; } ;
struct ecore_func_sp_drv_ops {int dummy; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int FUNC_2 (struct bxe_softc*,char*,int ,int) ;
 int VAR_1 ;



 int FUNC_3 (struct bxe_softc*,struct ecore_func_sp_drv_ops const*) ;
 int FUNC_4 (struct bxe_softc*,struct ecore_func_sp_drv_ops const*) ;
 int FUNC_5 (struct bxe_softc*,struct ecore_func_sp_drv_ops const*) ;
 int FUNC_6 (struct bxe_softc*,struct ecore_func_sp_obj*,int ) ;

__attribute__((used)) static inline int FUNC_7(struct bxe_softc *VAR_2,
          struct ecore_func_state_params *VAR_3)
{
 uint32_t VAR_4 = VAR_3->params.hw_reset.reset_phase;
 struct ecore_func_sp_obj *VAR_5 = VAR_3->f_obj;
 const struct ecore_func_sp_drv_ops *VAR_6 = VAR_5->drv;

 FUNC_2(VAR_2, "function %d  reset_phase %x\n", FUNC_0(VAR_2),
    VAR_4);

 switch (VAR_4) {
 case 130:
  FUNC_3(VAR_2, VAR_6);
  break;
 case 128:
  FUNC_5(VAR_2, VAR_6);
  break;
 case 129:
  FUNC_4(VAR_2, VAR_6);
  break;
 default:
  FUNC_1("Unknown reset_phase (0x%x) from MCP\n",
     VAR_4);
  break;
 }


 VAR_5->complete_cmd(VAR_2, VAR_5, VAR_0);

 return VAR_1;
}
