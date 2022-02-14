
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct internal_ldrel {int l_symndx; int l_vaddr; } ;
struct internal_ldhdr {int l_nreloc; } ;
typedef int bfd_byte ;
struct TYPE_20__ {int flags; } ;
typedef TYPE_1__ bfd ;
typedef int asymbol ;
struct TYPE_21__ {int ** symbol_ptr_ptr; } ;
typedef TYPE_2__ asection ;
struct TYPE_22__ {int howto; scalar_t__ addend; int address; int ** sym_ptr_ptr; } ;
typedef TYPE_3__ arelent ;
struct TYPE_23__ {int * contents; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_3__* FUNC_1 (TYPE_1__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,struct internal_ldhdr*) ;
 int FUNC_7 (TYPE_1__*,int *,struct internal_ldhdr*) ;
 int FUNC_8 (TYPE_1__*,int *,struct internal_ldrel*) ;
 TYPE_6__* FUNC_9 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*) ;

long
FUNC_11 (bfd *VAR_4,
           arelent **VAR_5,
           asymbol **VAR_6)
{
  asection *VAR_7;
  bfd_byte *VAR_8;
  struct internal_ldhdr VAR_9;
  arelent *VAR_10;
  bfd_byte *VAR_11, *VAR_12;

  if ((VAR_4->flags & VAR_0) == 0)
    {
      FUNC_3 (VAR_2);
      return -1;
    }

  VAR_7 = FUNC_2 (VAR_4, ".loader");
  if (VAR_7 == ((void*)0))
    {
      FUNC_3 (VAR_3);
      return -1;
    }

  if (! FUNC_10 (VAR_4, VAR_7))
    return -1;
  VAR_8 = FUNC_9 (VAR_4, VAR_7)->contents;

  FUNC_7 (VAR_4, VAR_8, &VAR_9);

  VAR_10 = FUNC_1 (VAR_4, VAR_9.l_nreloc * sizeof (arelent));
  if (VAR_10 == ((void*)0))
    return -1;

  VAR_11 = VAR_8 + FUNC_6(VAR_4, &VAR_9);

  VAR_12 = VAR_11 + VAR_9.l_nreloc * FUNC_5(VAR_4);
  for (; VAR_11 < VAR_12; VAR_11 += FUNC_5(VAR_4), VAR_10++,
  VAR_5++)
    {
      struct internal_ldrel VAR_13;

      FUNC_8 (VAR_4, VAR_11, &VAR_13);

      if (VAR_13.l_symndx >= 3)
 VAR_10->sym_ptr_ptr = VAR_6 + (VAR_13.l_symndx - 3);
      else
 {
   const char *VAR_14;
   asection *VAR_15;

   switch (VAR_13.l_symndx)
     {
     case 0:
       VAR_14 = ".text";
       break;
     case 1:
       VAR_14 = ".data";
       break;
     case 2:
       VAR_14 = ".bss";
       break;
     default:
       FUNC_0 ();
       break;
     }

   VAR_15 = FUNC_2 (VAR_4, VAR_14);
   if (VAR_15 == ((void*)0))
     {
       FUNC_3 (VAR_1);
       return -1;
     }

   VAR_10->sym_ptr_ptr = VAR_15->symbol_ptr_ptr;
 }

      VAR_10->address = VAR_13.l_vaddr;
      VAR_10->addend = 0;




      VAR_10->howto = FUNC_4(VAR_4);



      *VAR_5 = VAR_10;
    }

  *VAR_5 = ((void*)0);

  return VAR_9.l_nreloc;
}
