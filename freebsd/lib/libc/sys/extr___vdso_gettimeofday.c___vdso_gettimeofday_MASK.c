
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct timezone {int dummy; } ;
struct timeval {int dummy; } ;
struct bintime {int dummy; } ;
struct TYPE_4__ {scalar_t__ tk_ver; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (struct bintime*,struct timeval*) ;
 int FUNC_2 (struct bintime*,TYPE_1__*,int) ;
 TYPE_1__* VAR_2 ;

int
FUNC_3(struct timeval *VAR_3, struct timezone *VAR_4)
{
 struct bintime VAR_5;
 int VAR_6;

 if (VAR_4 != ((void*)0))
  return (VAR_0);
 if (VAR_2 == ((void*)0)) {
  VAR_6 = FUNC_0(&VAR_2);
  if (VAR_6 != 0 || VAR_2 == ((void*)0))
   return (VAR_0);
 }
 if (VAR_2->tk_ver != VAR_1)
  return (VAR_0);
 VAR_6 = FUNC_2(&VAR_5, VAR_2, 1);
 if (VAR_6 != 0)
  return (VAR_6);
 FUNC_1(&VAR_5, VAR_3);
 return (0);
}
