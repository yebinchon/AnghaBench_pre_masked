
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input {int type; struct input* input_str; struct input* input_filename; int input_fp; } ;




 struct input* FUNC_0 (int *) ;
 int FUNC_1 (struct input*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct input*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct input *VAR_2;

 if ((VAR_2 = FUNC_0(&VAR_0)) == ((void*)0))
  FUNC_2();
 switch (VAR_2->type) {

   case 129:
  FUNC_3(VAR_2->input_fp);
  FUNC_4(VAR_2->input_filename);
  break;

   case 128:
  FUNC_4(VAR_2->input_str);
  break;
 }
 FUNC_1(VAR_2, VAR_1);
 FUNC_4(VAR_2);
}
