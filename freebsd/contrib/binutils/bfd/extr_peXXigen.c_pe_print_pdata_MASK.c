
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_7__ {int size; scalar_t__ vma; } ;
typedef TYPE_1__ asection ;
struct TYPE_8__ {int virt_size; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,TYPE_1__*,int **) ;
 int * FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (char,int *) ;
 int FUNC_8 (int *) ;
 TYPE_2__* FUNC_9 (int *,TYPE_1__*) ;

__attribute__((used)) static bfd_boolean
FUNC_10 (bfd * VAR_3, void * VAR_4)
{





  FILE *VAR_5 = (FILE *) VAR_4;
  bfd_byte *VAR_6 = 0;
  asection *VAR_7 = FUNC_2 (VAR_3, ".pdata");
  bfd_size_type VAR_8 = 0;
  bfd_size_type VAR_9;
  bfd_size_type VAR_10, VAR_11;
  int VAR_12 = (5 * 4);

  if (VAR_7 == ((void*)0)
      || FUNC_4 (VAR_3, VAR_7) == ((void*)0)
      || FUNC_9 (VAR_3, VAR_7) == ((void*)0))
    return VAR_2;

  VAR_11 = FUNC_9 (VAR_3, VAR_7)->virt_size;
  if ((VAR_11 % VAR_12) != 0)
    FUNC_5 (VAR_5,
      FUNC_1("Warning, .pdata section size (%ld) is not a multiple of %d\n"),
      (long) VAR_11, VAR_12);

  FUNC_5 (VAR_5,
    FUNC_1("\nThe Function Table (interpreted .pdata section contents)\n"));




  FUNC_5 (VAR_5, FUNC_1(" vma:\t\tBegin    End      EH       EH       PrologEnd  Exception\n     \t\tAddress  Address  Handler  Data     Address    Mask\n"));




  VAR_8 = VAR_7->size;
  if (VAR_8 == 0)
    return VAR_2;

  if (! FUNC_3 (VAR_3, VAR_7, &VAR_6))
    {
      if (VAR_6 != ((void*)0))
 FUNC_8 (VAR_6);
      return VAR_0;
    }

  VAR_10 = 0;

  for (VAR_9 = VAR_10; VAR_9 < VAR_11; VAR_9 += VAR_12)
    {
      bfd_vma VAR_13;
      bfd_vma VAR_14;
      bfd_vma VAR_15;
      bfd_vma VAR_16;
      bfd_vma VAR_17;
      int VAR_18;

      if (VAR_9 + (5 * 4) > VAR_11)
 break;

      VAR_13 = FUNC_0 (VAR_3, VAR_6 + VAR_9 );
      VAR_14 = FUNC_0 (VAR_3, VAR_6 + VAR_9 + 4);
      VAR_15 = FUNC_0 (VAR_3, VAR_6 + VAR_9 + 8);
      VAR_16 = FUNC_0 (VAR_3, VAR_6 + VAR_9 + 12);
      VAR_17 = FUNC_0 (VAR_3, VAR_6 + VAR_9 + 16);

      if (VAR_13 == 0 && VAR_14 == 0 && VAR_15 == 0
   && VAR_16 == 0 && VAR_17 == 0)

 break;

      VAR_18 = ((VAR_15 & 0x1) << 2) | (VAR_17 & 0x3);
      VAR_15 &= ~(bfd_vma) 0x3;
      VAR_17 &= ~(bfd_vma) 0x3;

      FUNC_7 (' ', VAR_5);
      FUNC_6 (VAR_5, VAR_9 + VAR_7->vma); FUNC_7 ('\t', VAR_5);
      FUNC_6 (VAR_5, VAR_13); FUNC_7 (' ', VAR_5);
      FUNC_6 (VAR_5, VAR_14); FUNC_7 (' ', VAR_5);
      FUNC_6 (VAR_5, VAR_15);

      FUNC_7 (' ', VAR_5);
      FUNC_6 (VAR_5, VAR_16); FUNC_7 (' ', VAR_5);
      FUNC_6 (VAR_5, VAR_17);
      FUNC_5 (VAR_5, "   %x", VAR_18);
      FUNC_5 (VAR_5, "\n");
    }

  FUNC_8 (VAR_6);

  return VAR_2;
}
