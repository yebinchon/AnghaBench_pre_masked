
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ,struct path*) ;
 int FUNC_1 (struct path*) ;
 char* FUNC_2 (struct path*) ;

char *FUNC_3(const char *VAR_1)
{
 struct path VAR_2;

 if (VAR_1 && FUNC_0(VAR_1, VAR_0, &VAR_2) == 0) {
  char *VAR_3 = FUNC_2(&VAR_2);
  FUNC_1(&VAR_2);
  return VAR_3;
 }
 return ((void*)0);
}
