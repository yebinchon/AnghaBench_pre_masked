
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_segment_descriptor {int num; int * descs; } ;
struct thread {int td_pcb; } ;
struct sysarch_args {int op; int * parms; } ;
struct i386_ldt_args {int num; int * descs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct thread*,struct user_segment_descriptor*) ;
 int FUNC_2 (struct thread*,struct user_segment_descriptor*,struct user_segment_descriptor*) ;
 int FUNC_3 (int *,struct user_segment_descriptor*,int) ;
 int FUNC_4 (struct user_segment_descriptor*,int ) ;
 struct user_segment_descriptor* FUNC_5 (int,int ,int ) ;
 int VAR_5 ;
 int FUNC_6 (int ,int ) ;

int
FUNC_7(struct thread *VAR_6, struct sysarch_args *VAR_7, int VAR_8)
{
 struct i386_ldt_args *VAR_9, VAR_10;
 struct user_segment_descriptor *VAR_11;
 int VAR_12 = 0;





 FUNC_0(VAR_7->op);
 if (VAR_8 == VAR_4) {
  VAR_12 = FUNC_3(VAR_7->parms, &VAR_10, sizeof(struct i386_ldt_args));
  if (VAR_12 != 0)
   return (VAR_12);
  VAR_9 = &VAR_10;
 } else
  VAR_9 = (struct i386_ldt_args *)VAR_7->parms;

 switch (VAR_7->op) {
 case 129:
  VAR_12 = FUNC_1(VAR_6, VAR_9);
  break;
 case 128:
  if (VAR_9->descs != ((void*)0) && VAR_9->num > VAR_5)
   return (VAR_0);
  FUNC_6(VAR_6->td_pcb, VAR_3);
  if (VAR_9->descs != ((void*)0)) {
   VAR_11 = FUNC_5(VAR_9->num * sizeof(struct
       user_segment_descriptor), VAR_1, VAR_2);
   VAR_12 = FUNC_3(VAR_9->descs, VAR_11, VAR_9->num *
       sizeof(struct user_segment_descriptor));
   if (VAR_12 == 0)
    VAR_12 = FUNC_2(VAR_6, VAR_9, VAR_11);
   FUNC_4(VAR_11, VAR_1);
  } else {
   VAR_12 = FUNC_2(VAR_6, VAR_9, ((void*)0));
  }
  break;
 }
 return (VAR_12);
}
