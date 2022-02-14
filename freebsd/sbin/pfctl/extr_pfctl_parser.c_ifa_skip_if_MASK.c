
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_host {scalar_t__ af; char* ifname; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*,char const*,int) ;

int
FUNC_3(const char *VAR_3, struct node_host *VAR_4)
{
 int VAR_5;

 if (VAR_4->af != VAR_0 && VAR_4->af != VAR_1)
  return (1);
 if (VAR_3 == ((void*)0) || !*VAR_3)
  return (0);
 if (!FUNC_0(VAR_4->ifname, VAR_3))
  return (0);
 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 < 1 || VAR_5 >= VAR_2)
  return (1);
 if (VAR_3[VAR_5-1] >= '0' && VAR_3[VAR_5-1] <= '9')
  return (1);
 if (FUNC_2(VAR_4->ifname, VAR_3, VAR_5))
  return (1);
 return (VAR_4->ifname[VAR_5] < '0' || VAR_4->ifname[VAR_5] > '9');
}
