
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regdata {int dummy; } ;


 int FUNC_0 (int,char*) ;
 struct regdata* FUNC_1 () ;

__attribute__((used)) static struct regdata *
FUNC_2(void)
{
 static struct regdata *VAR_0 = ((void*)0);
 if (VAR_0 == ((void*)0)) {
  VAR_0 = FUNC_1();
  if (VAR_0 == ((void*)0))
   FUNC_0(-1, "missing or corrupted regdomain database");
 }
 return VAR_0;
}
