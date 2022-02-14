
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tag {scalar_t__ tag; struct tag* next; } ;
struct html {struct tag* tag; } ;
typedef enum roff_tok { ____Placeholder_roff_tok } roff_tok ;




 scalar_t__ VAR_0 ;

 int FUNC_0 () ;
 int FUNC_1 (struct html*) ;
 int FUNC_2 (struct html*,scalar_t__,char*) ;
 int FUNC_3 (struct html*,struct tag*) ;

enum roff_tok
FUNC_4(struct html *VAR_1, enum roff_tok VAR_2)
{
 struct tag *VAR_3;
 enum roff_tok VAR_4;

 for (VAR_3 = VAR_1->tag; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
  if (VAR_3->tag == VAR_0)
   break;

 VAR_4 = VAR_3 == ((void*)0) ? 130 : 129;

 if (VAR_2 != VAR_4) {
  switch (VAR_2) {
  case 130:
   FUNC_3(VAR_1, VAR_3);
   break;
  case 129:
   FUNC_1(VAR_1);
   FUNC_2(VAR_1, VAR_0, "");
   break;
  case 128:
   break;
  default:
   FUNC_0();
  }
 }
 return VAR_4;
}
