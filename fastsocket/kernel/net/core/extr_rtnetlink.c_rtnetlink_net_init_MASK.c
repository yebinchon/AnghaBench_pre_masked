
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct net {struct sock* rtnl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sock* FUNC_0 (struct net*,int ,int ,int ,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_1(struct net *VAR_6)
{
 struct sock *VAR_7;
 VAR_7 = FUNC_0(VAR_6, VAR_1, VAR_2,
       VAR_4, &VAR_5, VAR_3);
 if (!VAR_7)
  return -VAR_0;
 VAR_6->rtnl = VAR_7;
 return 0;
}
