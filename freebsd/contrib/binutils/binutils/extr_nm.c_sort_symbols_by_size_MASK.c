
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct size_sym {scalar_t__ size; void const* minisym; } ;
struct TYPE_10__ {scalar_t__ st_size; } ;
struct TYPE_11__ {TYPE_1__ internal_elf_sym; } ;
typedef TYPE_2__ elf_symbol_type ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_12__ {scalar_t__ value; } ;
typedef TYPE_3__ asymbol ;
typedef int asection ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 TYPE_3__* FUNC_6 (int *,int ,void const*,TYPE_3__*) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_8 (void*,long,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_3__* VAR_4 ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 struct size_sym* FUNC_10 (long) ;

__attribute__((used)) static long
FUNC_11 (bfd *VAR_5, bfd_boolean VAR_6, void *VAR_7,
        long VAR_8, unsigned int VAR_9,
        struct size_sym **VAR_10)
{
  struct size_sym *VAR_11;
  bfd_byte *VAR_12, *VAR_13;
  asymbol *VAR_14 = ((void*)0);
  asymbol *VAR_15, *VAR_16;

  FUNC_8 (VAR_7, VAR_8, VAR_9, VAR_1);



  VAR_11 = FUNC_10 (VAR_8 * sizeof (struct size_sym));
  *VAR_10 = VAR_11;




  VAR_12 = (bfd_byte *) VAR_7;
  VAR_13 = VAR_12 + VAR_8 * VAR_9;

  VAR_15 = VAR_3;
  VAR_16 = VAR_4;

  if (VAR_12 < VAR_13)
    {
      VAR_14 = FUNC_6 (VAR_5, VAR_6, (const void *) VAR_12,
          VAR_15);
      if (VAR_14 == ((void*)0))
 FUNC_0 (FUNC_1 (VAR_5));
    }

  for (; VAR_12 < VAR_13; VAR_12 += VAR_9)
    {
      asymbol *VAR_17;
      asection *VAR_18;
      bfd_vma VAR_19;
      asymbol *VAR_20;

      if (VAR_12 + VAR_9 < VAR_13)
 {
   VAR_17 = FUNC_6 (VAR_5,
        VAR_6,
        (const void *) (VAR_12 + VAR_9),
        VAR_16);
   if (VAR_17 == ((void*)0))
     FUNC_0 (FUNC_1 (VAR_5));
 }
      else
 VAR_17 = ((void*)0);

      VAR_18 = FUNC_3 (VAR_14);

      if (FUNC_2 (VAR_5) == VAR_0)
 VAR_19 = ((elf_symbol_type *) VAR_14)->internal_elf_sym.st_size;
      else if (FUNC_5 (VAR_18))
 VAR_19 = VAR_14->value;
      else
 {
   if (VAR_12 + VAR_9 < VAR_13
       && VAR_18 == FUNC_3 (VAR_17))
     VAR_19 = FUNC_9 (VAR_17) - FUNC_9 (VAR_14);
   else
     VAR_19 = (FUNC_4 (VAR_5, VAR_18)
    + FUNC_7 (VAR_5, VAR_18)
    - FUNC_9 (VAR_14));
 }

      if (VAR_19 != 0)
 {
   VAR_11->minisym = (const void *) VAR_12;
   VAR_11->size = VAR_19;
   ++VAR_11;
 }

      VAR_14 = VAR_17;

      VAR_20 = VAR_15;
      VAR_15 = VAR_16;
      VAR_16 = VAR_20;
    }

  VAR_8 = VAR_11 - *VAR_10;


  FUNC_8 ((void *) *VAR_10, VAR_8, sizeof (struct size_sym), VAR_2);

  return VAR_8;
}
