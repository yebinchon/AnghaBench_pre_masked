
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int dummy; } ;


 int FUNC_0 (char const*) ;
 struct pthread* FUNC_1 () ;
 int FUNC_2 (struct pthread*) ;
 int FUNC_3 (struct pthread*,int) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_0)
{
 struct pthread *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_1();
 FUNC_2(VAR_1);
 VAR_2 = FUNC_0(VAR_0);
 FUNC_3(VAR_1, 1);
 return (VAR_2);
}
