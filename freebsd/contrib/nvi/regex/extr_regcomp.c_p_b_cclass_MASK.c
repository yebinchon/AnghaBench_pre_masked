
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse {int * next; } ;
struct cclass {char* chars; char* multis; int * name; } ;
typedef int cset ;
typedef int RCHAR_T ;


 int FUNC_0 (int *,char) ;
 int FUNC_1 (struct parse*,int *,char const*) ;
 int FUNC_2 (int *,int *,size_t) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_0 ;
 int FUNC_6 (int ) ;
 size_t FUNC_7 (int *) ;
 struct cclass* VAR_1 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char const*) ;

__attribute__((used)) static void
FUNC_10(struct parse *VAR_2, cset *VAR_3)
{
 RCHAR_T *VAR_4 = VAR_2->next;
 struct cclass *VAR_5;
 size_t VAR_6;
 const char *VAR_7;
 char VAR_8;

 while (FUNC_3() && FUNC_8(FUNC_5()))
  FUNC_4();
 VAR_6 = VAR_2->next - VAR_4;
 for (VAR_5 = VAR_1; VAR_5->name != ((void*)0); VAR_5++)
  if (FUNC_7(VAR_5->name) == VAR_6 && !FUNC_2(VAR_5->name, VAR_4, VAR_6))
   break;
 if (VAR_5->name == ((void*)0)) {

  FUNC_6(VAR_0);
  return;
 }

 VAR_7 = VAR_5->chars;
 while ((VAR_8 = *VAR_7++) != '\0')
  FUNC_0(VAR_3, VAR_8);
 for (VAR_7 = VAR_5->multis; *VAR_7 != '\0'; VAR_7 += FUNC_9(VAR_7) + 1)
  FUNC_1(VAR_2, VAR_3, VAR_7);
}
