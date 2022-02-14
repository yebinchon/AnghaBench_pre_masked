
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ bfd_vma ;
typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_5__ {char* obj_attrs_vendor; } ;
struct TYPE_4__ {int sh_size; int bfd_section; } ;
typedef TYPE_1__ Elf_Internal_Shdr ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int *,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int,unsigned int,char*) ;
 int FUNC_3 (int *,int,int,unsigned int) ;
 int FUNC_4 (int *,int,int,char*) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ,int *,int ,int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 TYPE_2__* FUNC_9 (int *) ;
 void* FUNC_10 (int *,int *,unsigned int*) ;
 scalar_t__ FUNC_11 (char*,char const*) ;
 int FUNC_12 (char*) ;

void
FUNC_13 (bfd *VAR_2, Elf_Internal_Shdr * VAR_3)
{
  bfd_byte *VAR_4;
  bfd_byte *VAR_5;
  bfd_vma VAR_6;
  const char *VAR_7;

  VAR_4 = FUNC_7 (VAR_3->sh_size);
  if (!VAR_4)
    return;
  if (!FUNC_6 (VAR_2, VAR_3->bfd_section, VAR_4, 0,
     VAR_3->sh_size))
    {
      FUNC_8 (VAR_4);
      return;
    }
  VAR_5 = VAR_4;
  VAR_7 = FUNC_9 (VAR_2)->obj_attrs_vendor;
  if (*(VAR_5++) == 'A')
    {
      VAR_6 = VAR_3->sh_size - 1;
      while (VAR_6 > 0)
 {
   int VAR_8;
   bfd_vma VAR_9;
   int VAR_10;

   VAR_9 = FUNC_5 (VAR_2, VAR_5);
   VAR_5 += 4;
   if (VAR_9 > VAR_6)
     VAR_9 = VAR_6;
   VAR_6 -= VAR_9;
   VAR_8 = FUNC_12 ((char *)VAR_5) + 1;
   VAR_9 -= VAR_8 + 4;
   if (VAR_7 && FUNC_11 ((char *)VAR_5, VAR_7) == 0)
     VAR_10 = VAR_1;
   else if (FUNC_11 ((char *)VAR_5, "gnu") == 0)
     VAR_10 = VAR_0;
   else
     {

       VAR_5 += VAR_8 + VAR_9;
       continue;
     }

   VAR_5 += VAR_8;
   while (VAR_9 > 0)
     {
       int VAR_11;
       unsigned int VAR_12;
       unsigned int VAR_13;
       bfd_vma VAR_14;
       bfd_byte *VAR_15;

       VAR_11 = FUNC_10 (VAR_2, VAR_5, &VAR_12);
       VAR_5 += VAR_12;
       VAR_14 = FUNC_5 (VAR_2, VAR_5);
       VAR_5 += 4;
       if (VAR_14 > VAR_9)
  VAR_14 = VAR_9;
       VAR_9 -= VAR_14;
       VAR_14 -= VAR_12 + 4;
       VAR_15 = VAR_5 + VAR_14;
       switch (VAR_11)
  {
  case 130:
    while (VAR_5 < VAR_15)
      {
        int VAR_16;

        VAR_11 = FUNC_10 (VAR_2, VAR_5, &VAR_12);
        VAR_5 += VAR_12;
        VAR_16 = FUNC_0 (VAR_2, VAR_10, VAR_11);
        switch (VAR_16)
   {
   case 3:
     VAR_13 = FUNC_10 (VAR_2, VAR_5, &VAR_12);
     VAR_5 += VAR_12;
     FUNC_2 (VAR_2, VAR_10, VAR_13,
             (char *)VAR_5);
     VAR_5 += FUNC_12 ((char *)VAR_5) + 1;
     break;
   case 2:
     FUNC_4 (VAR_2, VAR_10, VAR_11,
             (char *)VAR_5);
     VAR_5 += FUNC_12 ((char *)VAR_5) + 1;
     break;
   case 1:
     VAR_13 = FUNC_10 (VAR_2, VAR_5, &VAR_12);
     VAR_5 += VAR_12;
     FUNC_3 (VAR_2, VAR_10, VAR_11, VAR_13);
     break;
   default:
     FUNC_1 ();
   }
      }
    break;
  case 129:
  case 128:


  default:

    VAR_5 += VAR_14;
    VAR_14 = 0;
    break;
  }
     }
 }
    }
  FUNC_8 (VAR_4);
}
