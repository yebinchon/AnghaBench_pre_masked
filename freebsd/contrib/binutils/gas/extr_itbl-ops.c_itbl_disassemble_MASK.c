
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itbl_field {int type; int range; struct itbl_field* next; } ;
struct itbl_entry {char* name; int processor; struct itbl_field* fields; } ;
typedef int e_processor ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;





 int VAR_0 ;
 unsigned long FUNC_2 (unsigned long,int ) ;
 struct itbl_entry* FUNC_3 (int ,int,unsigned long,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,char*,unsigned long) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;

int
FUNC_8 (char *VAR_1, unsigned long VAR_2)
{
  e_processor VAR_3;
  struct itbl_entry *VAR_4;
  struct itbl_field *VAR_5;

  if (!FUNC_1 (VAR_2))
    return 0;
  VAR_3 = FUNC_4 (FUNC_0 (VAR_2));


  VAR_4 = FUNC_3 (VAR_3, VAR_0, VAR_2, 0);
  if (!VAR_4)
    return 0;
  FUNC_7 (VAR_1, VAR_4->name);


  for (VAR_5 = VAR_4->fields; VAR_5; VAR_5 = VAR_5->next)
    {
      struct itbl_entry *VAR_6;
      unsigned long VAR_7;

      if (VAR_5 == VAR_4->fields)
 FUNC_6 (VAR_1, "\t");
      else
 FUNC_6 (VAR_1, ",");
      VAR_7 = FUNC_2 (VAR_2, VAR_5->range);

      switch (VAR_5->type)
 {
 case 130:
 case 131:
 case 129:


   VAR_6 = FUNC_3 (VAR_4->processor, VAR_5->type, VAR_7, &VAR_5->range);
   if (VAR_6)
     FUNC_6 (VAR_1, VAR_6->name);
   else
     FUNC_5 (VAR_1, "%s$%lu", VAR_1, VAR_7);
   break;
 case 132:



 case 128:
   FUNC_5 (VAR_1, "%s0x%lx", VAR_1, VAR_7);
   break;
 default:
   return 0;
 }
    }
  return 1;
}
