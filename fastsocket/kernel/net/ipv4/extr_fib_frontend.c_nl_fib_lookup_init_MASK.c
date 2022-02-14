
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {struct sock* fibnl; } ;
struct net {TYPE_1__ ipv4; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sock* FUNC_0 (struct net*,int ,int ,int ,int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct net *VAR_4)
{
 struct sock *VAR_5;
 VAR_5 = FUNC_0(VAR_4, VAR_1, 0,
       VAR_3, ((void*)0), VAR_2);
 if (VAR_5 == ((void*)0))
  return -VAR_0;
 VAR_4->ipv4.fibnl = VAR_5;
 return 0;
}
