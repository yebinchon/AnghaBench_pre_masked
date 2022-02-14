
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
typedef char expression ;
struct command_line {int control_type; int body_count; struct command_line* next; struct command_line** body_list; int line; } ;
struct cleanup {int dummy; } ;
typedef enum command_control_type { ____Placeholder_command_control_type } command_control_type ;


 int VAR_0 ;


 int FUNC_0 (struct cleanup*) ;
 struct value* FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;

 char* FUNC_3 (int ) ;
 int VAR_2 ;
 struct cleanup* FUNC_4 (int ,char**) ;
 int VAR_3 ;
 char* FUNC_5 (char*) ;

 int FUNC_6 (struct value*) ;
 struct value* FUNC_7 () ;
 int FUNC_8 (struct value*) ;
 int FUNC_9 (char*) ;


enum command_control_type
FUNC_10 (struct command_line *VAR_4)
{
  struct expression *VAR_5;
  struct command_line *VAR_6;
  struct cleanup *VAR_7 = FUNC_4 (VAR_3, 0);
  struct value *VAR_8;
  struct value *VAR_9;
  int VAR_10;
  enum command_control_type VAR_11;
  char *VAR_12;



  VAR_11 = VAR_2;

  switch (VAR_4->control_type)
    {
    case 129:

      VAR_12 = FUNC_3 (VAR_4->line);
      if (!VAR_12)
 break;
      FUNC_4 (VAR_1, &VAR_12);
      FUNC_2 (VAR_12, 0);
      VAR_11 = VAR_4->control_type;
      break;

    case 131:
    case 132:


      VAR_11 = VAR_4->control_type;
      break;

    case 128:
      {

 VAR_12 = FUNC_3 (VAR_4->line);
 if (!VAR_12)
   break;
 FUNC_4 (VAR_1, &VAR_12);
 VAR_5 = FUNC_5 (VAR_12);
 FUNC_4 (VAR_1, &VAR_5);

 VAR_11 = 129;
 VAR_10 = 1;


 while (VAR_10 == 1)
   {
     int VAR_13;

     VAR_0;


     VAR_9 = FUNC_7 ();
     VAR_8 = FUNC_1 (VAR_5);
     VAR_13 = FUNC_8 (VAR_8);
     FUNC_6 (VAR_9);


     if (!VAR_13)
       break;


     VAR_6 = *VAR_4->body_list;
     while (VAR_6)
       {
  VAR_11 = FUNC_10 (VAR_6);



  if (VAR_11 == VAR_2 || VAR_11 == 132)
    {
      VAR_10 = 0;
      break;
    }



  if (VAR_11 == 131)
    break;


  VAR_6 = VAR_6->next;
       }
   }


 if (VAR_11 == 132)
   VAR_11 = 129;

 break;
      }

    case 130:
      {
 VAR_12 = FUNC_3 (VAR_4->line);
 if (!VAR_12)
   break;
 FUNC_4 (VAR_1, &VAR_12);

 VAR_5 = FUNC_5 (VAR_12);
 FUNC_4 (VAR_1, &VAR_5);

 VAR_6 = ((void*)0);
 VAR_11 = 129;


 VAR_9 = FUNC_7 ();
 VAR_8 = FUNC_1 (VAR_5);



 if (FUNC_8 (VAR_8))
   VAR_6 = *VAR_4->body_list;
 else if (VAR_4->body_count == 2)
   VAR_6 = *(VAR_4->body_list + 1);
 FUNC_6 (VAR_9);


 while (VAR_6)
   {
     VAR_11 = FUNC_10 (VAR_6);


     if (VAR_11 != 129)
       break;


     VAR_6 = VAR_6->next;
   }

 break;
      }

    default:
      FUNC_9 ("Invalid control type in command structure.");
      break;
    }

  FUNC_0 (VAR_7);

  return VAR_11;
}
