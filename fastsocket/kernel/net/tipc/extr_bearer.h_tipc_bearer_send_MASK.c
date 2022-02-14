
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_media_addr {int dummy; } ;
struct sk_buff {int dummy; } ;
struct bearer {int publ; TYPE_1__* media; } ;
struct TYPE_2__ {int (* send_msg ) (struct sk_buff*,int *,struct tipc_media_addr*) ;} ;


 int FUNC_0 (struct sk_buff*,int *,struct tipc_media_addr*) ;

__attribute__((used)) static inline int FUNC_1(struct bearer *VAR_0, struct sk_buff *VAR_1,
       struct tipc_media_addr *VAR_2)
{
 return !VAR_0->media->send_msg(VAR_1, &VAR_0->publ, VAR_2);
}
