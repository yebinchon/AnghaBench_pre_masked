
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct time_fixture {int time; int config; } ;
struct ptunit_result {int dummy; } ;
struct pt_packet_mtc {int ctc; } ;


 int FUNC_0 (int *,int *,int *,int *) ;
 int FUNC_1 (int *,struct pt_packet_mtc*,int *) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 struct ptunit_result FUNC_3 () ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct time_fixture *VAR_1)
{
 struct pt_packet_mtc VAR_2;
 uint64_t VAR_3;
 int VAR_4;

 VAR_2.ctc = 0xdc;

 VAR_4 = FUNC_1(&VAR_1->time, &VAR_2, &VAR_1->config);
 FUNC_2(VAR_4, 0);

 VAR_4 = FUNC_0(&VAR_3, ((void*)0), ((void*)0), &VAR_1->time);
 FUNC_2(VAR_4, -VAR_0);

 return FUNC_3();
}
