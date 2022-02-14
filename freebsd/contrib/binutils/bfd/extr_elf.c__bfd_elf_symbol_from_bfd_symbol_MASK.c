
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int flagword ;
typedef int bfd ;
struct TYPE_9__ {int i; } ;
struct TYPE_10__ {int flags; int name; TYPE_2__ udata; TYPE_4__* section; } ;
typedef TYPE_3__ asymbol ;
struct TYPE_11__ {int index; int * owner; struct TYPE_11__* output_section; } ;
typedef TYPE_4__ asection ;
struct TYPE_8__ {int i; } ;
struct TYPE_12__ {TYPE_1__ udata; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 TYPE_5__** FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,long,int ,int,int,int ) ;
 int VAR_2 ;
 int FUNC_9 (int ,int *,int ) ;

int
FUNC_10 (bfd *VAR_3, asymbol **VAR_4)
{
  asymbol *VAR_5 = *VAR_4;
  int VAR_6;
  flagword VAR_7 = VAR_5->flags;






  if (VAR_5->udata.i == 0
      && (VAR_7 & VAR_0)
      && VAR_5->section)
    {
      asection *VAR_8;
      int VAR_9;

      VAR_8 = VAR_5->section;
      if (VAR_8->owner != VAR_3 && VAR_8->output_section != ((void*)0))
 VAR_8 = VAR_8->output_section;
      if (VAR_8->owner == VAR_3
   && (VAR_9 = VAR_8->index) < FUNC_4 (VAR_3)
   && FUNC_5 (VAR_3)[VAR_9] != ((void*)0))
 VAR_5->udata.i = FUNC_5 (VAR_3)[VAR_9]->udata.i;
    }

  VAR_6 = VAR_5->udata.i;

  if (VAR_6 == 0)
    {


      FUNC_1)
 (FUNC_0("%B: symbol `%s' required but not present"),
  VAR_3, FUNC_2 (VAR_5));
      FUNC_3 (VAR_1);
      return -1;
    }
  return VAR_6;
}
