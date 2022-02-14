
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_section_list {struct pt_section_list* next; } ;


 int FUNC_0 (struct pt_section_list*) ;

__attribute__((used)) static void FUNC_1(struct pt_section_list *VAR_0)
{
 while (VAR_0) {
  struct pt_section_list *VAR_1;

  VAR_1 = VAR_0;
  VAR_0 = VAR_0->next;

  FUNC_0(VAR_1);
 }
}
