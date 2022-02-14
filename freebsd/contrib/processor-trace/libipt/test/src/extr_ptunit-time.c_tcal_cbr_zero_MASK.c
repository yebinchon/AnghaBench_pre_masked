
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_config {int nom_freq; } ;
struct time_fixture {int tcal; struct pt_config config; } ;
struct ptunit_result {int dummy; } ;
struct pt_packet_cbr {scalar_t__ ratio; } ;


 int FUNC_0 (int *,struct pt_packet_cbr*,struct pt_config*) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct time_fixture *VAR_1)
{
 struct pt_packet_cbr VAR_2;
 struct pt_config VAR_3;
 int VAR_4;

 VAR_3 = VAR_1->config;
 VAR_3.nom_freq = 1;
 VAR_2.ratio = 0;

 VAR_4 = FUNC_0(&VAR_1->tcal, &VAR_2, &VAR_3);
 FUNC_1(VAR_4, -VAR_0);

 return FUNC_2();
}
