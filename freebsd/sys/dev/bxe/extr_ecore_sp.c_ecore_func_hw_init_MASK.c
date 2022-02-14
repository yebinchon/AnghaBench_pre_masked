
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int load_phase; } ;
struct TYPE_4__ {TYPE_1__ hw_init; } ;
struct ecore_func_state_params {struct ecore_func_sp_obj* f_obj; TYPE_2__ params; } ;
struct ecore_func_sp_obj {int (* complete_cmd ) (struct bxe_softc*,struct ecore_func_sp_obj*,int ) ;struct ecore_func_sp_drv_ops* drv; } ;
struct ecore_func_sp_drv_ops {int (* gunzip_init ) (struct bxe_softc*) ;int (* init_fw ) (struct bxe_softc*) ;int (* gunzip_end ) (struct bxe_softc*) ;} ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct bxe_softc*,char*,int ,int) ;




 int FUNC_3 (struct bxe_softc*,struct ecore_func_sp_drv_ops const*) ;
 int FUNC_4 (struct bxe_softc*,struct ecore_func_sp_drv_ops const*) ;
 int FUNC_5 (struct bxe_softc*,struct ecore_func_sp_drv_ops const*) ;
 int FUNC_6 (struct bxe_softc*,struct ecore_func_sp_drv_ops const*) ;
 int FUNC_7 (struct bxe_softc*) ;
 int FUNC_8 (struct bxe_softc*) ;
 int FUNC_9 (struct bxe_softc*) ;
 int FUNC_10 (struct bxe_softc*,struct ecore_func_sp_obj*,int ) ;

__attribute__((used)) static int FUNC_11(struct bxe_softc *VAR_2,
         struct ecore_func_state_params *VAR_3)
{
 uint32_t VAR_4 = VAR_3->params.hw_init.load_phase;
 struct ecore_func_sp_obj *VAR_5 = VAR_3->f_obj;
 const struct ecore_func_sp_drv_ops *VAR_6 = VAR_5->drv;
 int VAR_7 = 0;

 FUNC_2(VAR_2, "function %d  load_code %x\n",
    FUNC_0(VAR_2), VAR_4);


 VAR_7 = VAR_6->gunzip_init(VAR_2);
 if (VAR_7)
  return VAR_7;


 VAR_7 = VAR_6->init_fw(VAR_2);
 if (VAR_7) {
  FUNC_1("Error loading firmware\n");
  goto init_err;
 }


 switch (VAR_4) {
 case 130:
  VAR_7 = FUNC_4(VAR_2, VAR_6);
  if (VAR_7)
   goto init_err;

  break;
 case 131:
  VAR_7 = FUNC_3(VAR_2, VAR_6);
  if (VAR_7)
   goto init_err;

  break;
 case 128:
  VAR_7 = FUNC_6(VAR_2, VAR_6);
  if (VAR_7)
   goto init_err;

  break;
 case 129:
  VAR_7 = FUNC_5(VAR_2, VAR_6);
  if (VAR_7)
   goto init_err;

  break;
 default:
  FUNC_1("Unknown load_code (0x%x) from MCP\n", VAR_4);
  VAR_7 = VAR_1;
 }

init_err:
 VAR_6->gunzip_end(VAR_2);




 if (!VAR_7)
  VAR_5->complete_cmd(VAR_2, VAR_5, VAR_0);

 return VAR_7;
}
