
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ namesz; char* namedata; int descsz; int type; } ;
typedef TYPE_1__ Elf_Internal_Note ;


 scalar_t__ FUNC_0 (char*,char*) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,int ,char const*) ;

__attribute__((used)) static int
FUNC_6 (Elf_Internal_Note *VAR_0)
{
  const char *VAR_1;

  if (VAR_0->namesz == 0)


    VAR_1 = FUNC_4 (VAR_0->type);

  else if (FUNC_0 (VAR_0->namedata, "FreeBSD"))

    VAR_1 = FUNC_1 (VAR_0->type);

  else if (FUNC_0 (VAR_0->namedata, "GNU"))

    VAR_1 = FUNC_2 (VAR_0->type);

  else if (FUNC_0 (VAR_0->namedata, "NetBSD-CORE"))

    VAR_1 = FUNC_3 (VAR_0->type);

  else


      VAR_1 = FUNC_4 (VAR_0->type);

  FUNC_5 ("  %-13s 0x%08lx\t%s\n",
   VAR_0->namesz ? VAR_0->namedata : "(NONE)",
   VAR_0->descsz, VAR_1);
  return 1;
}
