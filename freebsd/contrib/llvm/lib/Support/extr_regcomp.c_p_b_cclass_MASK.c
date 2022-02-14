
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uch ;
struct parse {char* next; } ;
struct cclass {char* name; char* chars; char* multis; } ;
typedef int cset ;


 int FUNC_0 (int *,char) ;
 int FUNC_1 (struct parse*,int *,char const*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int VAR_0 ;
 int FUNC_5 (int ) ;
 struct cclass* VAR_1 ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_9(struct parse *VAR_2, cset *VAR_3)
{
 char *VAR_4 = VAR_2->next;
 struct cclass *VAR_5;
 size_t VAR_6;
 const char *VAR_7;
 char VAR_8;

 while (FUNC_2() && FUNC_6((uch)FUNC_4()))
  FUNC_3();
 VAR_6 = VAR_2->next - VAR_4;
 for (VAR_5 = VAR_1; VAR_5->name != ((void*)0); VAR_5++)
  if (FUNC_8(VAR_5->name, VAR_4, VAR_6) == 0 && VAR_5->name[VAR_6] == '\0')
   break;
 if (VAR_5->name == ((void*)0)) {

  FUNC_5(VAR_0);
  return;
 }

 VAR_7 = VAR_5->chars;
 while ((VAR_8 = *VAR_7++) != '\0')
  FUNC_0(VAR_3, VAR_8);
 for (VAR_7 = VAR_5->multis; *VAR_7 != '\0'; VAR_7 += FUNC_7(VAR_7) + 1)
  FUNC_1(VAR_2, VAR_3, VAR_7);
}
