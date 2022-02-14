
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct mq_attr {int __reserved; } ;
struct kmq_setattr_args {int * oattr; int * attr; int mqd; } ;
typedef int oattr ;
typedef int attr ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,struct mq_attr*,int) ;
 int FUNC_2 (struct mq_attr*,int *,int) ;
 int FUNC_3 (struct thread*,int ,struct mq_attr*,struct mq_attr*) ;

int
FUNC_4(struct thread *VAR_0, struct kmq_setattr_args *VAR_1)
{
 struct mq_attr VAR_2, VAR_3;
 int VAR_4;

 if (VAR_1->attr != ((void*)0)) {
  VAR_4 = FUNC_1(VAR_1->attr, &VAR_2, sizeof(VAR_2));
  if (VAR_4 != 0)
   return (VAR_4);
 }
 VAR_4 = FUNC_3(VAR_0, VAR_1->mqd, VAR_1->attr != ((void*)0) ? &VAR_2 : ((void*)0),
     &VAR_3);
 if (VAR_4 == 0 && VAR_1->oattr != ((void*)0)) {
  FUNC_0(VAR_3.__reserved, sizeof(VAR_3.__reserved));
  VAR_4 = FUNC_2(&VAR_3, VAR_1->oattr, sizeof(VAR_3));
 }
 return (VAR_4);
}
