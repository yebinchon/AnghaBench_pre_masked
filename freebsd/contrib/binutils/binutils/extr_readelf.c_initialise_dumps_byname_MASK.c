
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dump_list_entry {int name; int type; struct dump_list_entry* next; } ;
struct TYPE_2__ {unsigned int e_shnum; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 struct dump_list_entry* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (unsigned int,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5 (void)
{
  struct dump_list_entry *VAR_3;

  for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->next)
    {
      unsigned int VAR_4;
      int VAR_5;

      for (VAR_4 = 0, VAR_5 = 0; VAR_4 < VAR_1.e_shnum; VAR_4++)
 if (FUNC_3 (FUNC_0 (VAR_2 + VAR_4), VAR_3->name))
   {
     FUNC_2 (VAR_4, VAR_3->type);
     VAR_5 = 1;
   }

      if (!VAR_5)
 FUNC_4 (FUNC_1("Section '%s' was not dumped because it does not exist!\n"),
       VAR_3->name);
    }
}
