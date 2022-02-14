
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct filter_info {int vlan; int pass; int rss; int valid; int locked; int vlan_prio; } ;
struct TYPE_3__ {unsigned int nfilters; } ;
struct TYPE_4__ {TYPE_1__ mc5; } ;
struct adapter {struct filter_info* filters; TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct filter_info* FUNC_0 (int,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct adapter *VAR_4)
{
 struct filter_info *VAR_5;
 unsigned int VAR_6 = VAR_4->params.mc5.nfilters;

 if (VAR_6 == 0)
  return (0);

 VAR_5 = FUNC_0(sizeof(*VAR_5) * VAR_6, VAR_1, VAR_2 | VAR_3);
 VAR_4->filters = VAR_5;

 VAR_5 = &VAR_4->filters[VAR_6 - 1];
 VAR_5->vlan = 0xfff;
 VAR_5->vlan_prio = VAR_0;
 VAR_5->pass = VAR_5->rss = VAR_5->valid = VAR_5->locked = 1;

 return (0);
}
