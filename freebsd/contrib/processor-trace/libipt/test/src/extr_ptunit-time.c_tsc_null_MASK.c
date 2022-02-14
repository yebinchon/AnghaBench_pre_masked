
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct time_fixture {int config; int time; } ;
struct ptunit_result {int dummy; } ;
struct pt_packet_tsc {int dummy; } ;


 int FUNC_0 (int *,struct pt_packet_tsc*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct time_fixture *VAR_1)
{
 struct pt_packet_tsc VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(((void*)0), &VAR_2, &VAR_1->config);
 FUNC_1(VAR_3, -VAR_0);

 VAR_3 = FUNC_0(&VAR_1->time, ((void*)0), &VAR_1->config);
 FUNC_1(VAR_3, -VAR_0);

 return FUNC_2();
}
