
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,char const*,char*) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_1,
        struct net_device *VAR_2,
        const char *VAR_3)
{
 char VAR_4[VAR_0];
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_3, VAR_4);
 if (VAR_5 >= 0)
  FUNC_1(VAR_2->name, VAR_4, VAR_0);
 return VAR_5;
}
