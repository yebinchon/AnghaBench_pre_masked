
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct function_info {void* marking; void* visit2; struct call_info* call_list; } ;
struct call_info {struct call_info* next; struct function_info* fun; } ;
struct bfd_link_info {TYPE_1__* callbacks; } ;
struct TYPE_2__ {int (* info ) (int ,char const*,char const*) ;} ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (struct function_info*) ;
 int FUNC_2 (int ,char const*,char const*) ;

__attribute__((used)) static void
FUNC_3 (struct function_info *VAR_2, struct bfd_link_info *VAR_3)
{
  struct call_info **VAR_4, *VAR_5;

  VAR_2->visit2 = VAR_1;
  VAR_2->marking = VAR_1;

  VAR_4 = &VAR_2->call_list;
  while ((VAR_5 = *VAR_4) != ((void*)0))
    {
      if (!VAR_5->fun->visit2)
 FUNC_3 (VAR_5->fun, VAR_3);
      else if (VAR_5->fun->marking)
 {
   const char *VAR_6 = FUNC_1 (VAR_2);
   const char *VAR_7 = FUNC_1 (VAR_5->fun);

   VAR_3->callbacks->info (FUNC_0("Stack analysis will ignore the call "
       "from %s to %s\n"),
     VAR_6, VAR_7);
   *VAR_4 = VAR_5->next;
   continue;
 }
      VAR_4 = &VAR_5->next;
    }
  VAR_2->marking = VAR_0;
}
