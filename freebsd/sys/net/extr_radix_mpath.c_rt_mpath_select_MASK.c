
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtentry {int dummy; } ;
struct radix_node {int dummy; } ;


 int * FUNC_0 (struct radix_node*) ;
 struct rtentry* FUNC_1 (struct rtentry*,int ) ;

struct rtentry *
FUNC_2(struct rtentry *VAR_0, uint32_t VAR_1)
{
 if (FUNC_0((struct radix_node *)VAR_0) == ((void*)0))
  return (VAR_0);

 return (FUNC_1(VAR_0, VAR_1));
}
