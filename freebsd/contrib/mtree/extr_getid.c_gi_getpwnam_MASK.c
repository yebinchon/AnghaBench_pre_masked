
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int dummy; } ;


 struct passwd VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int ,char const*) ;
 int FUNC_2 () ;

__attribute__((used)) static struct passwd *
FUNC_3(const char *VAR_2)
{
 int VAR_3;

 if (!FUNC_2())
  return ((void*)0);
 VAR_3 = FUNC_1(1, 0, VAR_2);
 if (!VAR_1)
  FUNC_0();
 return (VAR_3) ? &VAR_0 : ((void*)0);
}
