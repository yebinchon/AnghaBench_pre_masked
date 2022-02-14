
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdev {int dummy; } ;
typedef int module_t ;
typedef int * eventhandler_tag ;


 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ,int ,int *,int) ;
 int VAR_0 ;


 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct cdev*) ;
 int VAR_2 ;
 struct cdev* FUNC_4 (int *,int ,int ,int ,int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_6(module_t VAR_7, int VAR_8, void *VAR_9)
{
 static struct cdev *VAR_10;
 static eventhandler_tag VAR_11;

 switch (VAR_8) {
 case 129:
  FUNC_2(&VAR_3);
  VAR_4 = 0;
  VAR_10 = FUNC_4(&VAR_6, 0, VAR_1, VAR_0, 0644,
      "pci");
  FUNC_5();
  VAR_11 = FUNC_1(VAR_2, VAR_5, ((void*)0),
      1000);
  break;

 case 128:
  if (VAR_11 != ((void*)0))
   FUNC_0(VAR_2, VAR_11);
  FUNC_3(VAR_10);
  break;
 }

 return (0);
}
