
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_server_stats {int extended; } ;
struct config_file {int stat_extended; } ;


 int FUNC_0 (struct ub_server_stats*,int ,int) ;

void FUNC_1(struct ub_server_stats* VAR_0, struct config_file* VAR_1)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->extended = VAR_1->stat_extended;
}
