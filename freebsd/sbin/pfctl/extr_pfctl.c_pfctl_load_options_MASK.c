
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfctl {int opts; int* limit; int* timeout_set; int* timeout; int hostid; scalar_t__ hostid_set; int ifname; scalar_t__ ifname_set; int debug; scalar_t__ debug_set; scalar_t__* limit_set; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct pfctl*,int ) ;
 scalar_t__ FUNC_1 (struct pfctl*,int ) ;
 scalar_t__ FUNC_2 (struct pfctl*,int,int) ;
 scalar_t__ FUNC_3 (struct pfctl*,int ) ;
 scalar_t__ FUNC_4 (struct pfctl*,int,int) ;

int
FUNC_5(struct pfctl *VAR_8)
{
 int VAR_9, VAR_10 = 0;

 if ((VAR_7 & VAR_0) == 0)
  return (0);


 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  if ((VAR_8->opts & VAR_6) && !VAR_8->limit_set[VAR_9])
   continue;
  if (FUNC_2(VAR_8, VAR_9, VAR_8->limit[VAR_9]))
   VAR_10 = 1;
 }





 if (VAR_8->limit_set[VAR_5] &&
     !VAR_8->timeout_set[VAR_2] &&
     !VAR_8->timeout_set[VAR_1]) {
  VAR_8->timeout[VAR_2] =
   (VAR_8->limit[VAR_5] / 10) * 6;
  VAR_8->timeout_set[VAR_2] = 1;
  VAR_8->timeout[VAR_1] =
   (VAR_8->limit[VAR_5] / 10) * 12;
  VAR_8->timeout_set[VAR_1] = 1;
 }


 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  if ((VAR_8->opts & VAR_6) && !VAR_8->timeout_set[VAR_9])
   continue;
  if (FUNC_4(VAR_8, VAR_9, VAR_8->timeout[VAR_9]))
   VAR_10 = 1;
 }


 if (!(VAR_8->opts & VAR_6) || VAR_8->debug_set)
  if (FUNC_0(VAR_8, VAR_8->debug))
   VAR_10 = 1;


 if (!(VAR_8->opts & VAR_6) || VAR_8->ifname_set)
  if (FUNC_3(VAR_8, VAR_8->ifname))
   VAR_10 = 1;


 if (!(VAR_8->opts & VAR_6) || VAR_8->hostid_set)
  if (FUNC_1(VAR_8, VAR_8->hostid))
   VAR_10 = 1;

 return (VAR_10);
}
