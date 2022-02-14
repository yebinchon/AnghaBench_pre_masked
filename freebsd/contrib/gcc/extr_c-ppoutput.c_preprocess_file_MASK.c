
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* buffer; } ;
typedef TYPE_2__ cpp_reader ;
struct TYPE_15__ {int preprocessed; scalar_t__ directives_only; scalar_t__ traditional; } ;
struct TYPE_14__ {int outf; scalar_t__ printed; } ;
struct TYPE_12__ {scalar_t__ prev; } ;


 int FUNC_0 (TYPE_2__*,int ,int *) ;
 TYPE_9__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 char VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_6__ VAR_3 ;
 int FUNC_3 (char,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

void
FUNC_7 (cpp_reader *VAR_4)
{


  if (VAR_2)
    {

      while (VAR_4->buffer->prev)
 FUNC_2 (VAR_4);
      FUNC_2 (VAR_4);
    }
  else if (FUNC_1 (VAR_4)->traditional)
    FUNC_6 (VAR_4);
  else if (FUNC_1 (VAR_4)->directives_only
    && !FUNC_1 (VAR_4)->preprocessed)
    FUNC_5 (VAR_4);
  else
    FUNC_4 (VAR_4);


  if (VAR_1 == 'M')
    FUNC_0 (VAR_4, VAR_0, ((void*)0));


  if (VAR_3.printed)
    FUNC_3 ('\n', VAR_3.outf);
}
