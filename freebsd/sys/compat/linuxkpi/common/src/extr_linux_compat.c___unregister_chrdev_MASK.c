
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_cdev {int dummy; } ;


 int FUNC_0 (struct linux_cdev*) ;
 struct linux_cdev* FUNC_1 (char const*,unsigned int,int) ;

void
FUNC_2(unsigned int VAR_0, unsigned int VAR_1,
    unsigned int VAR_2, const char *VAR_3)
{
 struct linux_cdev *VAR_4;
 int VAR_5;

 for (VAR_5 = VAR_1; VAR_5 < VAR_1 + VAR_2; VAR_5++) {
  VAR_4 = FUNC_1(VAR_3, VAR_0, VAR_5);
  if (VAR_4 != ((void*)0))
   FUNC_0(VAR_4);
 }
}
