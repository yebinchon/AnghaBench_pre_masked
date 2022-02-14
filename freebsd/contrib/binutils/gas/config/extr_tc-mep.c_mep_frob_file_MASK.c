
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mep_hi_fixup {TYPE_2__* fixp; int seg; struct mep_hi_fixup* next; } ;
struct TYPE_5__ {TYPE_2__* fix_root; } ;
typedef TYPE_1__ segment_info_type ;
struct TYPE_6__ {scalar_t__ fx_addsy; scalar_t__ fx_offset; int fx_line; int fx_file; struct TYPE_6__* fx_next; } ;
typedef TYPE_2__ fixS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int) ;
 struct mep_hi_fixup* VAR_2 ;
 TYPE_1__* FUNC_4 (int ) ;

void
FUNC_5 ()
{
  struct mep_hi_fixup * VAR_3;

  for (VAR_3 = VAR_2; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
    {
      segment_info_type * VAR_4;
      int VAR_5;

      FUNC_3 (FUNC_0 (VAR_3->fixp) == VAR_0
       || FUNC_0 (VAR_3->fixp) == VAR_1);


      if (VAR_3->fixp->fx_next != ((void*)0)
   && FUNC_0 (VAR_3->fixp->fx_next) == VAR_1
   && VAR_3->fixp->fx_addsy == VAR_3->fixp->fx_next->fx_addsy
   && VAR_3->fixp->fx_offset == VAR_3->fixp->fx_next->fx_offset)
 continue;






      VAR_4 = FUNC_4 (VAR_3->seg);
      for (VAR_5 = 0; VAR_5 < 2; VAR_5++)
 {
   fixS * VAR_6;
   fixS * VAR_7;

   VAR_7 = ((void*)0);
   for (VAR_6 = VAR_4->fix_root; VAR_6 != ((void*)0); VAR_6 = VAR_6->fx_next)
     {

       if (FUNC_0 (VAR_6) == VAR_1
    && VAR_6->fx_addsy == VAR_3->fixp->fx_addsy
    && VAR_6->fx_offset == VAR_3->fixp->fx_offset
    && (VAR_5 == 1
        || VAR_7 == ((void*)0)
        || (FUNC_0 (VAR_7) != VAR_0)
        || VAR_7->fx_addsy != VAR_6->fx_addsy
        || VAR_7->fx_offset != VAR_6->fx_offset))
  {
    fixS ** VAR_8;


    for (VAR_8 = &VAR_4->fix_root;
         * VAR_8 != VAR_3->fixp;
         VAR_8 = & (* VAR_8)->fx_next)
      FUNC_3 (* VAR_8 != ((void*)0));

    * VAR_8 = VAR_3->fixp->fx_next;

    VAR_3->fixp->fx_next = VAR_6;
    if (VAR_7 == ((void*)0))
      VAR_4->fix_root = VAR_3->fixp;
    else
      VAR_7->fx_next = VAR_3->fixp;

    break;
  }

       VAR_7 = VAR_6;
     }

   if (VAR_6 != ((void*)0))
     break;

   if (VAR_5 == 1)
     FUNC_2 (VAR_3->fixp->fx_file, VAR_3->fixp->fx_line,
      FUNC_1("Unmatched high relocation"));
 }
    }
}
