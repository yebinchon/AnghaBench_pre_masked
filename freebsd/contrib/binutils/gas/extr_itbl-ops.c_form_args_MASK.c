
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itbl_field {int type; struct itbl_field* next; } ;
struct itbl_entry {struct itbl_field* fields; } ;


 int FUNC_0 (struct itbl_entry*) ;






__attribute__((used)) static char *
FUNC_1 (struct itbl_entry *VAR_0)
{
  static char VAR_1[31];
  char VAR_2 = 0, *VAR_3 = VAR_1;
  struct itbl_field *VAR_4;

  FUNC_0 (VAR_0);
  for (VAR_4 = VAR_0->fields; VAR_4; VAR_4 = VAR_4->next)
    {
      switch (VAR_4->type)
 {
 case 130:
   VAR_2 = 'd';
   break;
 case 131:
   VAR_2 = 't';
   break;
 case 129:
   VAR_2 = 's';
   break;
 case 128:
   VAR_2 = 'i';
   break;
 case 132:
   VAR_2 = 'a';
   break;
 default:
   VAR_2 = 0;
 }
      if (VAR_2)
 {
   if (VAR_3 != VAR_1)
     *VAR_3++ = ',';
   *VAR_3++ = VAR_2;
 }
    }
  *VAR_3 = 0;
  return VAR_1;
}
