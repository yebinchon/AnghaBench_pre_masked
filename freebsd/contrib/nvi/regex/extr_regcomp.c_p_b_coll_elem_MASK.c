
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse {char* next; } ;
struct cname {char code; int * name; } ;
typedef char RCHAR_T ;


 scalar_t__ FUNC_0 (int *,char*,size_t) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int,char) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 (int *) ;
 struct cname* VAR_2 ;

__attribute__((used)) static char
FUNC_6(struct parse *VAR_3, int VAR_4)


{
 RCHAR_T *VAR_5 = VAR_3->next;
 struct cname *VAR_6;
 size_t VAR_7;

 while (FUNC_1() && !FUNC_3(VAR_4, ']'))
  FUNC_2();
 if (!FUNC_1()) {
  FUNC_4(VAR_0);
  return(0);
 }
 VAR_7 = VAR_3->next - VAR_5;
 for (VAR_6 = VAR_2; VAR_6->name != ((void*)0); VAR_6++)
  if (FUNC_5(VAR_6->name) == VAR_7 && FUNC_0(VAR_6->name, VAR_5, VAR_7))
   return(VAR_6->code);
 if (VAR_7 == 1)
  return(*VAR_5);
 FUNC_4(VAR_1);
 return(0);
}
