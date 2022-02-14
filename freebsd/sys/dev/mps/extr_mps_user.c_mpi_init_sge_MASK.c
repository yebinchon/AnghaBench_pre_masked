
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mps_command {int cm_sglsize; void* cm_sge; TYPE_1__* cm_sc; } ;
struct TYPE_2__ {scalar_t__ reqframesz; } ;


 int FUNC_0 (int,char*) ;

void
FUNC_1(struct mps_command *VAR_0, void *VAR_1, void *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = (int)VAR_0->cm_sc->reqframesz;
 VAR_3 = (uintptr_t)VAR_2 - (uintptr_t)VAR_1;

 FUNC_0(VAR_3 < VAR_4, ("bad pointers %p %p, off %d, space %d",
            VAR_1, VAR_2, VAR_3, VAR_4));

 VAR_0->cm_sge = VAR_2;
 VAR_0->cm_sglsize = VAR_4 - VAR_3;
}
