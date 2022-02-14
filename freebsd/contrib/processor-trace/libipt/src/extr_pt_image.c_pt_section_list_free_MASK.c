
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int section; } ;
struct pt_section_list {TYPE_1__ section; } ;


 int FUNC_0 (struct pt_section_list*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct pt_section_list *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_2(VAR_0->section.section);
 FUNC_1(&VAR_0->section);
 FUNC_0(VAR_0);
}
