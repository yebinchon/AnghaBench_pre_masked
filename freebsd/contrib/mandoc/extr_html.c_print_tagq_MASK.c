
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct tag {struct tag const* next; } const tag ;
struct html {struct tag const* tag; } ;


 int FUNC_0 (struct html*,struct tag const*) ;

void
FUNC_1(struct html *VAR_0, const struct tag *VAR_1)
{
 struct tag *VAR_2, *VAR_3;

 for (VAR_2 = VAR_0->tag; VAR_2 != ((void*)0); VAR_2 = VAR_3) {
  VAR_3 = VAR_2 == VAR_1 ? ((void*)0) : VAR_2->next;
  FUNC_0(VAR_0, VAR_2);
 }
}
