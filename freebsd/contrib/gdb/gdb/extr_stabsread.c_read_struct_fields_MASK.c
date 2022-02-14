
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct objfile {int dummy; } ;
struct nextfield {struct nextfield* next; } ;
struct field_info {struct nextfield* list; } ;


 int FUNC_0 (char**,struct objfile*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (int ,struct nextfield*) ;
 int FUNC_3 (struct nextfield*,int ,int) ;
 int FUNC_4 (struct field_info*,char**,struct type*,struct objfile*) ;
 int FUNC_5 (struct field_info*,char**,char*,struct type*,struct objfile*) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7 (struct field_info *VAR_1, char **VAR_2, struct type *VAR_3,
      struct objfile *VAR_4)
{
  char *VAR_5;
  struct nextfield *VAR_6;



  VAR_5 = *VAR_2;







  while (**VAR_2 != ';' && **VAR_2 != '\0')
    {
      FUNC_0 (VAR_2, VAR_4);

      VAR_6 = (struct nextfield *) FUNC_6 (sizeof (struct nextfield));
      FUNC_2 (VAR_0, VAR_6);
      FUNC_3 (VAR_6, 0, sizeof (struct nextfield));
      VAR_6->next = VAR_1->list;
      VAR_1->list = VAR_6;


      VAR_5 = *VAR_2;






      if (FUNC_1 (VAR_5[0]) && VAR_5[1] != '_')
 {
   if (!FUNC_4 (VAR_1, VAR_2, VAR_3, VAR_4))
     return 0;
   continue;
 }






      while (*VAR_5 != ':' && *VAR_5 != '\0')
 {
   VAR_5++;
 }
      if (*VAR_5 == '\0')
 return 0;


      if (VAR_5[1] == ':')
 {
   break;
 }
      FUNC_5 (VAR_1, VAR_2, VAR_5, VAR_3, VAR_4);
    }
  if (VAR_5[0] == ':' && VAR_5[1] == ':')
    {



      VAR_1->list = VAR_1->list->next;
    }
  return 1;
}
