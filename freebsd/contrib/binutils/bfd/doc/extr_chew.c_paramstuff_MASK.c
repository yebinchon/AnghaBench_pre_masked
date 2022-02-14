
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int string_type ;


 scalar_t__ VAR_0 ;
 char FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int *,char) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (unsigned char) ;
 int FUNC_7 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_8 ()
{
  unsigned int VAR_3;
  unsigned int VAR_4;
  unsigned int VAR_5;
  unsigned int VAR_6;
  string_type VAR_7;
  FUNC_5 (&VAR_7);




  if (1
      || FUNC_4 (VAR_2, "PARAMS") || FUNC_4 (VAR_2, "PROTO") || !FUNC_4 (VAR_2, "("))
    {
      FUNC_2 (&VAR_7, VAR_2);
    }
  else
    {

      for (VAR_3 = 0; FUNC_0 (VAR_2, VAR_3) != '(' && FUNC_0 (VAR_2, VAR_3); VAR_3++)
 ;

      VAR_4 = VAR_3;

      VAR_4--;
      while (VAR_4 && FUNC_6 ((unsigned char) FUNC_0 (VAR_2, VAR_4)))
 VAR_4--;
      while (VAR_4
      && !FUNC_6 ((unsigned char) FUNC_0 (VAR_2,VAR_4))
      && FUNC_0 (VAR_2,VAR_4) != '*')
 VAR_4--;

      VAR_4++;



      for (VAR_6 = VAR_4; 0 < VAR_6; VAR_6--)
 {
   if (!FUNC_6 ((unsigned char) FUNC_0 (VAR_2, VAR_6 - 1)))
     break;
 }
      for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
 FUNC_1 (&VAR_7, FUNC_0 (VAR_2, VAR_5));

      FUNC_3 (&VAR_7, "\n");



      for (VAR_6 = VAR_3; 0 < VAR_6; VAR_6--)
 {
   if (!FUNC_6 ((unsigned char) FUNC_0 (VAR_2, VAR_6 - 1)))
     break;
 }
      for (VAR_5 = VAR_4; VAR_5 < VAR_6; VAR_5++)
 FUNC_1 (&VAR_7, FUNC_0 (VAR_2, VAR_5));

      FUNC_3 (&VAR_7, " PARAMS (");

      for (VAR_5 = VAR_3; FUNC_0 (VAR_2, VAR_5) && FUNC_0 (VAR_2, VAR_5) != ';'; VAR_5++)
 FUNC_1 (&VAR_7, FUNC_0 (VAR_2, VAR_5));

      FUNC_3 (&VAR_7, ");\n\n");
    }
  FUNC_7 (VAR_2, &VAR_7);
  VAR_1++;

}
