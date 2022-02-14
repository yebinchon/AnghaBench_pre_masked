
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expression {int dummy; } ;


 int FUNC_0 (char*) ;
 struct expression* FUNC_1 (char**,int ,int ) ;

struct expression *
FUNC_2 (char *VAR_0)
{
  struct expression *VAR_1;
  VAR_1 = FUNC_1 (&VAR_0, 0, 0);
  if (*VAR_0)
    FUNC_0 ("Junk after end of expression.");
  return VAR_1;
}
