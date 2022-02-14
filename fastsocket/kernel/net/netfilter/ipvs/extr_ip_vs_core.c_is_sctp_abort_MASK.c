
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
typedef int sctp_sctphdr_t ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ sctp_chunkhdr_t ;
typedef int schunk ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff const*,int,int,TYPE_1__*) ;

__attribute__((used)) static inline int FUNC_1(const struct sk_buff *VAR_1, int VAR_2)
{
 sctp_chunkhdr_t *VAR_3, VAR_4;
 VAR_3 = FUNC_0(VAR_1, VAR_2 + sizeof(sctp_sctphdr_t),
   sizeof(VAR_4), &VAR_4);
 if (VAR_3 == ((void*)0))
  return 0;
 if (VAR_3->type == VAR_0)
  return 1;
 return 0;
}
