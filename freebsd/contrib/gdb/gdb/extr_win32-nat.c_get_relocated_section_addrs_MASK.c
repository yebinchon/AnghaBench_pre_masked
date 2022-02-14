
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section_table {int endaddr; int addr; } ;
struct section_addr_info {int dummy; } ;
typedef int bfd ;
typedef int asection ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 struct section_addr_info* FUNC_3 (struct section_table*,struct section_table*) ;
 int FUNC_4 (int *,struct section_table**,struct section_table**) ;
 int FUNC_5 (struct section_table*) ;

__attribute__((used)) static struct section_addr_info *
FUNC_6 (bfd *VAR_0, CORE_ADDR VAR_1)
{
  struct section_addr_info *VAR_2 = ((void*)0);
  int VAR_3 = FUNC_0 (VAR_0);
  asection *VAR_4 = FUNC_1 (VAR_0, ".text");
  CORE_ADDR VAR_5;

  if (!VAR_4)
    {

    }

  else if (VAR_1 == (VAR_5 = FUNC_2 (VAR_0, VAR_4)))
    {

    }

  else
    {




      CORE_ADDR VAR_6 = VAR_1 - VAR_5;

      struct section_table *VAR_7 = ((void*)0);
      struct section_table *VAR_8 = ((void*)0);
      struct section_table *VAR_9 = ((void*)0);

      FUNC_4 (VAR_0, &VAR_7, &VAR_8);

      for (VAR_9 = VAR_7; VAR_9 < VAR_8; ++VAR_9)
 {

   VAR_9->addr += VAR_6;
   VAR_9->endaddr += VAR_6;
 }

      VAR_2 = FUNC_3 (VAR_7,
          VAR_8);

      FUNC_5 (VAR_7);
    }

  return VAR_2;
}
