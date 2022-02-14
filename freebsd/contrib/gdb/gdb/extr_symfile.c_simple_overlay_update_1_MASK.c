
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obj_section {scalar_t__ ovly_mapped; int * the_bfd_section; TYPE_1__* objfile; } ;
typedef int bfd ;
typedef int asection ;
struct TYPE_2__ {int * obfd; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int VAR_4 ;
 scalar_t__** VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (scalar_t__,int*,int) ;

__attribute__((used)) static int
FUNC_4 (struct obj_section *VAR_7)
{
  int VAR_8, VAR_9;
  bfd *VAR_10 = VAR_7->objfile->obfd;
  asection *VAR_11 = VAR_7->the_bfd_section;

  VAR_9 = FUNC_0 (VAR_7->the_bfd_section);
  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
    if (VAR_5[VAR_8][VAR_3] == FUNC_2 (VAR_10, VAR_11)
 && VAR_5[VAR_8][VAR_0] == FUNC_1 (VAR_10, VAR_11)
                                            )
      {
 FUNC_3 (VAR_6 + VAR_8 * VAR_2,
    (int *) VAR_5[VAR_8], 4);
 if (VAR_5[VAR_8][VAR_3] == FUNC_2 (VAR_10, VAR_11)
     && VAR_5[VAR_8][VAR_0] == FUNC_1 (VAR_10, VAR_11)
                                                )
   {
     VAR_7->ovly_mapped = VAR_5[VAR_8][VAR_1];
     return 1;
   }
 else
   return 0;
      }
  return 0;
}
