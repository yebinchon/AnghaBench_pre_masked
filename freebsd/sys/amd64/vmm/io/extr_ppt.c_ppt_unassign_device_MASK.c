
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int dummy; } ;
struct pptdev {struct vm* vm; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct pptdev* FUNC_4 (int,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct pptdev*) ;
 int FUNC_7 (struct pptdev*) ;
 int FUNC_8 (struct vm*,struct pptdev*) ;
 int FUNC_9 (struct vm*) ;

int
FUNC_10(struct vm *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct pptdev *VAR_6;

 VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5);
 if (VAR_6 != ((void*)0)) {



  if (VAR_6->vm != VAR_2)
   return (VAR_0);

  FUNC_3(VAR_6->dev);
  FUNC_5(VAR_6->dev);
  FUNC_2(VAR_6->dev);
  FUNC_8(VAR_2, VAR_6);
  FUNC_6(VAR_6);
  FUNC_7(VAR_6);
  FUNC_0(FUNC_9(VAR_2), FUNC_1(VAR_6->dev));
  VAR_6->vm = ((void*)0);
  return (0);
 }
 return (VAR_1);
}
