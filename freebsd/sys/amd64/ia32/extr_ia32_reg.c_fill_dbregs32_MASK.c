
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct dbreg32 {int * dr; } ;
struct dbreg {int * dr; } ;


 int FUNC_0 (struct thread*,struct dbreg*) ;

int
FUNC_1(struct thread *VAR_0, struct dbreg32 *VAR_1)
{
 struct dbreg VAR_2;
 int VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_0, &VAR_2);
 for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
  VAR_1->dr[VAR_4] = VAR_2.dr[VAR_4];
 return (VAR_3);
}
