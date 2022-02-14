
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_5__ {unsigned int e_shnum; } ;
struct TYPE_4__ {unsigned int sh_type; scalar_t__ sh_size; int sh_offset; } ;
typedef int FILE ;
typedef TYPE_1__ Elf_Internal_Shdr ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (unsigned char*,int) ;
 unsigned char* FUNC_2 (unsigned char*,unsigned char* (*) (unsigned char*,int)) ;
 TYPE_3__ VAR_3 ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int *,int *,int ,int,scalar_t__,char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (unsigned char*,unsigned int*) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_7 (char*,char const*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9 (FILE *VAR_5, const char *VAR_6,
      unsigned int VAR_7,
      unsigned char *(*VAR_8) (unsigned char *),
      unsigned char *(*VAR_9)
    (unsigned char *, int))
{
  Elf_Internal_Shdr *VAR_10;
  unsigned char *VAR_11;
  unsigned char *VAR_12;
  unsigned char *VAR_13;
  bfd_vma VAR_14;
  bfd_vma VAR_15;
  unsigned VAR_16;


  for (VAR_16 = 0, VAR_10 = VAR_4;
       VAR_16 < VAR_3.e_shnum;
       VAR_16++, VAR_10++)
    {
      if (VAR_10->sh_type != VAR_7 && VAR_10->sh_type != VAR_1)
 continue;

      VAR_11 = FUNC_4 (((void*)0), VAR_5, VAR_10->sh_offset, 1, VAR_10->sh_size,
      FUNC_0("attributes"));

      if (!VAR_11)
 continue;
      VAR_12 = VAR_11;
      if (*VAR_12 == 'A')
 {
   VAR_15 = VAR_10->sh_size - 1;
   VAR_12++;
   while (VAR_15 > 0)
     {
       int VAR_17;
       bfd_boolean VAR_18;
       bfd_boolean VAR_19;

       VAR_14 = FUNC_1 (VAR_12, 4);
       VAR_12 += 4;
       if (VAR_14 > VAR_15)
  {
    FUNC_5 (FUNC_0("ERROR: Bad section length (%d > %d)\n"),
     (int)VAR_14, (int)VAR_15);
    VAR_14 = VAR_15;
  }
       VAR_15 -= VAR_14;
       FUNC_5 ("Attribute Section: %s\n", VAR_12);
       if (VAR_6 && FUNC_7 ((char *)VAR_12, VAR_6) == 0)
  VAR_18 = VAR_2;
       else
  VAR_18 = VAR_0;
       if (FUNC_7 ((char *)VAR_12, "gnu") == 0)
  VAR_19 = VAR_2;
       else
  VAR_19 = VAR_0;
       VAR_17 = FUNC_8 ((char *)VAR_12) + 1;
       VAR_12 += VAR_17;
       VAR_14 -= VAR_17 + 4;
       while (VAR_14 > 0)
  {
    int VAR_20 = *(VAR_12++);
    int VAR_21;
    bfd_vma VAR_22;
    VAR_22 = FUNC_1 (VAR_12, 4);
    if (VAR_22 > VAR_14)
      {
        FUNC_5 (FUNC_0("ERROR: Bad subsection length (%d > %d)\n"),
         (int)VAR_22, (int)VAR_14);
        VAR_22 = VAR_14;
      }
    VAR_14 -= VAR_22;
    VAR_13 = VAR_12 + VAR_22 - 1;
    VAR_12 += 4;
    switch (VAR_20)
      {
      case 1:
        FUNC_5 ("File Attributes\n");
        break;
      case 2:
        FUNC_5 ("Section Attributes:");
        goto do_numlist;
      case 3:
        FUNC_5 ("Symbol Attributes:");
      do_numlist:
        for (;;)
   {
     unsigned int VAR_23;
     VAR_21 = FUNC_6 (VAR_12, &VAR_23);
     VAR_12 += VAR_23;
     if (VAR_21 == 0)
       break;
     FUNC_5 (" %d", VAR_21);
   }
        FUNC_5 ("\n");
        break;
      default:
        FUNC_5 ("Unknown tag: %d\n", VAR_20);
        VAR_18 = VAR_0;
        break;
      }
    if (VAR_18)
      {
        while (VAR_12 < VAR_13)
   VAR_12 = VAR_8 (VAR_12);
      }
    else if (VAR_19)
      {
        while (VAR_12 < VAR_13)
   VAR_12 = FUNC_2 (VAR_12,
         VAR_9);
      }
    else
      {

        FUNC_5 ("  Unknown section contexts\n");
        VAR_12 = VAR_13;
      }
  }
     }
 }
      else
 {
   FUNC_5 (FUNC_0("Unknown format '%c'\n"), *VAR_12);
 }

      FUNC_3(VAR_11);
    }
  return 1;
}
