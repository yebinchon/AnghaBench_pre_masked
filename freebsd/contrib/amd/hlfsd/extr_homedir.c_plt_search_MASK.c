
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ uid; } ;
typedef TYPE_1__ uid2home_t ;
typedef scalar_t__ u_int ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

uid2home_t *
FUNC_0(u_int VAR_2)
{
  int VAR_3, VAR_4, VAR_5;





  if (VAR_1 == (uid2home_t *) ((void*)0))
    return (uid2home_t *) ((void*)0);

  VAR_3 = VAR_0 - 1;
  VAR_4 = 0;

  do {
    VAR_5 = (VAR_3 + VAR_4) / 2;
    if (VAR_1[VAR_5].uid == VAR_2)
      return &VAR_1[VAR_5];
    if (VAR_1[VAR_5].uid > VAR_2)
      VAR_3 = VAR_5;
    else
      VAR_4 = VAR_5;
  } while (VAR_3 > VAR_4 + 1);

  if (VAR_1[VAR_3].uid == VAR_2)
    return &VAR_1[VAR_3];
  if (VAR_1[VAR_4].uid == VAR_2)
    return &VAR_1[VAR_4];


  return (uid2home_t *) ((void*)0);
}
