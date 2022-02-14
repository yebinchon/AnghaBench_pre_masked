
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct function_info {struct call_info* call_list; } ;
struct call_info {scalar_t__ fun; scalar_t__ is_tail; struct call_info* next; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bfd_boolean
FUNC_0 (struct function_info *VAR_2, struct call_info *VAR_3)
{
  struct call_info *VAR_4;
  for (VAR_4 = VAR_2->call_list; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
    if (VAR_4->fun == VAR_3->fun)
      {


 if (VAR_4->is_tail > VAR_3->is_tail)
   VAR_4->is_tail = VAR_3->is_tail;
 return VAR_0;
      }
  VAR_3->next = VAR_2->call_list;
  VAR_2->call_list = VAR_3;
  return VAR_1;
}
