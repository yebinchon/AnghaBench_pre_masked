
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {scalar_t__ format; int * value; int num_children; } ;
struct ui_file {int dummy; } ;
struct cleanup {int dummy; } ;


 int FUNC_0 (int ) ;



 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct ui_file*,int ,int,int ,int ) ;
 int FUNC_3 (struct cleanup*) ;
 int * VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct varobj*) ;
 struct cleanup* FUNC_6 (struct ui_file*) ;
 struct ui_file* FUNC_7 () ;
 char* FUNC_8 (struct ui_file*,long*) ;
 int FUNC_9 (char**,char*,int ) ;
 char* FUNC_10 (char*) ;

__attribute__((used)) static char *
FUNC_11 (struct varobj *VAR_1)
{



  switch (FUNC_0 (FUNC_5 (VAR_1)))
    {
    case 129:
    case 128:
      return FUNC_10 ("{...}");


    case 130:
      {
 char *VAR_2;
 FUNC_9 (&VAR_2, "[%d]", VAR_1->num_children);
 return (VAR_2);
      }


    default:
      {
 if (VAR_1->value == ((void*)0))
   {



     return ((void*)0);
   }
 else
   {
     long VAR_3;
     struct ui_file *VAR_4 = FUNC_7 ();
     struct cleanup *VAR_5 = FUNC_6 (VAR_4);
     char *VAR_6;

     if (FUNC_1 (VAR_1->value))
       FUNC_4 (VAR_1->value);
     FUNC_2 (VAR_1->value, VAR_4,
         VAR_0[(int) VAR_1->format], 1, 0, 0);
     VAR_6 = FUNC_8 (VAR_4, &VAR_3);
     FUNC_3 (VAR_5);
 return VAR_6;
      }
      }
    }
}
