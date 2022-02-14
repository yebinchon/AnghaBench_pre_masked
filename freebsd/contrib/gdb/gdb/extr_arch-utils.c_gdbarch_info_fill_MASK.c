
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_info {scalar_t__ byte_order; scalar_t__ osabi; int * bfd_arch_info; int * abfd; } ;
struct gdbarch {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (struct gdbarch*) ;
 void* FUNC_6 (struct gdbarch*) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct gdbarch*) ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_9 (struct gdbarch *VAR_8, struct gdbarch_info *VAR_9)
{

  if (VAR_9->bfd_arch_info == ((void*)0)
      && !VAR_6
      && VAR_8 != ((void*)0))
    VAR_9->bfd_arch_info = FUNC_5 (VAR_8);
  if (VAR_9->bfd_arch_info == ((void*)0)
      && VAR_9->abfd != ((void*)0)
      && FUNC_1 (VAR_9->abfd) != VAR_5
      && FUNC_1 (VAR_9->abfd) != VAR_4)
    VAR_9->bfd_arch_info = FUNC_2 (VAR_9->abfd);
  if (VAR_9->bfd_arch_info == ((void*)0)
      && VAR_8 != ((void*)0))
    VAR_9->bfd_arch_info = FUNC_5 (VAR_8);


  if (VAR_9->byte_order == VAR_2
      && !VAR_7
      && VAR_8 != ((void*)0))
    VAR_9->byte_order = FUNC_6 (VAR_8);

  if (VAR_9->byte_order == VAR_2
      && VAR_9->abfd != ((void*)0))
    VAR_9->byte_order = (FUNC_0 (VAR_9->abfd) ? VAR_0
         : FUNC_3 (VAR_9->abfd) ? VAR_1
         : VAR_2);

  if (VAR_9->byte_order == VAR_2
      && VAR_8 != ((void*)0))
    VAR_9->byte_order = FUNC_6 (VAR_8);


  if (VAR_9->osabi == VAR_3)
    VAR_9->osabi = FUNC_7 (VAR_9->abfd);
  if (VAR_9->osabi == VAR_3
      && VAR_8 != ((void*)0))
    VAR_9->osabi = FUNC_8 (VAR_8);


  FUNC_4 (VAR_9->bfd_arch_info != ((void*)0));
}
