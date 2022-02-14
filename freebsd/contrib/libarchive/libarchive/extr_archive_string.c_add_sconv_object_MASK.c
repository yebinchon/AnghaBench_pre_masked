
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string_conv {struct archive_string_conv* next; } ;
struct archive {struct archive_string_conv* sconv; } ;



__attribute__((used)) static void
FUNC_0(struct archive *VAR_0, struct archive_string_conv *VAR_1)
{
 struct archive_string_conv **VAR_2;


 VAR_2 = &(VAR_0->sconv);
 while (*VAR_2 != ((void*)0))
  VAR_2 = &((*VAR_2)->next);
 *VAR_2 = VAR_1;
}
