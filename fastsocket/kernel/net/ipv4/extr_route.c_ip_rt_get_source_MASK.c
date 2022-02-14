
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {TYPE_2__ dst; } ;
struct TYPE_6__ {scalar_t__ iif; } ;
struct rtable {int rt_gateway; TYPE_1__ u; TYPE_3__ fl; int rt_src; } ;
struct fib_result {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct fib_result) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,TYPE_3__*,struct fib_result*) ;
 int FUNC_3 (struct fib_result*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *,int *,int) ;

void FUNC_6(u8 *VAR_1, struct rtable *VAR_2)
{
 __be32 VAR_3;
 struct fib_result VAR_4;

 if (VAR_2->fl.iif == 0)
  VAR_3 = VAR_2->rt_src;
 else if (FUNC_2(FUNC_1(VAR_2->u.dst.dev), &VAR_2->fl, &VAR_4) == 0) {
  VAR_3 = FUNC_0(VAR_4);
  FUNC_3(&VAR_4);
 } else
  VAR_3 = FUNC_4(VAR_2->u.dst.dev, VAR_2->rt_gateway,
     VAR_0);
 FUNC_5(VAR_1, &VAR_3, 4);
}
