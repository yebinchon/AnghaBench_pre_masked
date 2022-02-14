
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct mq_attr {int dummy; } ;
struct kmq_open_args {int flags; int * attr; int mode; int path; } ;
typedef int attr ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,struct mq_attr*,int) ;
 int FUNC_2 (struct thread*,int ,int,int ,struct mq_attr*) ;

int
FUNC_3(struct thread *VAR_4, struct kmq_open_args *VAR_5)
{
 struct mq_attr VAR_6;
 int VAR_7, VAR_8;

 if ((VAR_5->flags & VAR_1) == VAR_1 || VAR_5->flags & VAR_3)
  return (VAR_0);
 VAR_7 = FUNC_0(VAR_5->flags);
 if ((VAR_7 & VAR_2) != 0 && VAR_5->attr != ((void*)0)) {
  VAR_8 = FUNC_1(VAR_5->attr, &VAR_6, sizeof(VAR_6));
  if (VAR_8)
   return (VAR_8);
 }
 return (FUNC_2(VAR_4, VAR_5->path, VAR_7, VAR_5->mode,
     VAR_5->attr != ((void*)0) ? &VAR_6 : ((void*)0)));
}
