
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ld_buckets; scalar_t__ ld_stab; scalar_t__ ld_hash; scalar_t__ ld_symb_size; } ;
struct sunos_dynamic_info {scalar_t__ dynsym_count; int * canonical_dynsym; scalar_t__ dynstr; TYPE_2__* dynsym; TYPE_1__ dyninfo; } ;
typedef int file_ptr ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd ;
typedef int asymbol ;
typedef int aout_symbol_type ;
struct TYPE_4__ {int * e_strx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int * FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (void*,scalar_t__,int *) ;
 int * FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static long
FUNC_11 (bfd *VAR_4, asymbol **VAR_5)
{
  struct sunos_dynamic_info *VAR_6;
  unsigned long VAR_7;

  if (! FUNC_10 (VAR_4))
    return -1;

  VAR_6 = (struct sunos_dynamic_info *) FUNC_9 (VAR_4);
  if (VAR_6->canonical_dynsym == ((void*)0))
    {
      bfd_size_type VAR_8;
      bfd_size_type VAR_9 = VAR_6->dyninfo.ld_symb_size;

      VAR_8 = (bfd_size_type) VAR_6->dynsym_count * sizeof (aout_symbol_type);
      VAR_6->canonical_dynsym = FUNC_3 (VAR_4, VAR_8);
      if (VAR_6->canonical_dynsym == ((void*)0) && VAR_6->dynsym_count != 0)
 return -1;

      if (! FUNC_2 (VAR_4, VAR_6->canonical_dynsym,
         VAR_6->dynsym,
         (bfd_size_type) VAR_6->dynsym_count,
         VAR_6->dynstr, VAR_9, VAR_3))
 {
   if (VAR_6->canonical_dynsym != ((void*)0))
     {
       FUNC_6 (VAR_4, VAR_6->canonical_dynsym);
       VAR_6->canonical_dynsym = ((void*)0);
     }
   return -1;
 }
    }


  for (VAR_7 = 0; VAR_7 < VAR_6->dynsym_count; VAR_7++)
    *VAR_5++ = (asymbol *) (VAR_6->canonical_dynsym + VAR_7);
  *VAR_5 = ((void*)0);

  return VAR_6->dynsym_count;
}
