
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usage_page {size_t pagesize; size_t pagesizemax; char* name; int usage; struct usage_page* page_contents; } ;
struct usage_in_page {int dummy; } ;
typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int,char*,char const*,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (char) ;
 void* FUNC_7 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct usage_page* VAR_3 ;
 void* FUNC_8 (struct usage_page*,int) ;
 int FUNC_9 (char*,char*,...) ;
 char* FUNC_10 (char*) ;

void
FUNC_11(const char *VAR_4)
{
 FILE *VAR_5;
 char VAR_6[100], VAR_7[100], *VAR_8, *VAR_9;
 int VAR_10;
 int VAR_11;
 struct usage_page *VAR_12 = ((void*)0);

 if (VAR_4 == ((void*)0))
  VAR_4 = VAR_0;

 VAR_5 = FUNC_5(VAR_4, "r");
 if (VAR_5 == ((void*)0))
  FUNC_1(1, "%s", VAR_4);
 for (VAR_11 = 1; ; VAR_11++) {
  if (FUNC_4(VAR_6, sizeof VAR_6, VAR_5) == ((void*)0))
   break;
  if (VAR_6[0] == '#')
   continue;
  for (VAR_8 = VAR_6; *VAR_8 && FUNC_6(*VAR_8); VAR_8++)
   ;
  if (!*VAR_8)
   continue;
  if (FUNC_9(VAR_6, " * %[^\n]", VAR_7) == 1)
   VAR_10 = -1;
  else if (FUNC_9(VAR_6, " 0x%x %[^\n]", &VAR_10, VAR_7) != 2 &&
    FUNC_9(VAR_6, " %d %[^\n]", &VAR_10, VAR_7) != 2)
   FUNC_2(1, "file %s, line %d, syntax error",
        VAR_4, VAR_11);
  for (VAR_8 = VAR_7; *VAR_8; VAR_8++)
   if (FUNC_6(*VAR_8) || *VAR_8 == '.')
    *VAR_8 = '_';
  VAR_9 = FUNC_10(VAR_7);
  if (!VAR_9)
   FUNC_1(1, "strdup");
  if (FUNC_6(VAR_6[0])) {
   if (!VAR_12)
    FUNC_2(1, "file %s, line %d, syntax error",
         VAR_4, VAR_11);
   if (VAR_12->pagesize >= VAR_12->pagesizemax) {
    VAR_12->pagesizemax += 10;
    VAR_12->page_contents =
     FUNC_8(VAR_12->page_contents,
      VAR_12->pagesizemax *
      sizeof (struct usage_in_page));
    if (!VAR_12->page_contents)
     FUNC_1(1, "realloc");
   }
   VAR_12->page_contents[VAR_12->pagesize].name = VAR_9;
   VAR_12->page_contents[VAR_12->pagesize].usage = VAR_10;
   VAR_12->pagesize++;
  } else {
   if (VAR_1 >= VAR_2) {
    if (VAR_3 == ((void*)0)) {
     VAR_2 = 5;
     VAR_3 = FUNC_7(VAR_2 *
        sizeof (struct usage_page));
    } else {
     VAR_2 += 5;
     VAR_3 = FUNC_8(VAR_3,
         VAR_2 *
         sizeof (struct usage_page));
    }
    if (!VAR_3)
     FUNC_1(1, "alloc");
   }
   VAR_12 = &VAR_3[VAR_1++];
   VAR_12->name = VAR_9;
   VAR_12->usage = VAR_10;
   VAR_12->pagesize = 0;
   VAR_12->pagesizemax = 10;
   VAR_12->page_contents =
    FUNC_7(VAR_12->pagesizemax *
           sizeof (struct usage_in_page));
   if (!VAR_12->page_contents)
    FUNC_1(1, "malloc");
  }
 }
 FUNC_3(VAR_5);



}
