
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct inet6_dev {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 struct inet6_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct inet6_dev*,int ) ;
 int FUNC_3 (struct nlattr*) ;
 scalar_t__ FUNC_4 (struct nlattr**,int ,struct nlattr const*,int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4, const struct nlattr *VAR_5)
{
 int VAR_6 = -VAR_1;
 struct inet6_dev *VAR_7 = FUNC_1(VAR_4);
 struct nlattr *VAR_8[VAR_2 + 1];

 if (!VAR_7)
  return -VAR_0;

 if (FUNC_4(VAR_8, VAR_2, VAR_5, ((void*)0)) < 0)
  FUNC_0();

 if (VAR_8[VAR_3])
  VAR_6 = FUNC_2(VAR_7, FUNC_3(VAR_8[VAR_3]));

 return VAR_6;
}
