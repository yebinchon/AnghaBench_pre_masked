
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct bhnd_pmu_query {int dummy; } ;
struct TYPE_4__ {int fref; scalar_t__ xf; } ;
typedef TYPE_1__ pmu1_xtaltab0_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct bhnd_pmu_query*,int ) ;
 int FUNC_2 (struct bhnd_pmu_query*,char*) ;
 TYPE_1__* FUNC_3 (struct bhnd_pmu_query*) ;
 TYPE_1__* FUNC_4 (struct bhnd_pmu_query*) ;

__attribute__((used)) static uint32_t
FUNC_5(struct bhnd_pmu_query *VAR_2)
{
 const pmu1_xtaltab0_t *VAR_3;
 uint32_t VAR_4;


 VAR_4 = FUNC_1(VAR_2, VAR_0);
 VAR_4 = FUNC_0(VAR_4, VAR_1);

 for (VAR_3 = FUNC_4(VAR_2); VAR_3 != ((void*)0) && VAR_3->fref != 0; VAR_3++) {
  if (VAR_3->xf == VAR_4)
   break;
 }


 if (VAR_3 == ((void*)0) || VAR_3->fref == 0)
  VAR_3 = FUNC_3(VAR_2);

 if (VAR_3 == ((void*)0) || VAR_3->fref == 0) {
  FUNC_2(VAR_2, "no matching ALP/XTAL frequency found\n");
  return (0);
 }

 return (VAR_3->fref * 1000);
}
