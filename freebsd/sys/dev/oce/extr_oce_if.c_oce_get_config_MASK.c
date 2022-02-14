
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_6__ {int max_vlans; void* nwqs; void* nrssqs; scalar_t__ nrqs; int be3_native; } ;
typedef TYPE_1__* POCE_SOFTC ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_2 (TYPE_1__*,void*) ;

__attribute__((used)) static void
FUNC_3(POCE_SOFTC VAR_4)
{
 int VAR_5 = 0;
 uint32_t VAR_6 = 0;

 if ((FUNC_0(VAR_4) || FUNC_1(VAR_4)) && (!VAR_4->be3_native))
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_2;

 if (!FUNC_0(VAR_4)) {
  VAR_5 = FUNC_2(VAR_4, VAR_6);
  if (VAR_5) {
   VAR_4->nwqs = VAR_3;
   VAR_4->nrssqs = VAR_6;
   VAR_4->nrqs = VAR_4->nrssqs + 1;
  }
 }
 else {
  VAR_4->nrssqs = VAR_6;
  VAR_4->nrqs = VAR_4->nrssqs + 1;
  VAR_4->nwqs = VAR_3;
  VAR_4->max_vlans = VAR_0;
 }
}
