
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (char*,int) ;

__attribute__((used)) static void
FUNC_7 (char *VAR_3, char *VAR_4, int VAR_5,
     char *VAR_6, char *VAR_7)
{
  int VAR_8;
  int VAR_9;



  if (FUNC_3 (VAR_3, VAR_4, VAR_5) != 0)
    {
      return;
    }




  {
    char *VAR_10;
    if (VAR_7 == VAR_4)
      {
 VAR_10 = FUNC_5 (FUNC_2 (VAR_3) + 5);
 FUNC_1 (VAR_10, VAR_3);
      }
    else if (VAR_7 > VAR_4)
      {

 VAR_10 = FUNC_5 (FUNC_2 (VAR_3) + 5);
 FUNC_1 (VAR_10, VAR_3 + (VAR_7 - VAR_4));
      }
    else
      {

 VAR_10 = FUNC_5 (FUNC_2 (VAR_3) + (VAR_4 - VAR_7) + 5);
 FUNC_4 (VAR_10, VAR_7, VAR_4 - VAR_7);
 VAR_10[VAR_4 - VAR_7] = '\0';
 FUNC_0 (VAR_10, VAR_3);
      }

    if (VAR_1 + 3 > VAR_2)
      {
 VAR_8 = (VAR_2 *= 2) * sizeof (char *);
 VAR_0 = (char **) FUNC_6 ((char *) VAR_0, VAR_8);
      }
    VAR_0[VAR_1++] = VAR_10;
    VAR_0[VAR_1] = ((void*)0);
  }
}
