
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct cdev {int dummy; } ;
typedef int keyboard_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int * FUNC_0 (struct cdev*) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_1, u_long VAR_2, caddr_t VAR_3, int VAR_4, struct thread *VAR_5)
{
 keyboard_t *VAR_6 = FUNC_0(VAR_1);

 return ((VAR_6 == ((void*)0))? VAR_0 : FUNC_1(VAR_6, VAR_2, VAR_3));
}
