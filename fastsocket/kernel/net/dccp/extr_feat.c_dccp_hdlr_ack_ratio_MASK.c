
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct sock {int dummy; } ;
struct TYPE_2__ {void* dccps_l_ack_ratio; void* dccps_r_ack_ratio; } ;


 TYPE_1__* FUNC_0 (struct sock*) ;

__attribute__((used)) static int FUNC_1(struct sock *VAR_0, u64 VAR_1, bool VAR_2)
{
 if (VAR_2)
  FUNC_0(VAR_0)->dccps_r_ack_ratio = VAR_1;
 else
  FUNC_0(VAR_0)->dccps_l_ack_ratio = VAR_1;
 return 0;
}
