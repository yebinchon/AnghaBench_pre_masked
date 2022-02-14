
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int dummy; } ;
struct vlapic {int dummy; } ;
typedef int cpuset_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 int VAR_0 ;
 int FUNC_3 (struct vlapic*,int) ;
 int FUNC_4 (struct vm*) ;
 int FUNC_5 (struct vm*) ;
 struct vlapic* FUNC_6 (struct vm*,int) ;

int
FUNC_7(struct vm *VAR_1, int VAR_2, int VAR_3)
{
 struct vlapic *VAR_4;
 cpuset_t VAR_5;
 int VAR_6;

 if (VAR_2 < -1 || VAR_2 >= FUNC_5(VAR_1))
  return (VAR_0);

 if (VAR_2 == -1)
  VAR_5 = FUNC_4(VAR_1);
 else
  FUNC_2(VAR_2, &VAR_5);
 VAR_6 = 0;
 while ((VAR_2 = FUNC_1(&VAR_5)) != 0) {
  VAR_2--;
  FUNC_0(VAR_2, &VAR_5);
  VAR_4 = FUNC_6(VAR_1, VAR_2);
  VAR_6 = FUNC_3(VAR_4, VAR_3);
  if (VAR_6)
   break;
 }

 return (VAR_6);
}
