
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bfd_section {int dummy; } ;
typedef int bfd_byte ;
struct TYPE_5__ {scalar_t__ d_ptr; } ;
struct TYPE_8__ {TYPE_1__ d_un; scalar_t__ d_tag; } ;
struct TYPE_6__ {scalar_t__ d_ptr; } ;
struct TYPE_7__ {TYPE_2__ d_un; scalar_t__ d_tag; } ;
typedef TYPE_3__ Elf64_External_Dyn ;
typedef TYPE_4__ Elf32_External_Dyn ;
typedef void* CORE_ADDR ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct bfd_section* FUNC_2 (int ,char*) ;
 void* FUNC_3 (int ,int *) ;
 void* FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,struct bfd_section*) ;
 void* FUNC_6 (int ,struct bfd_section*) ;
 int VAR_5 ;
 void* FUNC_7 (char*,int) ;
 scalar_t__ FUNC_8 (void*,char*,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_9 (void)
{
  struct bfd_section *VAR_6;
  int VAR_7;
  CORE_ADDR VAR_8;
  char *VAR_9;
  char *VAR_10;
  int VAR_11;


  VAR_6 = FUNC_2 (VAR_5, ".dynamic");
  if (VAR_6 == ((void*)0))
    return 0;
  VAR_8 = FUNC_6 (VAR_5, VAR_6);


  VAR_7 = FUNC_5 (VAR_5, VAR_6);
  VAR_9 = FUNC_0 (VAR_7);
  if (FUNC_8 (VAR_8, VAR_9, VAR_7))
    return 0;





  VAR_11 = FUNC_1 (VAR_5);
  if (VAR_11 == -1)
    return 0;

  if (VAR_11 == 32)
    {
      for (VAR_10 = VAR_9 + VAR_7;
    VAR_9 < VAR_10;
    VAR_9 += sizeof (Elf32_External_Dyn))
 {
   Elf32_External_Dyn *VAR_12 = (Elf32_External_Dyn *) VAR_9;
   long VAR_13;
   CORE_ADDR VAR_14;

   VAR_13 = FUNC_3 (VAR_5, (bfd_byte *) VAR_12->d_tag);
   if (VAR_13 == VAR_2)
     break;
   else if (VAR_13 == VAR_0)
     {
       VAR_14 = FUNC_3 (VAR_5,
          (bfd_byte *) VAR_12->d_un.d_ptr);
       return VAR_14;
     }
   else if (VAR_13 == VAR_1)
     {
       char *VAR_15;
       int VAR_16 = VAR_4 / VAR_3;

       VAR_15 = FUNC_0 (VAR_16);


       VAR_14 = FUNC_3 (VAR_5,
          (bfd_byte *) VAR_12->d_un.d_ptr);
       if (FUNC_8 (VAR_14, VAR_15, VAR_16))
  return 0;
       return FUNC_7 (VAR_15, VAR_16);
     }
 }
    }
  else
    {
      for (VAR_10 = VAR_9 + VAR_7;
    VAR_9 < VAR_10;
    VAR_9 += sizeof (Elf64_External_Dyn))
 {
   Elf64_External_Dyn *VAR_17 = (Elf64_External_Dyn *) VAR_9;
   long VAR_18;
   CORE_ADDR VAR_19;

   VAR_18 = FUNC_4 (VAR_5, (bfd_byte *) VAR_17->d_tag);
   if (VAR_18 == VAR_2)
     break;
   else if (VAR_18 == VAR_0)
     {
       VAR_19 = FUNC_4 (VAR_5,
          (bfd_byte *) VAR_17->d_un.d_ptr);
       return VAR_19;
     }
   else if (VAR_18 == VAR_1)
     {
       char *VAR_20;
       int VAR_21 = VAR_4 / VAR_3;

       VAR_20 = FUNC_0 (VAR_21);


       VAR_19 = FUNC_4 (VAR_5,
          (bfd_byte *) VAR_17->d_un.d_ptr);
       if (FUNC_8 (VAR_19, VAR_20, VAR_21))
  return 0;
       return FUNC_7 (VAR_20, VAR_21);
     }
 }
    }


  return 0;
}
