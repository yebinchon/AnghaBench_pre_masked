
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sysctl_checksum; scalar_t__ sysctl_log_invalid; } ;
struct net {TYPE_1__ ct; } ;


 int FUNC_0 (struct net*) ;
 int FUNC_1 (struct net*) ;
 int FUNC_2 (struct net*) ;
 int FUNC_3 (struct net*) ;
 int FUNC_4 (struct net*) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 < 0)
  goto out_init;
 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1 < 0)
  goto out_proc;
 VAR_0->ct.sysctl_checksum = 1;
 VAR_0->ct.sysctl_log_invalid = 0;
 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1 < 0)
  goto out_sysctl;
 return 0;

out_sysctl:
 FUNC_2(VAR_0);
out_proc:
 FUNC_0(VAR_0);
out_init:
 return VAR_1;
}
