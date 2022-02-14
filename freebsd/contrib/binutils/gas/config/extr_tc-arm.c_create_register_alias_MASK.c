
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_entry {int type; int number; } ;


 char FUNC_0 (char) ;
 char FUNC_1 (char) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 int VAR_0 ;
 int FUNC_4 (int ,char*) ;
 struct reg_entry* FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (char*,char*,size_t) ;
 char* VAR_1 ;
 size_t FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,char*,size_t) ;

__attribute__((used)) static int
FUNC_10 (char * VAR_2, char *VAR_3)
{
  struct reg_entry *VAR_4;
  char *VAR_5, *VAR_6;
  size_t VAR_7;



  VAR_5 = VAR_3;
  if (FUNC_9 (VAR_5, " .req ", 6) != 0)
    return 0;

  VAR_5 += 6;
  if (*VAR_5 == '\0')
    return 0;

  VAR_4 = FUNC_5 (VAR_0, VAR_5);
  if (!VAR_4)
    {
      FUNC_4 (FUNC_2("unknown register '%s' -- .req ignored"), VAR_5);
      return 1;
    }







  VAR_2 = VAR_1;
  VAR_7 = FUNC_8 (VAR_2);


  VAR_6 = FUNC_3 (VAR_7 + 1);
  FUNC_7 (VAR_6, VAR_2, VAR_7);
  VAR_6[VAR_7] = '\0';




  FUNC_6 (VAR_6, VAR_4->number, VAR_4->type);

  for (VAR_3 = VAR_6; *VAR_3; VAR_3++)
    *VAR_3 = FUNC_1 (*VAR_3);

  if (FUNC_9 (VAR_6, VAR_2, VAR_7))
    FUNC_6 (VAR_6, VAR_4->number, VAR_4->type);

  for (VAR_3 = VAR_6; *VAR_3; VAR_3++)
    *VAR_3 = FUNC_0 (*VAR_3);

  if (FUNC_9 (VAR_6, VAR_2, VAR_7))
    FUNC_6 (VAR_6, VAR_4->number, VAR_4->type);

  return 1;
}
