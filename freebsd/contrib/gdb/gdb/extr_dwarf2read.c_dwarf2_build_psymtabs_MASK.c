
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; } ;
struct TYPE_3__ {scalar_t__ size; } ;
struct objfile {TYPE_2__ static_psymbols; TYPE_1__ global_psymbols; } ;


 int FUNC_0 (struct objfile*,int) ;
 int FUNC_1 (struct objfile*,int) ;
 void* FUNC_2 (struct objfile*,scalar_t__) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 int * VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int * VAR_12 ;
 scalar_t__ VAR_13 ;
 int * VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_3 (struct objfile*,int) ;

void
FUNC_4 (struct objfile *VAR_16, int VAR_17)
{



  VAR_3 = FUNC_2 (VAR_16, VAR_4);
  VAR_0 = FUNC_2 (VAR_16, VAR_1);

  if (VAR_6)
    VAR_5 = FUNC_2 (VAR_16, VAR_6);
  else
    VAR_5 = ((void*)0);

  if (VAR_15)
    VAR_14 = FUNC_2 (VAR_16, VAR_15);
  else
    VAR_14 = ((void*)0);

  if (VAR_10)
    VAR_9 = FUNC_2 (VAR_16,
      VAR_10);
  else
    VAR_9 = ((void*)0);

  if (VAR_13)
    VAR_12 = FUNC_2 (VAR_16, VAR_13);
  else
    VAR_12 = ((void*)0);

  if (VAR_8)
    VAR_7 = FUNC_2 (VAR_16, VAR_8);
  else
    VAR_7 = ((void*)0);

  if (VAR_17
      || (VAR_16->global_psymbols.size == 0
   && VAR_16->static_psymbols.size == 0))
    {
      FUNC_3 (VAR_16, 1024);
    }
    {

      FUNC_1 (VAR_16, VAR_17);
    }
}
