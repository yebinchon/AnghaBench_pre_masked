
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_attrib {int mode; int width; scalar_t__ verify; scalar_t__ cache; scalar_t__ hwbreak; } ;
struct mem_region {scalar_t__ hi; struct mem_attrib attrib; scalar_t__ lo; scalar_t__ enabled_p; int number; struct mem_region* next; } ;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 char* FUNC_1 (unsigned long,char*) ;
 struct mem_region* VAR_2 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_3, int VAR_4)
{
  struct mem_region *VAR_5;
  struct mem_attrib *VAR_6;

  if (!VAR_2)
    {
      FUNC_3 ("There are no memory regions defined.\n");
      return;
    }

  FUNC_2 ("Num ");
  FUNC_2 ("Enb ");
  FUNC_2 ("Low Addr   ");
  if (VAR_0 > 32)
    FUNC_2 ("        ");
  FUNC_2 ("High Addr  ");
  if (VAR_0 > 32)
    FUNC_2 ("        ");
  FUNC_2 ("Attrs ");
  FUNC_2 ("\n");

  for (VAR_5 = VAR_2; VAR_5; VAR_5 = VAR_5->next)
    {
      char *VAR_7;
      FUNC_2 ("%-3d %-3c\t",
         VAR_5->number,
         VAR_5->enabled_p ? 'y' : 'n');
      if (VAR_0 <= 32)
 VAR_7 = FUNC_1 ((unsigned long) VAR_5->lo, "08l");
      else
 VAR_7 = FUNC_1 ((unsigned long) VAR_5->lo, "016l");

      FUNC_2 ("%s ", VAR_7);

      if (VAR_0 <= 32)
 {
 if (VAR_5->hi == 0)
   VAR_7 = "0x100000000";
 else
   VAR_7 = FUNC_1 ((unsigned long) VAR_5->hi, "08l");
 }
      else
 {
 if (VAR_5->hi == 0)
   VAR_7 = "0x10000000000000000";
 else
   VAR_7 = FUNC_1 ((unsigned long) VAR_5->hi, "016l");
 }

      FUNC_2 ("%s ", VAR_7);
      VAR_6 = &VAR_5->attrib;
      switch (VAR_6->mode)
 {
 case 134:
   FUNC_2 ("rw ");
   break;
 case 135:
   FUNC_2 ("ro ");
   break;
 case 128:
   FUNC_2 ("wo ");
   break;
 }

      switch (VAR_6->width)
 {
 case 130:
   FUNC_2 ("8 ");
   break;
 case 133:
   FUNC_2 ("16 ");
   break;
 case 132:
   FUNC_2 ("32 ");
   break;
 case 131:
   FUNC_2 ("64 ");
   break;
 case 129:
   break;
 }
      if (VAR_6->cache)
 FUNC_2 ("cache ");
      else
 FUNC_2 ("nocache ");
      FUNC_2 ("\n");

      FUNC_0 (VAR_1);
    }
}
