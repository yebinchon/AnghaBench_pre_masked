
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saved_stab {char* string; int type; int desc; int value; } ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int ) ;
 struct saved_stab* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4 (void)
{
  int VAR_4;

  FUNC_2 (VAR_3, "%s", FUNC_0("Last stabs entries before error:\n"));
  FUNC_2 (VAR_3, "n_type n_desc n_value  string\n");

  VAR_4 = VAR_2;
  do
    {
      struct saved_stab *VAR_5;

      VAR_5 = VAR_1 + VAR_4;
      if (VAR_5->string != ((void*)0))
 {
   const char *VAR_6;

   VAR_6 = FUNC_1 (VAR_5->type);
   if (VAR_6 != ((void*)0))
     FUNC_2 (VAR_3, "%-6s", VAR_6);
   else if (VAR_5->type == 0)
     FUNC_2 (VAR_3, "HdrSym");
   else
     FUNC_2 (VAR_3, "%-6d", VAR_5->type);
   FUNC_2 (VAR_3, " %-6d ", VAR_5->desc);
   FUNC_3 (VAR_3, VAR_5->value);
   if (VAR_5->type != 0)
     FUNC_2 (VAR_3, " %s", VAR_5->string);
   FUNC_2 (VAR_3, "\n");
 }
      VAR_4 = (VAR_4 + 1) % VAR_0;
    }
  while (VAR_4 != VAR_2);
}
