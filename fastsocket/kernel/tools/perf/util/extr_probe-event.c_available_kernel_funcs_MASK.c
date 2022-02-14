
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct map*) ;
 int FUNC_1 () ;
 struct map* FUNC_2 (char const*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1)
{
 struct map *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1();
 if (VAR_3 < 0)
  return VAR_3;

 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2) {
  FUNC_3("Failed to find %s map.\n", (VAR_1) ? : "kernel");
  return -VAR_0;
 }
 return FUNC_0(VAR_2);
}
