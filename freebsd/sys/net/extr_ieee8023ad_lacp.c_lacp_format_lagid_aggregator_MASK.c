
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lacp_aggregator {int la_partner; int la_actor; } ;


 char const* FUNC_0 (int *,int *,char*,size_t) ;

const char *
FUNC_1(const struct lacp_aggregator *VAR_0,
    char *VAR_1, size_t VAR_2)
{
 if (VAR_0 == ((void*)0)) {
  return ("(none)");
 }

 return (FUNC_0(&VAR_0->la_actor, &VAR_0->la_partner, VAR_1, VAR_2));
}
