
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ icsk_ca_state; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (struct sock const*) ;

__attribute__((used)) static inline int FUNC_1(const struct sock *VAR_3, const int VAR_4)
{
 return (!(VAR_4 & VAR_1) || (VAR_4 & VAR_0) ||
  FUNC_0(VAR_3)->icsk_ca_state != VAR_2);
}
