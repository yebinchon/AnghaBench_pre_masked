
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pptdev {int * vm; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct pptdev*,int ) ;
 struct pptdev* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4)
{
 struct pptdev *VAR_5;

 VAR_5 = FUNC_1(VAR_4);

 if (VAR_5->vm != ((void*)0))
  return (VAR_0);
 VAR_2--;
 FUNC_0(&VAR_3, VAR_5, VAR_1);
 FUNC_4(VAR_4);
 FUNC_2(FUNC_3(), FUNC_5(VAR_4));

 return (0);
}
