
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int * data; } ;
struct in_device {TYPE_1__ cnf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct in_device* FUNC_0 (struct net_device const*) ;
 scalar_t__ FUNC_1 (struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_4, const struct net_device *VAR_5)
{
 struct in_device *VAR_6 = FUNC_0(VAR_5);
 struct nlattr *VAR_7;
 int VAR_8;

 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_2(VAR_4, VAR_2, VAR_3 * 4);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  ((u32 *) FUNC_1(VAR_7))[VAR_8] = VAR_6->cnf.data[VAR_8];

 return 0;
}
