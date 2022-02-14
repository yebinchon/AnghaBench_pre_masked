
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int dummy; } ;
struct vlapic {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vm*,int,int) ;
 scalar_t__ FUNC_1 (struct vlapic*,int,int) ;
 int FUNC_2 (struct vm*) ;
 struct vlapic* FUNC_3 (struct vm*,int) ;

int
FUNC_4(struct vm *VAR_1, int VAR_2, int VAR_3, bool VAR_4)
{
 struct vlapic *VAR_5;

 if (VAR_2 < 0 || VAR_2 >= FUNC_2(VAR_1))
  return (VAR_0);





 if (VAR_3 < 16 || VAR_3 > 255)
  return (VAR_0);

 VAR_5 = FUNC_3(VAR_1, VAR_2);
 if (FUNC_1(VAR_5, VAR_3, VAR_4))
  FUNC_0(VAR_1, VAR_2, 1);
 return (0);
}
