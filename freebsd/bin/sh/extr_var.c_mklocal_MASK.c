
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct var {int flags; size_t name_len; int * text; } ;
struct localvar {int flags; struct localvar* next; struct var* vp; int * text; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 struct var* FUNC_1 (char*,struct var***,int *) ;
 struct localvar* VAR_6 ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_7 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int *,int) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (char*,char) ;

void
FUNC_7(char *VAR_8)
{
 struct localvar *VAR_9;
 struct var **VAR_10;
 struct var *VAR_11;

 VAR_0;
 VAR_9 = FUNC_0(sizeof (struct localvar));
 if (VAR_8[0] == '-' && VAR_8[1] == '\0') {
  VAR_9->text = FUNC_0(sizeof VAR_7);
  FUNC_2(VAR_9->text, VAR_7, sizeof VAR_7);
  VAR_11 = ((void*)0);
 } else {
  VAR_11 = FUNC_1(VAR_8, &VAR_10, ((void*)0));
  if (VAR_11 == ((void*)0)) {
   if (FUNC_6(VAR_8, '='))
    FUNC_5(FUNC_3(VAR_8), VAR_3 | VAR_2);
   else
    FUNC_4(VAR_8, ((void*)0), VAR_3 | VAR_2);
   VAR_11 = *VAR_10;
   VAR_9->text = ((void*)0);
   VAR_9->flags = VAR_5;
  } else {
   VAR_9->text = VAR_11->text;
   VAR_9->flags = VAR_11->flags;
   VAR_11->flags |= VAR_3|VAR_4;
   if (VAR_8[VAR_11->name_len] == '=')
    FUNC_5(FUNC_3(VAR_8), VAR_2);
  }
 }
 VAR_9->vp = VAR_11;
 VAR_9->next = VAR_6;
 VAR_6 = VAR_9;
 VAR_1;
}
