
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int d_ptr; } ;
struct TYPE_5__ {int d_tag; TYPE_1__ d_un; } ;
typedef TYPE_2__ Elf_Internal_Dyn ;



 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char) ;

__attribute__((used)) static void
FUNC_3 (Elf_Internal_Dyn *VAR_1)
{
  switch (VAR_1->d_tag)
    {
    case 128:

      FUNC_0 (VAR_1->d_un.d_ptr, VAR_0);
      FUNC_1 (" -- ");
      FUNC_0 (VAR_1->d_un.d_ptr + (3 * 8), VAR_0);
      break;

    default:
      FUNC_0 (VAR_1->d_un.d_ptr, VAR_0);
      break;
    }
  FUNC_2 ('\n');
}
