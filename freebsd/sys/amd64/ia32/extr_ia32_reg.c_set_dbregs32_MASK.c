
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct dbreg32 {scalar_t__* dr; } ;
struct dbreg {scalar_t__* dr; } ;


 int FUNC_0 (struct thread*,struct dbreg*) ;

int
FUNC_1(struct thread *VAR_0, struct dbreg32 *VAR_1)
{
 struct dbreg VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
  VAR_2.dr[VAR_3] = VAR_1->dr[VAR_3];
 for (VAR_3 = 8; VAR_3 < 16; VAR_3++)
  VAR_2.dr[VAR_3] = 0;
 return (FUNC_0(VAR_0, &VAR_2));
}
