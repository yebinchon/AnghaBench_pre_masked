
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itbl_field {int type; int range; struct itbl_field* next; } ;
struct itbl_entry {int processor; unsigned long value; struct itbl_field* fields; } ;


 unsigned long FUNC_0 (unsigned long,int ) ;
 unsigned long FUNC_1 (struct itbl_entry*) ;





 int VAR_0 ;
 int VAR_1 ;
 struct itbl_entry* FUNC_2 (int,int,char*) ;
 char* FUNC_3 (char**) ;
 unsigned long FUNC_4 (char*,int ,int) ;

unsigned long
FUNC_5 (char *VAR_2, char *VAR_3)
{
  unsigned long VAR_4;
  struct itbl_entry *VAR_5 = ((void*)0);
  struct itbl_field *VAR_6;
  char *VAR_7;
  int VAR_8;

  if (!VAR_2 || !*VAR_2)
    return 0;


  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
    {
      VAR_5 = FUNC_2 (VAR_8, VAR_0, VAR_2);
      if (VAR_5)
 break;
    }
  if (!VAR_5)
    return 0;
  VAR_4 = FUNC_1 (VAR_5);


  for (VAR_6 = VAR_5->fields; VAR_6; VAR_6 = VAR_6->next)
    {
      struct itbl_entry *VAR_9;
      unsigned long VAR_10;
      if (!VAR_3 || !*VAR_3)
 return 0;
      VAR_7 = FUNC_3 (&VAR_3);

      switch (VAR_6->type)
 {
 case 130:
 case 131:
 case 129:


   if (*VAR_7 == '$')
     {
       VAR_7++;
       VAR_10 = FUNC_4 (VAR_7, 0, 10);

       if (VAR_10 == 0 && *VAR_7 != '0')
  return 0;
     }
   else
     {
       VAR_9 = FUNC_2 (VAR_5->processor, VAR_6->type, VAR_7);
       if (VAR_9)
  VAR_10 = VAR_9->value;
       else
  return 0;
     }
   break;
 case 132:
 case 128:
   if (*VAR_7 == '0' && *(VAR_7 + 1) == 'x')
     {
       VAR_7 += 2;
       VAR_10 = FUNC_4 (VAR_7, 0, 16);

     }
   else
     {
       VAR_10 = FUNC_4 (VAR_7, 0, 10);

       if (VAR_10 == 0 && *VAR_7 != '0')
  return 0;
     }
   break;
 default:
   return 0;
 }
      VAR_4 |= FUNC_0 (VAR_10, VAR_6->range);
    }
  if (VAR_3 && *VAR_3)
    return 0;
  return VAR_4;
}
