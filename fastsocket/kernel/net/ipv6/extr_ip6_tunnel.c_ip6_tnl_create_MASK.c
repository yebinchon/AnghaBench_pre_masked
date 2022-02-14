
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ip6_tnl_parm {scalar_t__* name; } ;
struct ip6_tnl_net {int dummy; } ;
struct ip6_tnl {struct ip6_tnl_parm parms; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (struct net_device*,char*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,struct net*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_6 (struct ip6_tnl_net*,struct ip6_tnl*) ;
 int VAR_2 ;
 struct ip6_tnl_net* FUNC_7 (struct net*,int ) ;
 struct ip6_tnl* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (char*,char) ;
 int FUNC_12 (char*,scalar_t__*,int) ;

__attribute__((used)) static struct ip6_tnl *FUNC_13(struct net *VAR_3, struct ip6_tnl_parm *VAR_4)
{
 struct net_device *VAR_5;
 struct ip6_tnl *VAR_6;
 char VAR_7[VAR_0];
 int VAR_8;
 struct ip6_tnl_net *VAR_9 = FUNC_7(VAR_3, VAR_2);

 if (VAR_4->name[0])
  FUNC_12(VAR_7, VAR_4->name, VAR_0);
 else
  FUNC_10(VAR_7, "ip6tnl%%d");

 VAR_5 = FUNC_0(sizeof (*VAR_6), VAR_7, VAR_1);
 if (VAR_5 == ((void*)0))
  goto failed;

 FUNC_3(VAR_5, VAR_3);

 if (FUNC_11(VAR_7, '%')) {
  if (FUNC_1(VAR_5, VAR_7) < 0)
   goto failed_free;
 }

 VAR_6 = FUNC_8(VAR_5);
 VAR_6->parms = *VAR_4;
 FUNC_5(VAR_5);

 if ((VAR_8 = FUNC_9(VAR_5)) < 0)
  goto failed_free;

 FUNC_2(VAR_5);
 FUNC_6(VAR_9, VAR_6);
 return VAR_6;

failed_free:
 FUNC_4(VAR_5);
failed:
 return ((void*)0);
}
