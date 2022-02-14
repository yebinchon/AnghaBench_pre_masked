
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ld_symb_size; scalar_t__ ld_symbols; scalar_t__ ld_stab; } ;
struct sunos_dynamic_info {scalar_t__ dynsym_count; int * dynstr; TYPE_1__ dyninfo; int * dynsym; int valid; } ;
typedef int file_ptr ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int *,int) ;
 int FUNC_1 (void*,int,int *) ;
 int VAR_4 ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (bfd *VAR_5)
{
  struct sunos_dynamic_info *VAR_6;
  bfd_size_type VAR_7;


  if (FUNC_5 (VAR_5) == ((void*)0))
    {
      if (! FUNC_6 (VAR_5))
   return VAR_1;
    }

  VAR_6 = (struct sunos_dynamic_info *) FUNC_5 (VAR_5);
  if (! VAR_6->valid)
    {
      FUNC_4 (VAR_4);
      return VAR_1;
    }


  if (VAR_6->dynsym == ((void*)0))
    {
      VAR_7 = (bfd_size_type) VAR_6->dynsym_count * VAR_0;
      VAR_6->dynsym = FUNC_0 (VAR_5, VAR_7);
      if (VAR_6->dynsym == ((void*)0) && VAR_6->dynsym_count != 0)
 return VAR_1;
      if (FUNC_3 (VAR_5, (file_ptr) VAR_6->dyninfo.ld_stab, VAR_2) != 0
   || FUNC_1 ((void *) VAR_6->dynsym, VAR_7, VAR_5) != VAR_7)
 {
   if (VAR_6->dynsym != ((void*)0))
     {
       FUNC_2 (VAR_5, VAR_6->dynsym);
       VAR_6->dynsym = ((void*)0);
     }
   return VAR_1;
 }
    }


  if (VAR_6->dynstr == ((void*)0))
    {
      VAR_7 = VAR_6->dyninfo.ld_symb_size;
      VAR_6->dynstr = FUNC_0 (VAR_5, VAR_7);
      if (VAR_6->dynstr == ((void*)0) && VAR_6->dyninfo.ld_symb_size != 0)
 return VAR_1;
      if (FUNC_3 (VAR_5, (file_ptr) VAR_6->dyninfo.ld_symbols, VAR_2) != 0
   || FUNC_1 ((void *) VAR_6->dynstr, VAR_7, VAR_5) != VAR_7)
 {
   if (VAR_6->dynstr != ((void*)0))
     {
       FUNC_2 (VAR_5, VAR_6->dynstr);
       VAR_6->dynstr = ((void*)0);
     }
   return VAR_1;
 }
    }

  return VAR_3;
}
