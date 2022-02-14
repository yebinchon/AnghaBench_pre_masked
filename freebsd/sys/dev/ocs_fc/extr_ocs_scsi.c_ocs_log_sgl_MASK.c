
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int sli4_sge_t ;
struct TYPE_7__ {TYPE_3__* hio; } ;
typedef TYPE_2__ ocs_io_t ;
struct TYPE_6__ {int * virt; int phys; } ;
struct TYPE_8__ {scalar_t__ n_sge; scalar_t__ def_sgl_count; TYPE_1__* ovfl_sgl; TYPE_1__* sgl; TYPE_1__ def_sgl; } ;
typedef TYPE_3__ ocs_hw_io_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*,scalar_t__,scalar_t__,...) ;

__attribute__((used)) static void FUNC_3(ocs_io_t *VAR_0)
{
 ocs_hw_io_t *VAR_1 = VAR_0->hio;
 sli4_sge_t *VAR_2 = ((void*)0);
 uint32_t *VAR_3 = ((void*)0);
 uint32_t VAR_4;
 uint32_t VAR_5;

 FUNC_2(VAR_0, "def_sgl at 0x%x 0x%08x\n",
        FUNC_0(VAR_1->def_sgl.phys),
        FUNC_1(VAR_1->def_sgl.phys));
 VAR_5 = (VAR_1->sgl == &VAR_1->def_sgl ? VAR_1->n_sge : VAR_1->def_sgl_count);
 for (VAR_4 = 0, VAR_2 = VAR_1->def_sgl.virt; VAR_4 < VAR_5; VAR_4++, VAR_2++) {
  VAR_3 = (uint32_t*)VAR_2;

  FUNC_2(VAR_0, "SGL %2d 0x%08x 0x%08x 0x%08x 0x%08x\n",
    VAR_4, VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3]);

  if (VAR_3[2] & (1U << 31)) {
   break;
  }
 }

 if (VAR_1->ovfl_sgl != ((void*)0) &&
  VAR_1->sgl == VAR_1->ovfl_sgl) {
  FUNC_2(VAR_0, "Overflow at 0x%x 0x%08x\n",
         FUNC_0(VAR_1->ovfl_sgl->phys),
         FUNC_1(VAR_1->ovfl_sgl->phys));
  for (VAR_4 = 0, VAR_2 = VAR_1->ovfl_sgl->virt; VAR_4 < VAR_1->n_sge; VAR_4++, VAR_2++) {
   VAR_3 = (uint32_t*)VAR_2;

   FUNC_2(VAR_0, "SGL %2d 0x%08x 0x%08x 0x%08x 0x%08x\n",
     VAR_4, VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3]);
   if (VAR_3[2] & (1U << 31)) {
    break;
   }
  }
 }

}
