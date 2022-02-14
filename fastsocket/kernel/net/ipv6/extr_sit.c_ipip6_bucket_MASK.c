
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sit_net {int dummy; } ;
struct ip_tunnel {int parms; } ;


 struct ip_tunnel** FUNC_0 (struct sit_net*,int *) ;

__attribute__((used)) static inline struct ip_tunnel **FUNC_1(struct sit_net *VAR_0,
  struct ip_tunnel *VAR_1)
{
 return FUNC_0(VAR_0, &VAR_1->parms);
}
