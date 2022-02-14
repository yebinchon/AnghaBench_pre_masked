
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,struct stat*) ;
 int FUNC_4 (unsigned int*,int) ;

__attribute__((used)) static void FUNC_5(void)
{
 unsigned int VAR_0;
 char *VAR_1;
 struct stat VAR_2;
 int VAR_3;

 VAR_1 = FUNC_0("printk_formats");
 VAR_3 = FUNC_3(VAR_1, &VAR_2);
 if (VAR_3 < 0) {

  VAR_0 = 0;
  FUNC_4(&VAR_0, 4);
  goto out;
 }
 FUNC_2(VAR_1, 4);

out:
 FUNC_1(VAR_1);
}
