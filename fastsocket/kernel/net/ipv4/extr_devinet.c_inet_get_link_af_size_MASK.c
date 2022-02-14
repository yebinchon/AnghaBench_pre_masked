
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct in_device {int dummy; } ;


 int VAR_0 ;
 struct in_device* FUNC_0 (struct net_device const*) ;
 size_t FUNC_1 (int) ;

__attribute__((used)) static size_t FUNC_2(const struct net_device *VAR_1)
{
 struct in_device *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2)
  return 0;

 return FUNC_1(VAR_0 * 4);
}
