
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct time_fixture {int time; int config; int tcal; } ;
struct ptunit_result {int dummy; } ;
struct pt_packet_cyc {int value; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *,int *) ;
 int FUNC_2 (int *,struct pt_packet_cyc*,int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int,int ) ;
 struct ptunit_result FUNC_4 () ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct time_fixture *VAR_1)
{
 struct pt_packet_cyc VAR_2;
 uint64_t VAR_3, VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_3, &VAR_1->tcal);
 FUNC_3(VAR_5, 0);

 VAR_2.value = 0xdc;

 VAR_5 = FUNC_2(&VAR_1->time, &VAR_2, &VAR_1->config, VAR_3);
 FUNC_3(VAR_5, 0);

 VAR_5 = FUNC_1(&VAR_4, ((void*)0), ((void*)0), &VAR_1->time);
 FUNC_3(VAR_5, -VAR_0);

 return FUNC_4();
}
