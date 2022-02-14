
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sysctl_max_dgram_qlen; } ;
struct net {TYPE_1__ unx; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,char*,int ,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct net*) ;
 int FUNC_2 (struct net*) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_2)
{
 int VAR_3 = -VAR_0;

 VAR_2->unx.sysctl_max_dgram_qlen = 10;
 if (FUNC_1(VAR_2))
  goto out;







 VAR_3 = 0;
out:
 return VAR_3;
}
