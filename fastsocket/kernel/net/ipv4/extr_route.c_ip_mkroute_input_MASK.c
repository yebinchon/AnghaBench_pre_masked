
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_5__ {TYPE_1__ dst; } ;
struct rtable {TYPE_2__ u; } ;
struct in_device {int dummy; } ;
struct flowi {scalar_t__ oif; int iif; } ;
struct fib_result {TYPE_3__* fi; } ;
typedef int __be32 ;
struct TYPE_6__ {int fib_nhs; } ;


 int FUNC_0 (struct sk_buff*,struct fib_result*,struct in_device*,int ,int ,int ,struct rtable**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct flowi const*,struct fib_result*) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (unsigned int,struct rtable*,int *,struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_0,
       struct fib_result *VAR_1,
       const struct flowi *VAR_2,
       struct in_device *VAR_3,
       __be32 VAR_4, __be32 VAR_5, u32 VAR_6)
{
 struct rtable* VAR_7 = ((void*)0);
 int VAR_8;
 unsigned VAR_9;







 VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4, VAR_5, VAR_6, &VAR_7);
 if (VAR_8)
  return VAR_8;


 VAR_9 = FUNC_4(VAR_4, VAR_5, VAR_2->iif,
         FUNC_3(FUNC_1(VAR_7->u.dst.dev)));
 return FUNC_5(VAR_9, VAR_7, ((void*)0), VAR_0);
}
