
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ size; } ;
struct TYPE_4__ {TYPE_3__ ovfl_sgl; int ocs; } ;
typedef TYPE_1__ ocs_io_t ;


 int FUNC_0 (int ,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_1(ocs_io_t *VAR_0) {
 if (VAR_0->ovfl_sgl.size) {
  FUNC_0(VAR_0->ocs, &VAR_0->ovfl_sgl);
 }
}
