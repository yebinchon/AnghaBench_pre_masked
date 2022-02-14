
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grouptask {int dummy; } ;
typedef TYPE_1__* iflib_filter_info_t ;
struct TYPE_2__ {int (* ifi_filter ) (int ) ;int ifi_filter_arg; struct grouptask* ifi_task; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct grouptask*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(void *VAR_5)
{
 iflib_filter_info_t VAR_6 = VAR_5;
 struct grouptask *VAR_7 = VAR_6->ifi_task;
 int VAR_8;

 if (!VAR_4)
  return (VAR_2);

 FUNC_0(VAR_3);
 if (VAR_6->ifi_filter != ((void*)0)) {
  VAR_8 = VAR_6->ifi_filter(VAR_6->ifi_filter_arg);
  if ((VAR_8 & VAR_1) == 0)
   return (VAR_8);
 }

 FUNC_1(VAR_7);
 return (VAR_0);
}
