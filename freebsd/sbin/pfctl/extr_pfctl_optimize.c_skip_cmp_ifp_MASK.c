
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_rule {char* ifname; scalar_t__ ifnot; } ;


 scalar_t__ FUNC_0 (char*,char*) ;

int
FUNC_1(struct pf_rule *VAR_0, struct pf_rule *VAR_1)
{
 if (FUNC_0(VAR_0->ifname, VAR_1->ifname) || VAR_0->ifname[0] == '\0')
  return (1);
 return (VAR_0->ifnot != VAR_1->ifnot);
}
