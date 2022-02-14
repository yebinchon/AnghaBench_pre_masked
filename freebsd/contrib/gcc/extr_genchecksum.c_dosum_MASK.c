
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,char const*,char*) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int *,int,int ) ;
 scalar_t__ FUNC_6 (int *,unsigned char*) ;
 int FUNC_7 (char*,unsigned char,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9 (const char *VAR_4)
{
  FILE *VAR_5;
  unsigned char VAR_6[16];
  int VAR_7;

  VAR_5 = FUNC_2 (VAR_4, "rb");
  if (!VAR_5)
    {
      FUNC_3 (VAR_2, "opening %s: %s\n", VAR_4, FUNC_8 (VAR_1));
      FUNC_0 (1);
    }


  if (FUNC_5 (VAR_5, 16, VAR_0) != 0)
     {
      FUNC_3 (VAR_2, "seeking in %s: %s\n", VAR_4, FUNC_8 (VAR_1));
      FUNC_0 (1);
    }

  if (FUNC_6 (VAR_5, VAR_6) != 0
      || FUNC_1 (VAR_5) != 0)
     {
      FUNC_3 (VAR_2, "reading %s: %s\n", VAR_4, FUNC_8 (VAR_1));
      FUNC_0 (1);
    }

  FUNC_4 ("const unsigned char executable_checksum[16] = { ", VAR_3);
  for (VAR_7 = 0; VAR_7 < 16; VAR_7++)
    FUNC_7 ("%#02x%s", VAR_6[VAR_7], VAR_7 == 15 ? " };\n" : ", ");
}
