
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_5__ {scalar_t__ direction; int mtime_set; scalar_t__ iostream; int where; struct TYPE_5__* lru_prev; int cacheable; } ;
typedef TYPE_1__ bfd ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (void)
{
  register bfd *VAR_4;

  if (VAR_1 == ((void*)0))
    VAR_4 = ((void*)0);
  else
    {
      for (VAR_4 = VAR_1->lru_prev;
    ! VAR_4->cacheable;
    VAR_4 = VAR_4->lru_prev)
 {
   if (VAR_4 == VAR_1)
     {
       VAR_4 = ((void*)0);
       break;
     }
 }
    }

  if (VAR_4 == ((void*)0))
    {

      return VAR_0;
    }

  VAR_4->where = FUNC_2 ((FILE *) VAR_4->iostream);
  if (VAR_4->direction == VAR_2 || VAR_4->direction == VAR_3)
    {
      FUNC_1 (VAR_4);
      VAR_4->mtime_set = VAR_0;
    }

  return FUNC_0 (VAR_4);
}
