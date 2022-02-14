
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_entry {int name; } ;
struct hash_control {int dummy; } ;


 char FUNC_0 (char) ;
 int FUNC_1 (struct hash_control*,char*,void*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5 (const struct reg_entry *VAR_0, struct hash_control *VAR_1)
{
  int VAR_2 = 0;
  int VAR_3 = FUNC_3 (VAR_0->name) + 2;
  char *VAR_4 = FUNC_4 (VAR_3);
  char *VAR_5 = FUNC_4 (VAR_3);

  FUNC_2 (VAR_4 + VAR_2, VAR_0->name);
  for (VAR_2 = 0; VAR_4[VAR_2]; VAR_2++)
    {
      VAR_5[VAR_2] = FUNC_0 (VAR_4[VAR_2]);
    }
  VAR_5[VAR_2] = '\0';

  FUNC_1 (VAR_1, VAR_4, (void *) VAR_0);
  FUNC_1 (VAR_1, VAR_5, (void *) VAR_0);
}
