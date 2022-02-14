
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct netlink_callback {int family; int * args; TYPE_1__* nlh; } ;
struct TYPE_4__ {scalar_t__ (* dumpit ) (struct sk_buff*,struct netlink_callback*) ;} ;
struct TYPE_3__ {int nlmsg_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 TYPE_2__** VAR_3 ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct netlink_callback*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_4, struct netlink_callback *VAR_5)
{
 int VAR_6;
 int VAR_7 = VAR_5->family;

 if (VAR_7 == 0)
  VAR_7 = 1;
 for (VAR_6 = 1; VAR_6 <= VAR_2; VAR_6++) {
  int VAR_8 = VAR_5->nlh->nlmsg_type-VAR_1;
  if (VAR_6 < VAR_7 || VAR_6 == VAR_0)
   continue;
  if (VAR_3[VAR_6] == ((void*)0) ||
      VAR_3[VAR_6][VAR_8].dumpit == ((void*)0))
   continue;
  if (VAR_6 > VAR_7)
   FUNC_0(&VAR_5->args[0], 0, sizeof(VAR_5->args));
  if (VAR_3[VAR_6][VAR_8].dumpit(VAR_4, VAR_5))
   break;
 }
 VAR_5->family = VAR_6;

 return VAR_4->len;
}
