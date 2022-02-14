
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
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct bhnd_pmu_query*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct bhnd_pmu_query*,char*,int,int,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static uint32_t
FUNC_4(struct bhnd_pmu_query *VAR_13)
{
 uint32_t VAR_14, VAR_15;
 uint32_t VAR_16;





 VAR_16 = VAR_8;


 VAR_14 = FUNC_1(VAR_13, VAR_5);
 VAR_15 = FUNC_0(VAR_14, VAR_0);
 return VAR_16 / (VAR_15 + VAR_1) * 1000;
}
