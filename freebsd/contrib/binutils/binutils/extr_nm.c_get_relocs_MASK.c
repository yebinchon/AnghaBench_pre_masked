
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct get_relocs_info {scalar_t__* relcount; int ** relocs; TYPE_1__** secs; int syms; } ;
typedef int bfd ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 long FUNC_3 (int *,TYPE_1__*) ;
 int * FUNC_4 (long) ;

__attribute__((used)) static void
FUNC_5 (bfd *VAR_1, asection *VAR_2, void *VAR_3)
{
  struct get_relocs_info *VAR_4 = (struct get_relocs_info *) VAR_3;

  *VAR_4->secs = VAR_2;

  if ((VAR_2->flags & VAR_0) == 0)
    {
      *VAR_4->relocs = ((void*)0);
      *VAR_4->relcount = 0;
    }
  else
    {
      long VAR_5;

      VAR_5 = FUNC_3 (VAR_1, VAR_2);
      if (VAR_5 < 0)
 FUNC_1 (FUNC_2 (VAR_1));

      *VAR_4->relocs = FUNC_4 (VAR_5);
      *VAR_4->relcount = FUNC_0 (VAR_1, VAR_2, *VAR_4->relocs,
      VAR_4->syms);
      if (*VAR_4->relcount < 0)
 FUNC_1 (FUNC_2 (VAR_1));
    }

  ++VAR_4->secs;
  ++VAR_4->relocs;
  ++VAR_4->relcount;
}
