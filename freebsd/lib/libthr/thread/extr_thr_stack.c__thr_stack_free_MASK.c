
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack {scalar_t__ stacksize; scalar_t__ guardsize; int * stackaddr; } ;
struct pthread_attr {int flags; int stacksize_attr; int guardsize_attr; int * stackaddr_attr; } ;


 int FUNC_0 (int *,struct stack*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int) ;

void
FUNC_2(struct pthread_attr *VAR_6)
{
 struct stack *VAR_7;

 if ((VAR_6 != ((void*)0)) && ((VAR_6->flags & VAR_1) == 0)
     && (VAR_6->stackaddr_attr != ((void*)0))) {
  VAR_7 = (struct stack *)
   ((char *)VAR_6->stackaddr_attr +
   VAR_6->stacksize_attr - sizeof(struct stack));
  VAR_7->stacksize = FUNC_1(VAR_6->stacksize_attr);
  VAR_7->guardsize = FUNC_1(VAR_6->guardsize_attr);
  VAR_7->stackaddr = VAR_6->stackaddr_attr;

  if (VAR_7->stacksize == VAR_0 &&
      VAR_7->guardsize == VAR_2) {

   FUNC_0(&VAR_3, VAR_7, VAR_5);
  } else {

   FUNC_0(&VAR_4, VAR_7, VAR_5);
  }
  VAR_6->stackaddr_attr = ((void*)0);
 }
}
