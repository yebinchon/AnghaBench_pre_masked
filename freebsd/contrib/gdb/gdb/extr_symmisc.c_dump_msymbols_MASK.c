
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct objfile {int minimal_symbol_count; int obfd; struct minimal_symbol* msymbols; int name; } ;
struct minimal_symbol {int type; int filename; } ;


 int * FUNC_0 (struct minimal_symbol*) ;
 scalar_t__ FUNC_1 (struct minimal_symbol*) ;
 int * FUNC_2 (struct minimal_symbol*) ;
 int FUNC_3 (struct minimal_symbol*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct ui_file*,char*,...) ;
 int FUNC_6 (char*,struct ui_file*) ;
 int FUNC_7 (int ,int,struct ui_file*) ;
 int FUNC_8 (char*,int,int) ;

__attribute__((used)) static void
FUNC_9 (struct objfile *VAR_0, struct ui_file *VAR_1)
{
  struct minimal_symbol *VAR_2;
  int VAR_3;
  char VAR_4;

  FUNC_5 (VAR_1, "\nObject file %s:\n\n", VAR_0->name);
  if (VAR_0->minimal_symbol_count == 0)
    {
      FUNC_5 (VAR_1, "No minimal symbols found.\n");
      return;
    }
  for (VAR_3 = 0, VAR_2 = VAR_0->msymbols;
       FUNC_0 (VAR_2) != ((void*)0); VAR_2++, VAR_3++)
    {
      switch (VAR_2->type)
 {
 case 128:
   VAR_4 = 'u';
   break;
 case 129:
   VAR_4 = 'T';
   break;
 case 130:
   VAR_4 = 'S';
   break;
 case 134:
   VAR_4 = 'D';
   break;
 case 135:
   VAR_4 = 'B';
   break;
 case 136:
   VAR_4 = 'A';
   break;
 case 131:
   VAR_4 = 't';
   break;
 case 132:
   VAR_4 = 'd';
   break;
 case 133:
   VAR_4 = 'b';
   break;
 default:
   VAR_4 = '?';
   break;
 }
      FUNC_5 (VAR_1, "[%2d] %c ", VAR_3, VAR_4);
      FUNC_7 (FUNC_3 (VAR_2), 1, VAR_1);
      FUNC_5 (VAR_1, " %s", FUNC_0 (VAR_2));
      if (FUNC_1 (VAR_2))
 FUNC_5 (VAR_1, " section %s",
     FUNC_4 (VAR_0->obfd,
         FUNC_1 (VAR_2)));
      if (FUNC_2 (VAR_2) != ((void*)0))
 {
   FUNC_5 (VAR_1, "  %s", FUNC_2 (VAR_2));
 }




      FUNC_6 ("\n", VAR_1);
    }
  if (VAR_0->minimal_symbol_count != VAR_3)
    {
      FUNC_8 ("internal error:  minimal symbol count %d != %d",
        VAR_0->minimal_symbol_count, VAR_3);
    }
  FUNC_5 (VAR_1, "\n");
}
