
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long longint; } ;
struct continuation_arg {TYPE_3__* next; TYPE_1__ data; } ;
struct TYPE_5__ {long longint; } ;
struct TYPE_6__ {TYPE_2__ data; } ;


 int FUNC_0 (int *) ;
 long FUNC_1 () ;
 char* VAR_0 ;
 int FUNC_2 (char*,long,char,...) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;

void
FUNC_4 (struct continuation_arg *VAR_2)
{
  extern int VAR_3;
  extern int VAR_4;

  long VAR_5 = VAR_2->data.longint;
  long VAR_6 = VAR_2->next->data.longint;

  FUNC_0 (&VAR_1);


  if (VAR_3)
    {
      long VAR_7 = FUNC_1 () - VAR_5;

      FUNC_2 ("Command execution time: %ld.%06ld\n",
    VAR_7 / 1000000, VAR_7 % 1000000);
    }
  if (VAR_4)
    {
    }
}
