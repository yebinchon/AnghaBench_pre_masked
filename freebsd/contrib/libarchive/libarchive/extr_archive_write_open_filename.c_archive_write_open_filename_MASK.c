
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {int dummy; } ;


 int FUNC_0 (struct archive*,int) ;
 int FUNC_1 (struct archive*,int,char const*) ;

int
FUNC_2(struct archive *VAR_0, const char *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_1[0] == '\0')
  return (FUNC_0(VAR_0, 1));

 return (FUNC_1(VAR_0, 1, VAR_1));
}
