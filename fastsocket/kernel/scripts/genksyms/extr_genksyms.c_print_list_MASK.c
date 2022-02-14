
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {struct string_list* next; } ;
typedef int FILE ;


 struct string_list** FUNC_0 (int) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char,int *) ;

__attribute__((used)) static void FUNC_4(FILE * VAR_0, struct string_list *VAR_1)
{
 struct string_list **VAR_2, **VAR_3;
 struct string_list *VAR_4, **VAR_5;
 int VAR_6 = 1;

 if (VAR_1 == ((void*)0)) {
  FUNC_1("(nil)", VAR_0);
  return;
 }

 VAR_4 = VAR_1;
 while ((VAR_4 = VAR_4->next) != ((void*)0))
  VAR_6++;

 VAR_3 = FUNC_0(VAR_6 * sizeof(*VAR_2));
 VAR_2 = VAR_3 + VAR_6;
 VAR_5 = VAR_2 - 1;

 (*VAR_5--) = VAR_1;
 while ((VAR_1 = VAR_1->next) != ((void*)0))
  *(VAR_5--) = VAR_1;

 while (VAR_3 != VAR_2) {
  FUNC_2(VAR_0, *VAR_3++);
  FUNC_3(' ', VAR_0);
 }
}
