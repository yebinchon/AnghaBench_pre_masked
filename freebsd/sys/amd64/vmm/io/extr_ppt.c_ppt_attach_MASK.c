
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pptdev {int dev; } ;
typedef int device_t ;


 int FUNC_0 (int *,struct pptdev*,int ) ;
 scalar_t__ VAR_0 ;
 struct pptdev* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4)
{
 struct pptdev *VAR_5;

 VAR_5 = FUNC_1(VAR_4);

 FUNC_4(FUNC_3(), FUNC_5(VAR_4));
 VAR_2++;
 FUNC_0(&VAR_3, VAR_5, VAR_1);
 VAR_5->dev = VAR_4;

 if (VAR_0)
  FUNC_2(VAR_4, "attached\n");

 return (0);
}
