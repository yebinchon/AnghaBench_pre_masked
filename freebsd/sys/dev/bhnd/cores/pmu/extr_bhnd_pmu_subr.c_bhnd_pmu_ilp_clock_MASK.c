
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhnd_pmu_query {int ilp_cps; } ;


 int FUNC_0 (struct bhnd_pmu_query*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;

uint32_t
FUNC_2(struct bhnd_pmu_query *VAR_2)
{
 uint32_t VAR_3, VAR_4, VAR_5;

 if (VAR_2->ilp_cps == 0) {
  VAR_3 = FUNC_0(VAR_2, VAR_0);
  FUNC_1(VAR_1);
  VAR_4 = FUNC_0(VAR_2, VAR_0);
  VAR_5 = VAR_4 - VAR_3;
  VAR_2->ilp_cps = VAR_5 * (1000 / VAR_1);
 }

 return (VAR_2->ilp_cps);
}
