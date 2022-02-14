
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_3__ {size_t num_cfg_blocks; } ;
struct siba_devinfo {TYPE_2__** cfg_res; TYPE_1__ core_id; } ;
typedef int device_t ;
struct TYPE_4__ {int res; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_1, struct siba_devinfo *VAR_2) {
 for (u_int VAR_3 = 0; VAR_3 < VAR_2->core_id.num_cfg_blocks; VAR_3++) {
  if (VAR_2->cfg_res[VAR_3] == ((void*)0))
   continue;

  FUNC_0(FUNC_1(VAR_1), VAR_1,
      VAR_0, VAR_2->cfg_res[VAR_3]->res);
 }
}
