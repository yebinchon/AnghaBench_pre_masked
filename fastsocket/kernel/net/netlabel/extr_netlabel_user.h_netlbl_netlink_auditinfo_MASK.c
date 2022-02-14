
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct netlbl_audit {int sessionid; int loginuid; int secid; } ;
struct TYPE_2__ {int sessionid; int loginuid; int sid; } ;


 TYPE_1__ FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_1(struct sk_buff *VAR_0,
         struct netlbl_audit *VAR_1)
{
 VAR_1->secid = FUNC_0(VAR_0).sid;
 VAR_1->loginuid = FUNC_0(VAR_0).loginuid;
 VAR_1->sessionid = FUNC_0(VAR_0).sessionid;
}
