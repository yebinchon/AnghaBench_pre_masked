
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct inet_bind_bucket {int dummy; } ;
struct TYPE_4__ {TYPE_1__* icsk_af_ops; } ;
struct TYPE_3__ {int (* bind_conflict ) (struct sock*,struct inet_bind_bucket*) ;} ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct sock*,struct inet_bind_bucket*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_1,
     struct inet_bind_bucket *VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_1, VAR_0);
 VAR_3 = FUNC_0(VAR_1)->icsk_af_ops->bind_conflict(VAR_1, VAR_2);
 FUNC_1(VAR_1, VAR_0);
 return VAR_3;
}
