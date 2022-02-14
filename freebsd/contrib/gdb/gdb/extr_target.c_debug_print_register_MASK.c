
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONGEST ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int,unsigned char*) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7 (const char * VAR_4, int VAR_5)
{
  FUNC_3 (VAR_3, "%s ", VAR_4);
  if (VAR_5 >= 0 && VAR_5 < VAR_2 + VAR_1
      && FUNC_1 (VAR_5) != ((void*)0) && FUNC_1 (VAR_5)[0] != '\0')
    FUNC_3 (VAR_3, "(%s)", FUNC_1 (VAR_5));
  else
    FUNC_3 (VAR_3, "(%d)", VAR_5);
  if (VAR_5 >= 0)
    {
      int VAR_6;
      unsigned char VAR_7[VAR_0];
      FUNC_2 (VAR_5, VAR_7);
      FUNC_3 (VAR_3, " = ");
      for (VAR_6 = 0; VAR_6 < FUNC_0 (VAR_5); VAR_6++)
 {
   FUNC_3 (VAR_3, "%02x", VAR_7[VAR_6]);
 }
      if (FUNC_0 (VAR_5) <= sizeof (LONGEST))
 {
   FUNC_3 (VAR_3, " 0x%s %s",
         FUNC_5 (FUNC_6 (VAR_5)),
         FUNC_4 (FUNC_6 (VAR_5)));
 }
    }
  FUNC_3 (VAR_3, "\n");
}
