
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_4 (char *VAR_2)
{
  char *VAR_3;
  unsigned int VAR_4 = 0;




  if (VAR_2[0] == '.' || VAR_2[0] == '$')
    ++VAR_4;
  if (VAR_1 && VAR_2[VAR_4] == '_')
    ++VAR_4;

  VAR_3 = FUNC_0 (VAR_2 + VAR_4, VAR_0);

  if (VAR_3 == ((void*)0))
    FUNC_2 ("%s",VAR_2);
  else
    {
      if (VAR_2[0] == '.')
 FUNC_3 ('.');
      FUNC_2 ("%s",VAR_3);
      FUNC_1 (VAR_3);
    }
}
