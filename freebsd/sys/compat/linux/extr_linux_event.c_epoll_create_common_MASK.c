
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ,int ) ;
 int FUNC_1 (struct thread*,int,int *) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2, ((void*)0));
 if (VAR_3 != 0)
  return (VAR_3);

 FUNC_0(VAR_1, VAR_0, 0);

 return (0);
}
