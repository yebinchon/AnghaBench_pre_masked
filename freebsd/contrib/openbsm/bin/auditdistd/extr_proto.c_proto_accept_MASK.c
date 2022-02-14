
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proto_conn {scalar_t__ pc_magic; scalar_t__ pc_side; int pc_ctx; TYPE_1__* pc_proto; } ;
struct TYPE_2__ {int (* prt_accept ) (int ,int *) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct proto_conn* FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct proto_conn*) ;
 int FUNC_3 (int ,int *) ;

int
FUNC_4(struct proto_conn *VAR_4, struct proto_conn **VAR_5)
{
 struct proto_conn *VAR_6;
 int VAR_7;

 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(VAR_4->pc_magic == VAR_0);
 FUNC_0(VAR_4->pc_side == VAR_1);
 FUNC_0(VAR_4->pc_proto != ((void*)0));
 FUNC_0(VAR_4->pc_proto->prt_accept != ((void*)0));

 VAR_6 = FUNC_1(VAR_4->pc_proto, VAR_2);
 if (VAR_6 == ((void*)0))
  return (-1);

 VAR_7 = VAR_4->pc_proto->prt_accept(VAR_4->pc_ctx, &VAR_6->pc_ctx);
 if (VAR_7 != 0) {
  FUNC_2(VAR_6);
  VAR_3 = VAR_7;
  return (-1);
 }

 *VAR_5 = VAR_6;

 return (0);
}
