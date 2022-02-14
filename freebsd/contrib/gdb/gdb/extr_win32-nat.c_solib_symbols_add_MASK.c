
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct section_addr_info {TYPE_1__* other; } ;
struct objfile {int dummy; } ;
struct cleanup {int dummy; } ;
typedef int bfd ;
struct TYPE_2__ {char* name; int addr; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 struct section_addr_info* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (struct cleanup*) ;
 int FUNC_5 (struct section_addr_info*) ;
 struct section_addr_info* FUNC_6 (int *,int ) ;
 struct cleanup* FUNC_7 (int ,struct section_addr_info*) ;
 struct objfile* FUNC_8 (char*,int,struct section_addr_info*,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct objfile *
FUNC_9 (char *VAR_3, int VAR_4, CORE_ADDR VAR_5)
{
  struct section_addr_info *VAR_6 = ((void*)0);
  static struct objfile *VAR_7 = ((void*)0);
  bfd *VAR_8 = ((void*)0);





  if (!VAR_3 || !VAR_3[0])
    return ((void*)0);

  VAR_8 = FUNC_3 (VAR_3, "pei-i386");

  if (!VAR_8)
    {

      VAR_8 = FUNC_3 (VAR_3, "pe-i386");
    }

  if (VAR_8)
    {
      if (FUNC_1 (VAR_8, VAR_1))
 {
   VAR_6 = FUNC_6 (VAR_8, VAR_5);
 }

      FUNC_2 (VAR_8);
    }

  if (VAR_6)
    {
      VAR_7 = FUNC_8 (VAR_3, VAR_4, VAR_6, 0, VAR_0);
      FUNC_5 (VAR_6);
    }
  else
    {

      struct cleanup *VAR_9;

      VAR_6 = FUNC_0 (1);
      VAR_9 = FUNC_7 (VAR_2, VAR_6);
      VAR_6->other[0].name = ".text";
      VAR_6->other[0].addr = VAR_5;

      VAR_7 = FUNC_8 (VAR_3, VAR_4, VAR_6, 0, VAR_0);
      FUNC_4 (VAR_9);
    }

  return VAR_7;
}
