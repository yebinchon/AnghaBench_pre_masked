
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct tag {scalar_t__ tag; struct tag const* next; } const tag ;
struct html {struct tag const* tag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct html*,struct tag const*) ;

void
FUNC_1(struct html *VAR_2, const struct tag *VAR_3)
{
 struct tag *VAR_4, *VAR_5;

 for (VAR_4 = VAR_2->tag; VAR_4 != ((void*)0); VAR_4 = VAR_5) {
  VAR_5 = VAR_4->next;
  if (VAR_4 == VAR_3 || (VAR_5 == VAR_3 &&
      (VAR_4->tag == VAR_0 || VAR_4->tag == VAR_1)))
   break;
  FUNC_0(VAR_2, VAR_4);
 }
}
