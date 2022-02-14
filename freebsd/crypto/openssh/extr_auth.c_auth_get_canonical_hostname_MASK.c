
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh {int dummy; } ;


 char* FUNC_0 (struct ssh*) ;
 char const* FUNC_1 (struct ssh*) ;

const char *
FUNC_2(struct ssh *VAR_0, int VAR_1)
{
 static char *VAR_2;

 if (!VAR_1)
  return FUNC_1(VAR_0);
 else if (VAR_2 != ((void*)0))
  return VAR_2;
 else {
  VAR_2 = FUNC_0(VAR_0);
  return VAR_2;
 }
}
