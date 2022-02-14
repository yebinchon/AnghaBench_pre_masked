
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proto_conn {scalar_t__ pc_magic; int pc_ctx; TYPE_1__* pc_proto; } ;
struct TYPE_2__ {int (* prt_local_address ) (int ,char*,size_t) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,size_t) ;

void
FUNC_2(const struct proto_conn *VAR_1, char *VAR_2, size_t VAR_3)
{

 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_1->pc_magic == VAR_0);
 FUNC_0(VAR_1->pc_proto != ((void*)0));
 FUNC_0(VAR_1->pc_proto->prt_local_address != ((void*)0));

 VAR_1->pc_proto->prt_local_address(VAR_1->pc_ctx, VAR_2, VAR_3);
}
