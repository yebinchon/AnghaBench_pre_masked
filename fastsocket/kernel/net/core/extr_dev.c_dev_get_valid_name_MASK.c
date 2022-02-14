
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {char const* name; } ;
struct net {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct net*,char const*) ;
 int FUNC_2 (struct net*,struct net_device*,char const*) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char) ;
 int FUNC_5 (char const*,char const*,int ) ;

__attribute__((used)) static int FUNC_6(struct net *VAR_3,
         struct net_device *VAR_4,
         const char *VAR_5, bool VAR_6)
{
 FUNC_0(!VAR_3);

 if (!FUNC_3(VAR_5))
  return -VAR_1;

 if (VAR_6 && FUNC_4(VAR_5, '%'))
  return FUNC_2(VAR_3, VAR_4, VAR_5);
 else if (FUNC_1(VAR_3, VAR_5))
  return -VAR_0;
 else if (VAR_4->name != VAR_5)
  FUNC_5(VAR_4->name, VAR_5, VAR_2);

 return 0;
}
