
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhnd_pmu_query {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct bhnd_pmu_query*,int ) ;
 int FUNC_2 (struct bhnd_pmu_query*,char*,int,int,int,int,int) ;
 int FUNC_3 (struct bhnd_pmu_query*) ;
 int FUNC_4 (struct bhnd_pmu_query*) ;

__attribute__((used)) static uint32_t
FUNC_5(struct bhnd_pmu_query *VAR_9)
{
 uint32_t VAR_10, VAR_11;




 uint32_t VAR_12 = FUNC_4(VAR_9);


 VAR_10 = FUNC_1(VAR_9, VAR_6);
 VAR_11 = FUNC_0(VAR_10, VAR_2);
 return (VAR_12 / VAR_11 * 1000);
}
