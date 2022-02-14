
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int frags; } ;
struct net {TYPE_1__ ipv4; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,int ,int) ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct net *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_2->ipv4.frags, &VAR_1);
 if (VAR_3)
  FUNC_0(VAR_2, VAR_0, VAR_3);
}
