
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro {int length; int value; int name; } ;
struct input {int input_left; int * input_str; int * input_ptr; int input_macro; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct input*,int ) ;
 int FUNC_1 (struct input*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(struct macro *VAR_3)
{
 struct input *VAR_4;

 if ((VAR_4 = FUNC_2(sizeof(*VAR_4))) == ((void*)0))
  FUNC_4("%m");
 VAR_4->type = VAR_0;
 VAR_4->input_macro = VAR_3->name;
 if ((VAR_4->input_str = FUNC_2(VAR_3->length)) == ((void*)0)) {
  FUNC_1(VAR_4);
  FUNC_4("%m");
 }
 FUNC_3(VAR_4->input_str, VAR_3->value, VAR_3->length);
 VAR_4->input_ptr = VAR_4->input_str;
 VAR_4->input_left = VAR_3->length;
 FUNC_0(&VAR_1, VAR_4, VAR_2);
}
