
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct net {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct net*,char const*,char*) ;
 struct net* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,char*,int) ;

int FUNC_4(struct net_device *VAR_1, const char *VAR_2)
{
 char VAR_3[VAR_0];
 struct net *VAR_4;
 int VAR_5;

 FUNC_0(!FUNC_2(VAR_1));
 VAR_4 = FUNC_2(VAR_1);
 VAR_5 = FUNC_1(VAR_4, VAR_2, VAR_3);
 if (VAR_5 >= 0)
  FUNC_3(VAR_1->name, VAR_3, VAR_0);
 return VAR_5;
}
