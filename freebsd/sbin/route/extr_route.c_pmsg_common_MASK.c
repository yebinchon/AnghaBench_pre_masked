
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rmx_locks; } ;
struct rt_msghdr {int rtm_addrs; int rtm_inits; TYPE_1__ rtm_rmx; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,size_t) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct rt_msghdr *VAR_2, size_t VAR_3)
{

 (void)FUNC_3("\nlocks: ");
 FUNC_2(VAR_2->rtm_rmx.rmx_locks, VAR_0);
 (void)FUNC_3(" inits: ");
 FUNC_2(VAR_2->rtm_inits, VAR_0);
 if (VAR_3 > sizeof(struct rt_msghdr))
  FUNC_1(((char *)(VAR_2 + 1)), VAR_2->rtm_addrs,
      VAR_3 - sizeof(struct rt_msghdr));
 else
  (void)FUNC_0(VAR_1);
}
