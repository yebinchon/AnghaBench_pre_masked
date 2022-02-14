
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proto_conn {scalar_t__ pc_magic; scalar_t__ pc_side; int pc_ctx; TYPE_1__* pc_proto; } ;
struct TYPE_2__ {int (* prt_connect ) (int ,int) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;

int
FUNC_2(struct proto_conn *VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_3->pc_magic == VAR_0);
 FUNC_0(VAR_3->pc_side == VAR_1);
 FUNC_0(VAR_3->pc_proto != ((void*)0));
 FUNC_0(VAR_3->pc_proto->prt_connect != ((void*)0));
 FUNC_0(VAR_4 >= -1);

 VAR_5 = VAR_3->pc_proto->prt_connect(VAR_3->pc_ctx, VAR_4);
 if (VAR_5 != 0) {
  VAR_2 = VAR_5;
  return (-1);
 }

 return (0);
}
