
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct time_fixture {int time; int config; } ;
struct ptunit_result {int dummy; } ;
struct pt_packet_cbr {int ratio; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,struct pt_packet_cbr*,int *) ;
 int FUNC_2 (int,int ) ;
 struct ptunit_result FUNC_3 () ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct time_fixture *VAR_0)
{
 struct pt_packet_cbr VAR_1;
 uint32_t VAR_2;
 int VAR_3;

 VAR_1.ratio = 0x38;

 VAR_3 = FUNC_1(&VAR_0->time, &VAR_1, &VAR_0->config);
 FUNC_2(VAR_3, 0);

 VAR_3 = FUNC_0(&VAR_2, &VAR_0->time);
 FUNC_2(VAR_3, 0);

 FUNC_4(VAR_2, 0x38);

 return FUNC_3();
}
