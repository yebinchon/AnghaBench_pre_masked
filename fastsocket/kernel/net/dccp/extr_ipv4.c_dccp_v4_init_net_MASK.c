
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int v4_ctl_sk; } ;
struct net {TYPE_1__ dccp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ,struct net*) ;

__attribute__((used)) static int FUNC_1(struct net *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_3->dccp.v4_ctl_sk, VAR_1,
       VAR_2, VAR_0, VAR_3);
 return VAR_4;
}
