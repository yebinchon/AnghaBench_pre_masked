
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef enum cache_flag { ____Placeholder_cache_flag } cache_flag ;
struct TYPE_9__ {int flags; int * iostream; int where; struct TYPE_9__* my_archive; } ;
typedef TYPE_1__ bfd ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 () ;
 TYPE_1__* VAR_6 ;
 int * FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static FILE *
FUNC_11 (bfd *VAR_7, enum cache_flag VAR_8)
{
  bfd *VAR_9 = VAR_7;
  if ((VAR_7->flags & VAR_0) != 0)
    FUNC_2 ();

  if (VAR_7->my_archive)
    VAR_7 = VAR_7->my_archive;

  if (VAR_7->iostream != ((void*)0))
    {

      if (VAR_7 != VAR_6)
 {
   FUNC_9 (VAR_7);
   FUNC_7 (VAR_7);
 }
      return (FILE *) VAR_7->iostream;
    }

  if (VAR_8 & VAR_1)
    return ((void*)0);

  if (FUNC_5 (VAR_7) == ((void*)0))
    ;
  else if (!(VAR_8 & VAR_2)
    && FUNC_8 ((FILE *) VAR_7->iostream, VAR_7->where, VAR_4) != 0
    && !(VAR_8 & VAR_3))
    FUNC_6 (VAR_5);
  else
    return (FILE *) VAR_7->iostream;

  FUNC_1) (FUNC_0("reopening %B: %s\n"),
    VAR_9, FUNC_3 (FUNC_4 ()));
  return ((void*)0);
}
