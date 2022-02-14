
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct time_fixture {int time; int config; } ;
struct ptunit_result {int dummy; } ;
struct pt_packet_tsc {int tsc; } ;


 int FUNC_0 (int *,int *,int *,int *) ;
 int FUNC_1 (int *,struct pt_packet_tsc*,int *) ;
 int FUNC_2 (int,int ) ;
 struct ptunit_result FUNC_3 () ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct time_fixture *VAR_0)
{
 struct pt_packet_tsc VAR_1;
 uint64_t VAR_2;
 uint32_t VAR_3, VAR_4;
 int VAR_5;

 VAR_1.tsc = 0xdedededeull;

 VAR_5 = FUNC_1(&VAR_0->time, &VAR_1, &VAR_0->config);
 FUNC_2(VAR_5, 0);

 VAR_5 = FUNC_0(&VAR_2, &VAR_3, &VAR_4, &VAR_0->time);
 FUNC_2(VAR_5, 0);

 FUNC_4(VAR_2, 0xdedededeull);
 FUNC_4(VAR_3, 0);
 FUNC_4(VAR_4, 0);

 return FUNC_3();
}
