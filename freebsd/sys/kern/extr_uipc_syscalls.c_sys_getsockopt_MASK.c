
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int valsize ;
struct thread {int dummy; } ;
struct getsockopt_args {int avalsize; scalar_t__ val; int name; int level; int s; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct thread*,int ,int ,int ,scalar_t__,int ,int *) ;

int
FUNC_3(struct thread *VAR_1, struct getsockopt_args *VAR_2)
{
 socklen_t VAR_3;
 int VAR_4;

 if (VAR_2->val) {
  VAR_4 = FUNC_0(VAR_2->avalsize, &VAR_3, sizeof (VAR_3));
  if (VAR_4 != 0)
   return (VAR_4);
 }

 VAR_4 = FUNC_2(VAR_1, VAR_2->s, VAR_2->level, VAR_2->name,
     VAR_2->val, VAR_0, &VAR_3);

 if (VAR_4 == 0)
  VAR_4 = FUNC_1(&VAR_3, VAR_2->avalsize, sizeof (VAR_3));
 return (VAR_4);
}
