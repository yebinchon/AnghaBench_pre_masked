
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct bhnd_pmu_query {int dummy; } ;
struct TYPE_3__ {int freq; scalar_t__ xf; } ;
typedef TYPE_1__ pmu0_xtaltab0_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct bhnd_pmu_query*,int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static uint32_t
FUNC_3(struct bhnd_pmu_query *VAR_3)
{
 const pmu0_xtaltab0_t *VAR_4;
 uint32_t VAR_5;


 VAR_5 = FUNC_1(VAR_3, VAR_0);
 VAR_5 = FUNC_0(VAR_5, VAR_1);
 for (VAR_4 = VAR_2; VAR_4->freq; VAR_4++)
  if (VAR_4->xf == VAR_5)
   break;


 if (VAR_4 == ((void*)0) || VAR_4->freq == 0)
  FUNC_2("unsupported frequency: %u", VAR_5);

 return (VAR_4->freq * 1000);
}
