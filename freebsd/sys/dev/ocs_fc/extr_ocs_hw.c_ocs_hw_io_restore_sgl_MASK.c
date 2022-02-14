
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ocs_hw_t ;
struct TYPE_3__ {int * ovfl_lsp; scalar_t__ ovfl_sgl_count; int * ovfl_sgl; int * ovfl_io; int def_sgl_count; int sgl_count; int def_sgl; int * sgl; } ;
typedef TYPE_1__ ocs_hw_io_t ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(ocs_hw_t *VAR_0, ocs_hw_io_t *VAR_1)
{

 VAR_1->sgl = &VAR_1->def_sgl;
 VAR_1->sgl_count = VAR_1->def_sgl_count;
 if (VAR_1->ovfl_io != ((void*)0)) {
  FUNC_0(VAR_0, VAR_1->ovfl_io);
  VAR_1->ovfl_io = ((void*)0);
 }


 VAR_1->ovfl_sgl = ((void*)0);
 VAR_1->ovfl_sgl_count = 0;
 VAR_1->ovfl_lsp = ((void*)0);
}
