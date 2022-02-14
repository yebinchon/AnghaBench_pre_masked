
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char**,unsigned int*) ;
 int FUNC_1 (char**,char*,char const*,int ,unsigned int,char const*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_3 (char) ;
 int FUNC_4 (char const*) ;

void
FUNC_5 (const char *VAR_4, const char *VAR_5)
{
  static int VAR_6;
  char *VAR_7 = VAR_3;
  char *VAR_8;
  char *VAR_9;
  unsigned int VAR_10;

  if (! VAR_6)
    {
      VAR_3 = "\"void:t1=1\",128,0,0,0";
      FUNC_3 ('s');
      VAR_6 = 1;
    }

  FUNC_0 (&VAR_9, &VAR_10);
  FUNC_1 (&VAR_8, "\"%s:F1\",%d,0,%d,%s",
     VAR_4, VAR_0, VAR_10 + 1, VAR_5);
  VAR_3 = VAR_8;
  FUNC_3 ('s');
  FUNC_2 (VAR_8);

  VAR_3 = VAR_7;
  VAR_1 = FUNC_4 (VAR_5);
  VAR_2 = 1;
}
