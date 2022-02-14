
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct obj_section {TYPE_1__* the_bfd_section; int endaddr; int addr; } ;
typedef int flagword ;
typedef int bfd ;
struct TYPE_3__ {int filepos; } ;


 int FUNC_0 (int *,TYPE_1__*) ;
 char* FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (char const*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (char*,char const*) ;

__attribute__((used)) static void
FUNC_5 (bfd *VAR_0,
       struct obj_section *VAR_1,
       char *VAR_2)
{
  flagword VAR_3 = FUNC_0 (VAR_0, VAR_1->the_bfd_section);
  const char *VAR_4 = FUNC_1 (VAR_0, VAR_1->the_bfd_section);

  if (VAR_2 == ((void*)0) || *VAR_2 == '\0'
      || FUNC_4 (VAR_2, VAR_4)
      || FUNC_3 (VAR_2, VAR_3))
    {
      FUNC_2 (VAR_4, VAR_3, VAR_1->addr, VAR_1->endaddr,
     VAR_1->the_bfd_section->filepos);
    }
}
