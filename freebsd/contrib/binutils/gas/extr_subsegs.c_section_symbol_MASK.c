
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int symbolS ;
struct TYPE_14__ {int * sym; } ;
typedef TYPE_1__ segment_info_type ;
typedef TYPE_2__* segT ;
struct TYPE_17__ {int flags; } ;
struct TYPE_16__ {int name; } ;
struct TYPE_15__ {TYPE_4__* symbol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 TYPE_1__* FUNC_5 (TYPE_2__*) ;
 int * FUNC_6 (int ,TYPE_2__*,int ,int *) ;
 int * FUNC_7 (int ) ;
 TYPE_6__* FUNC_8 (int *) ;
 int * FUNC_9 (int ,TYPE_2__*,int ,int *) ;
 int FUNC_10 (int *,TYPE_4__*) ;
 int FUNC_11 (int *,int *) ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;

symbolS *
FUNC_12 (segT VAR_5)
{
  segment_info_type *VAR_6 = FUNC_5 (VAR_5);
  symbolS *VAR_7;

  if (VAR_6 == 0)
    FUNC_3 ();
  if (VAR_6->sym)
    return VAR_6->sym;





  if (! 1 || VAR_2)
    {

      VAR_7 = FUNC_6 (VAR_5->symbol->name, VAR_5, 0, &VAR_4);
    }
  else
    {
      segT VAR_8;
      VAR_7 = FUNC_7 (VAR_5->symbol->name);


      if (VAR_7 == ((void*)0)
   || ((VAR_8 = FUNC_1 (VAR_7)) != VAR_5
       && VAR_8 != VAR_3))
 VAR_7 = FUNC_9 (VAR_5->symbol->name, VAR_5, 0, &VAR_4);
      else if (VAR_8 == VAR_3)
 {
   FUNC_2 (VAR_7, VAR_5);
   FUNC_11 (VAR_7, &VAR_4);
 }
    }

  FUNC_0 (VAR_7);


  if (FUNC_4 (VAR_5))
    FUNC_10 (VAR_7, VAR_5->symbol);
  else
    FUNC_8 (VAR_7)->flags |= VAR_0;

  VAR_6->sym = VAR_7;
  return VAR_7;
}
