
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int file_ptr ;
typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_size_type ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_9__ {scalar_t__ output_has_begun; TYPE_2__* sections; } ;
typedef TYPE_1__ bfd ;
struct TYPE_10__ {int flags; scalar_t__ size; scalar_t__ lma; scalar_t__ filepos; struct TYPE_10__* next; } ;
typedef TYPE_2__ asection ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,unsigned long) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_2__*,void const*,int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (int ,int ,unsigned long) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (bfd *VAR_6,
        asection *VAR_7,
        const void * VAR_8,
        file_ptr VAR_9,
        bfd_size_type VAR_10)
{
  if (VAR_10 == 0)
    return VAR_5;

  if (! VAR_6->output_has_begun)
    {
      bfd_boolean VAR_11;
      bfd_vma VAR_12;
      asection *VAR_13;




      VAR_11 = VAR_0;
      VAR_12 = 0;
      for (VAR_13 = VAR_6->sections; VAR_13 != ((void*)0); VAR_13 = VAR_13->next)
 if (((VAR_13->flags
       & (VAR_2 | VAR_3 | VAR_1 | VAR_4))
      == (VAR_2 | VAR_3 | VAR_1))
     && (VAR_13->size > 0)
     && (! VAR_11 || VAR_13->lma < VAR_12))
   {
     VAR_12 = VAR_13->lma;
     VAR_11 = VAR_5;
   }

      for (VAR_13 = VAR_6->sections; VAR_13 != ((void*)0); VAR_13 = VAR_13->next)
 {
   VAR_13->filepos = VAR_13->lma - VAR_12;



   if ((VAR_13->flags
        & (VAR_2 | VAR_1 | VAR_4))
       != (VAR_2 | VAR_1)
       || (VAR_13->size == 0))
     continue;







   if (VAR_13->filepos < 0)
     FUNC_1)
       (FUNC_0("Warning: Writing section `%s' to huge (ie negative) file offset 0x%lx."),
        FUNC_3 (VAR_6, VAR_13),
        (unsigned long) VAR_13->filepos);
 }

      VAR_6->output_has_begun = VAR_5;
    }




  if ((VAR_7->flags & (VAR_3 | VAR_1)) == 0)
    return VAR_5;
  if ((VAR_7->flags & VAR_4) != 0)
    return VAR_5;

  return FUNC_2 (VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
}
