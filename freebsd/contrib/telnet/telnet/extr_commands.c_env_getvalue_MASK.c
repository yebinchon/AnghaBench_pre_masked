
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct env_lst {unsigned char* value; } ;


 struct env_lst* FUNC_0 (unsigned char const*) ;

unsigned char *
FUNC_1(const unsigned char *VAR_0)
{
 struct env_lst *VAR_1;

 if ((VAR_1 = FUNC_0(VAR_0)))
  return(VAR_1->value);
 return(((void*)0));
}
