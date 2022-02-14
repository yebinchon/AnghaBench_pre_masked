
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_2__ {char* name; int type; int descsz; int namesz; } ;
typedef TYPE_1__ Elf_External_Note ;


 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (char*,void const*,int) ;
 char* FUNC_2 (char*,int) ;
 int FUNC_3 (char const*) ;

char *
FUNC_4 (bfd *VAR_0,
      char *VAR_1,
      int *VAR_2,
      const char *VAR_3,
      int VAR_4,
      const void *VAR_5,
      int VAR_6)
{
  Elf_External_Note *VAR_7;
  size_t VAR_8;
  size_t VAR_9;
  char *VAR_10;

  VAR_8 = 0;
  if (VAR_3 != ((void*)0))
    VAR_8 = FUNC_3 (VAR_3) + 1;

  VAR_9 = 12 + ((VAR_8 + 3) & -4) + ((VAR_6 + 3) & -4);

  VAR_1 = FUNC_2 (VAR_1, *VAR_2 + VAR_9);
  VAR_10 = VAR_1 + *VAR_2;
  *VAR_2 += VAR_9;
  VAR_7 = (Elf_External_Note *) VAR_10;
  FUNC_0 (VAR_0, VAR_8, VAR_7->namesz);
  FUNC_0 (VAR_0, VAR_6, VAR_7->descsz);
  FUNC_0 (VAR_0, VAR_4, VAR_7->type);
  VAR_10 = VAR_7->name;
  if (VAR_3 != ((void*)0))
    {
      FUNC_1 (VAR_10, VAR_3, VAR_8);
      VAR_10 += VAR_8;
      while (VAR_8 & 3)
 {
   *VAR_10++ = '\0';
   ++VAR_8;
 }
    }
  FUNC_1 (VAR_10, VAR_5, VAR_6);
  VAR_10 += VAR_6;
  while (VAR_6 & 3)
    {
      *VAR_10++ = '\0';
      ++VAR_6;
    }
  return VAR_1;
}
