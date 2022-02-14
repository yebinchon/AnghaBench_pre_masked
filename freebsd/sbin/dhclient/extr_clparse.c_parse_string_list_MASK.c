
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {struct string_list* next; int string; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,size_t) ;
 struct string_list* FUNC_2 (size_t) ;
 int FUNC_3 (char**,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;

void
FUNC_7(FILE *VAR_3, struct string_list **VAR_4, int VAR_5)
{
 int VAR_6;
 char *VAR_7;
 size_t VAR_8;
 struct string_list *VAR_9, *VAR_10;


 if (*VAR_4)
  for (VAR_9 = *VAR_4; VAR_9->next; VAR_9 = VAR_9->next)
   ;
 else
  VAR_9 = ((void*)0);

 do {
  VAR_6 = FUNC_3(&VAR_7, VAR_3);
  if (VAR_6 != VAR_2) {
   FUNC_4("Expecting media options.");
   FUNC_5(VAR_3);
   return;
  }

  VAR_8 = FUNC_6(VAR_7) + 1;
  VAR_10 = FUNC_2(VAR_8);
  if (VAR_10 == ((void*)0))
   FUNC_0("no memory for string list entry.");
  FUNC_1(VAR_10->string, VAR_7, VAR_8);
  VAR_10->next = ((void*)0);


  if (VAR_9)
   VAR_9->next = VAR_10;
  else
   *VAR_4 = VAR_10;
  VAR_9 = VAR_10;

  VAR_6 = FUNC_3(&VAR_7, VAR_3);
 } while (VAR_5 && VAR_6 == VAR_0);

 if (VAR_6 != VAR_1) {
  FUNC_4("expecting semicolon.");
  FUNC_5(VAR_3);
 }
}
