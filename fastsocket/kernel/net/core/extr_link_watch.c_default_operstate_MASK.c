
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ ifindex; scalar_t__ iflink; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (struct net_device const*) ;
 scalar_t__ FUNC_1 (struct net_device const*) ;

__attribute__((used)) static unsigned char FUNC_2(const struct net_device *VAR_4)
{
 if (!FUNC_0(VAR_4))
  return (VAR_4->ifindex != VAR_4->iflink ?
   VAR_2 : VAR_1);

 if (FUNC_1(VAR_4))
  return VAR_0;

 return VAR_3;
}
