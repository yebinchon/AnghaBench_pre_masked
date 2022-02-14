
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct TYPE_4__ {unsigned int nl_nonroot; } ;
struct TYPE_3__ {size_t sk_protocol; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static inline int FUNC_1(struct socket *VAR_2, unsigned int VAR_3)
{
 return (VAR_1[VAR_2->sk->sk_protocol].nl_nonroot & VAR_3) ||
        FUNC_0(VAR_0);
}
