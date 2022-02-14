
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mips_hi_fixup {TYPE_2__* fixp; int seg; struct mips_hi_fixup* next; } ;
struct TYPE_5__ {TYPE_2__* fix_root; } ;
typedef TYPE_1__ segment_info_type ;
struct TYPE_6__ {scalar_t__ fx_r_type; scalar_t__ fx_addsy; scalar_t__ fx_offset; struct TYPE_6__* fx_next; } ;
typedef TYPE_2__ fixS ;
typedef int bfd_boolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 struct mips_hi_fixup* VAR_4 ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 TYPE_1__* FUNC_4 (int ) ;

void
FUNC_5 (void)
{
  struct mips_hi_fixup *VAR_5;

  for (VAR_5 = VAR_4; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
    {
      segment_info_type *VAR_6;
      bfd_boolean VAR_7;
      fixS **VAR_8, **VAR_9, **VAR_10;

      FUNC_0 (FUNC_3 (VAR_5->fixp->fx_r_type));



      if (VAR_5->fixp->fx_r_type == VAR_2
   && !FUNC_2 (VAR_5->fixp->fx_addsy, VAR_5->seg))
 continue;


      if (FUNC_1 (VAR_5->fixp))
 continue;

      VAR_6 = FUNC_4 (VAR_5->seg);






      VAR_8 = ((void*)0);
      VAR_9 = ((void*)0);
      VAR_7 = VAR_3;
      for (VAR_10 = &VAR_6->fix_root; *VAR_10 != ((void*)0); VAR_10 = &(*VAR_10)->fx_next)
 {
   if (*VAR_10 == VAR_5->fixp)
     VAR_8 = VAR_10;

   if (((*VAR_10)->fx_r_type == VAR_0
        || (*VAR_10)->fx_r_type == VAR_1)
       && (*VAR_10)->fx_addsy == VAR_5->fixp->fx_addsy
       && (*VAR_10)->fx_offset >= VAR_5->fixp->fx_offset
       && (VAR_9 == ((void*)0)
    || (*VAR_10)->fx_offset < (*VAR_9)->fx_offset
    || (!VAR_7
        && (*VAR_10)->fx_offset == (*VAR_9)->fx_offset)))
     VAR_9 = VAR_10;

   VAR_7 = (FUNC_3 ((*VAR_10)->fx_r_type)
     && FUNC_1 (*VAR_10));
 }
      if (VAR_9 != ((void*)0))
 {
   VAR_5->fixp->fx_offset = (*VAR_9)->fx_offset;
   if (VAR_5->fixp->fx_next != *VAR_9)
     {
       *VAR_8 = VAR_5->fixp->fx_next;
       VAR_5->fixp->fx_next = *VAR_9;
       *VAR_9 = VAR_5->fixp;
     }
 }
    }
}
