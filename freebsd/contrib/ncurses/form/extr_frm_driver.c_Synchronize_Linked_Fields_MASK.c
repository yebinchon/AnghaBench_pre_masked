
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* link; } ;
typedef TYPE_1__ FIELD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_1(FIELD *VAR_3)
{
  FIELD *VAR_4;
  int VAR_5 = VAR_1;
  int VAR_6;

  if (!VAR_3)
    return (VAR_0);

  if (!VAR_3->link)
    return (VAR_2);

  for (VAR_4 = VAR_3->link;
       (VAR_4 != VAR_3) && (VAR_4 != 0);
       VAR_4 = VAR_4->link)
    {
      if (((VAR_6 = FUNC_0(VAR_4)) != VAR_1) &&
   (VAR_5 == VAR_1))
 VAR_5 = VAR_6;
    }
  return (VAR_5);
}
