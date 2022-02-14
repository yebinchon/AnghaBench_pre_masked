
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rp_stat; int ru; } ;
struct rpc_msg {int rm_direction; TYPE_1__ rm_reply; int rm_xid; } ;
typedef int enum_t ;
typedef enum reply_stat { ____Placeholder_reply_stat } reply_stat ;
typedef enum msg_type { ____Placeholder_msg_type } msg_type ;
typedef int caddr_t ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int ,int ,int ) ;

bool_t
FUNC_4(XDR *VAR_4, struct rpc_msg *VAR_5)
{
 enum msg_type *VAR_6;
 enum reply_stat *VAR_7;

 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(VAR_5 != ((void*)0));

 VAR_6 = &VAR_5->rm_direction;
 VAR_7 = &VAR_5->rm_reply.rp_stat;

 if (
     FUNC_2(VAR_4, &(VAR_5->rm_xid)) &&
     FUNC_1(VAR_4, (enum_t *) VAR_6) &&
     (VAR_5->rm_direction == VAR_2) )
  return (FUNC_3(VAR_4, (enum_t *) VAR_7,
     (caddr_t)(void *)&(VAR_5->rm_reply.ru), VAR_3,
     VAR_1));
 return (VAR_0);
}
