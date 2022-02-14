
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_attrib {int hwbreak; int cache; int verify; int width; int mode; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int,struct mem_attrib*) ;
 struct mem_attrib VAR_7 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,char*) ;

__attribute__((used)) static void
FUNC_6 (char *VAR_8, int VAR_9)
{
  CORE_ADDR VAR_10, VAR_11;
  char *VAR_12;
  struct mem_attrib VAR_13;

  if (!VAR_8)
    FUNC_2 ("No mem");

  VAR_12 = FUNC_5 (VAR_8, " \t");
  if (!VAR_12)
    FUNC_1 ("no lo address");
  VAR_10 = FUNC_3 (VAR_12);

  VAR_12 = FUNC_5 (((void*)0), " \t");
  if (!VAR_12)
    FUNC_1 ("no hi address");
  VAR_11 = FUNC_3 (VAR_12);

  VAR_13 = VAR_7;
  while ((VAR_12 = FUNC_5 (((void*)0), " \t")) != ((void*)0))
    {
      if (FUNC_4 (VAR_12, "rw") == 0)
 VAR_13.mode = VAR_1;
      else if (FUNC_4 (VAR_12, "ro") == 0)
 VAR_13.mode = VAR_0;
      else if (FUNC_4 (VAR_12, "wo") == 0)
 VAR_13.mode = VAR_6;

      else if (FUNC_4 (VAR_12, "8") == 0)
 VAR_13.width = VAR_5;
      else if (FUNC_4 (VAR_12, "16") == 0)
 {
   if ((VAR_10 % 2 != 0) || (VAR_11 % 2 != 0))
     FUNC_1 ("region bounds not 16 bit aligned");
   VAR_13.width = VAR_2;
 }
      else if (FUNC_4 (VAR_12, "32") == 0)
 {
   if ((VAR_10 % 4 != 0) || (VAR_11 % 4 != 0))
     FUNC_1 ("region bounds not 32 bit aligned");
   VAR_13.width = VAR_3;
 }
      else if (FUNC_4 (VAR_12, "64") == 0)
 {
   if ((VAR_10 % 8 != 0) || (VAR_11 % 8 != 0))
     FUNC_1 ("region bounds not 64 bit aligned");
   VAR_13.width = VAR_4;
 }
      else if (FUNC_4 (VAR_12, "cache") == 0)
 VAR_13.cache = 1;
      else if (FUNC_4 (VAR_12, "nocache") == 0)
 VAR_13.cache = 0;
      else
 FUNC_1 ("unknown attribute: %s", VAR_12);
    }

  FUNC_0 (VAR_10, VAR_11, &VAR_13);
}
