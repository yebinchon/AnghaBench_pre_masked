
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int d_val; } ;
struct TYPE_12__ {TYPE_2__ d_un; int d_tag; } ;
struct TYPE_9__ {scalar_t__ d_val; } ;
struct TYPE_11__ {TYPE_1__ d_un; scalar_t__ d_tag; } ;
typedef int FILE ;
typedef TYPE_3__ Elf_Internal_Dyn ;
typedef TYPE_4__ Elf32_External_Dyn ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 TYPE_3__* FUNC_2 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*) ;
 TYPE_4__* FUNC_5 (int *,int *,int ,int,int,int ) ;

__attribute__((used)) static int
FUNC_6 (FILE *VAR_5)
{
  Elf32_External_Dyn *VAR_6, *VAR_7;
  Elf_Internal_Dyn *VAR_8;

  VAR_6 = FUNC_5 (((void*)0), VAR_5, VAR_1, 1, VAR_4,
     FUNC_1("dynamic section"));
  if (!VAR_6)
    return 0;




  for (VAR_7 = VAR_6, VAR_2 = 0;
       (char *) VAR_7 < (char *) VAR_6 + VAR_4;
       VAR_7++)
    {
      VAR_2++;
      if (FUNC_0 (VAR_7->d_tag) == VAR_0)
 break;
    }

  VAR_3 = FUNC_2 (VAR_2, sizeof (*VAR_8));
  if (VAR_3 == ((void*)0))
    {
      FUNC_3 (FUNC_1("Out of memory\n"));
      FUNC_4 (VAR_6);
      return 0;
    }

  for (VAR_7 = VAR_6, VAR_8 = VAR_3;
       VAR_8 < VAR_3 + VAR_2;
       VAR_7++, VAR_8++)
    {
      VAR_8->d_tag = FUNC_0 (VAR_7->d_tag);
      VAR_8->d_un.d_val = FUNC_0 (VAR_7->d_un.d_val);
    }

  FUNC_4 (VAR_6);

  return 1;
}
