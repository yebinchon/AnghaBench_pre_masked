
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh_krl {int * comment; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;

int
FUNC_2(struct ssh_krl *VAR_1, const char *VAR_2)
{
 FUNC_0(VAR_1->comment);
 if ((VAR_1->comment = FUNC_1(VAR_2)) == ((void*)0))
  return VAR_0;
 return 0;
}
