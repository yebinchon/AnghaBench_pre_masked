
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsp_spos_instance {int nscb; int scb_highest_frag_index; TYPE_1__* scbs; } ;
struct TYPE_2__ {scalar_t__ deleted; } ;



__attribute__((used)) static int FUNC_0 (struct dsp_spos_instance * VAR_0)
{
 int VAR_1 = VAR_0->nscb, VAR_2;

 for (VAR_2 = VAR_0->scb_highest_frag_index; VAR_2 < VAR_0->nscb; ++VAR_2) {
  if (VAR_0->scbs[VAR_2].deleted) {
   VAR_1 = VAR_2;
   break;
  }
 }

 return VAR_1;
}
