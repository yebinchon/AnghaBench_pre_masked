
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int FUNC_0 (char const*,int) ;
 int FUNC_1 (char const*,struct stat*) ;
 int FUNC_2 (unsigned int*,int) ;

__attribute__((used)) static void FUNC_3(void)
{
 unsigned int VAR_0;
 const char *VAR_1 = "/proc/kallsyms";
 struct stat VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, &VAR_2);
 if (VAR_3 < 0) {

  VAR_0 = 0;
  FUNC_2(&VAR_0, 4);
  return;
 }
 FUNC_0(VAR_1, 4);
}
