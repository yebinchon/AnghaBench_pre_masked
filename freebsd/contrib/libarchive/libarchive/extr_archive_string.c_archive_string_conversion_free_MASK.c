
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string_conv {struct archive_string_conv* next; } ;
struct archive {int * current_code; struct archive_string_conv* sconv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct archive_string_conv*) ;

void
FUNC_2(struct archive *VAR_0)
{
 struct archive_string_conv *VAR_1;
 struct archive_string_conv *VAR_2;

 for (VAR_1 = VAR_0->sconv; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;
  FUNC_1(VAR_1);
 }
 VAR_0->sconv = ((void*)0);
 FUNC_0(VAR_0->current_code);
 VAR_0->current_code = ((void*)0);
}
