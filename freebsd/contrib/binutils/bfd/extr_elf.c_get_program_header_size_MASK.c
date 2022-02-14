
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct elf_backend_data {int (* elf_backend_additional_program_headers ) (TYPE_2__*,struct bfd_link_info*) ;TYPE_1__* s; } ;
struct bfd_link_info {int dummy; } ;
typedef size_t bfd_size_type ;
struct TYPE_12__ {TYPE_3__* sections; } ;
typedef TYPE_2__ bfd ;
struct TYPE_13__ {int flags; struct TYPE_13__* next; int name; } ;
typedef TYPE_3__ asection ;
struct TYPE_14__ {scalar_t__ stack_flags; scalar_t__ eh_frame_hdr; scalar_t__ relro; } ;
struct TYPE_11__ {size_t sizeof_phdr; } ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 TYPE_3__* FUNC_2 (TYPE_2__*,char*) ;
 TYPE_7__* FUNC_3 (TYPE_2__*) ;
 struct elf_backend_data* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,struct bfd_link_info*) ;

__attribute__((used)) static bfd_size_type
FUNC_6 (bfd *VAR_2, struct bfd_link_info *VAR_3)
{
  size_t VAR_4;
  asection *VAR_5;
  const struct elf_backend_data *VAR_6;



  VAR_4 = 2;

  VAR_5 = FUNC_2 (VAR_2, ".interp");
  if (VAR_5 != ((void*)0) && (VAR_5->flags & VAR_0) != 0)
    {




      VAR_4 += 2;
    }

  if (FUNC_2 (VAR_2, ".dynamic") != ((void*)0))
    {

      ++VAR_4;

      if (FUNC_3 (VAR_2)->relro)
 {


   ++VAR_4;
 }
    }

  if (FUNC_3 (VAR_2)->eh_frame_hdr)
    {

      ++VAR_4;
    }

  if (FUNC_3 (VAR_2)->stack_flags)
    {

      ++VAR_4;
    }

  for (VAR_5 = VAR_2->sections; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
    {
      if ((VAR_5->flags & VAR_0) != 0
   && FUNC_0 (VAR_5->name, ".note"))
 {

   ++VAR_4;
 }
    }

  for (VAR_5 = VAR_2->sections; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
    {
      if (VAR_5->flags & VAR_1)
 {

   ++VAR_4;
   break;
 }
    }


  VAR_6 = FUNC_4 (VAR_2);
  if (VAR_6->elf_backend_additional_program_headers)
    {
      int VAR_7;

      VAR_7 = (*VAR_6->elf_backend_additional_program_headers) (VAR_2, VAR_3);
      if (VAR_7 == -1)
 FUNC_1 ();
      VAR_4 += VAR_7;
    }

  return VAR_4 * VAR_6->s->sizeof_phdr;
}
