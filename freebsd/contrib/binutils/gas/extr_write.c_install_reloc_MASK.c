
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fr_address; int fr_literal; } ;
typedef TYPE_1__ fragS ;
typedef int bfd_reloc_status_type ;
typedef int asection ;
typedef int arelent ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned int,int ) ;
 int FUNC_2 (int ,char*,unsigned int,int) ;
 int FUNC_3 (int ,int *,int ,int ,int *,char**) ;



 int VAR_0 ;

__attribute__((used)) static void
FUNC_4 (asection *VAR_1, arelent *VAR_2, fragS *VAR_3,
        char *VAR_4, unsigned int VAR_5)
{
  char *VAR_6;
  bfd_reloc_status_type VAR_7;

  VAR_7 = FUNC_3 (VAR_0, VAR_2,
         VAR_3->fr_literal, VAR_3->fr_address,
         VAR_1, &VAR_6);
  switch (VAR_7)
    {
    case 130:
      break;
    case 128:
      FUNC_1 (VAR_4, VAR_5, FUNC_0("relocation overflow"));
      break;
    case 129:
      FUNC_1 (VAR_4, VAR_5, FUNC_0("relocation out of range"));
      break;
    default:
      FUNC_2 (FUNC_0("%s:%u: bad return from bfd_install_relocation: %x"),
  VAR_4, VAR_5, VAR_7);
    }
}
