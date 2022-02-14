
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int id_hdr_size; } ;
struct perf_session {int machines; TYPE_1__ host_machine; int evlist; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct perf_session *VAR_0)
{
 u16 VAR_1 = FUNC_1(VAR_0->evlist);

 VAR_0->host_machine.id_hdr_size = VAR_1;
 FUNC_0(&VAR_0->machines, VAR_1);
}
