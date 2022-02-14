
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct open_args {int flags; int path; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ,int ,int ) ;
 int FUNC_1 (struct thread*,struct open_args*) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_1, struct open_args *VAR_2)
{
 int VAR_3;

 if ((VAR_3 = FUNC_1(VAR_1, VAR_2)) == 0)
  FUNC_0(VAR_1, VAR_2->path, VAR_2->flags, VAR_0);

 return (VAR_3);
}
