
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct job {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 struct job* FUNC_1 (char const*) ;

__attribute__((used)) static struct job *
FUNC_2(const char *VAR_0)
{
 struct job *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 == ((void*)0))
  FUNC_0("No such job: %s", VAR_0);
 return (VAR_1);
}
