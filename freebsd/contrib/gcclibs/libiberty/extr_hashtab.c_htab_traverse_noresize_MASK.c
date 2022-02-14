
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int (* htab_trav ) (scalar_t__*,scalar_t__) ;
typedef TYPE_1__* htab_t ;
struct TYPE_4__ {scalar_t__* entries; } ;
typedef scalar_t__ PTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__*,scalar_t__) ;

void
FUNC_2 (htab_t VAR_2, htab_trav VAR_3, PTR VAR_4)
{
  PTR *VAR_5;
  PTR *VAR_6;

  VAR_5 = VAR_2->entries;
  VAR_6 = VAR_5 + FUNC_0 (VAR_2);

  do
    {
      PTR VAR_7 = *VAR_5;

      if (VAR_7 != VAR_1 && VAR_7 != VAR_0)
 if (!(*VAR_3) (VAR_5, VAR_4))
   break;
    }
  while (++VAR_5 < VAR_6);
}
