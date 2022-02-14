
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disasm_line {int dummy; } ;
struct annotate_browser {int searching_backwards; int search_bf; } ;
typedef int s64 ;


 struct disasm_line* FUNC_0 (struct annotate_browser*,int ,int *) ;
 int FUNC_1 (struct annotate_browser*,struct disasm_line*,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static bool FUNC_3(struct annotate_browser *VAR_0)
{
 struct disasm_line *VAR_1;
 s64 VAR_2;

 VAR_1 = FUNC_0(VAR_0, VAR_0->search_bf, &VAR_2);
 if (VAR_1 == ((void*)0)) {
  FUNC_2("String not found!");
  return 0;
 }

 FUNC_1(VAR_0, VAR_1, VAR_2);
 VAR_0->searching_backwards = 1;
 return 1;
}
