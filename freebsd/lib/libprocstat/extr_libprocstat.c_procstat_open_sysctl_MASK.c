
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat {int type; } ;


 int VAR_0 ;
 struct procstat* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;

struct procstat *
FUNC_2(void)
{
 struct procstat *VAR_1;

 VAR_1 = FUNC_0(1, sizeof(*VAR_1));
 if (VAR_1 == ((void*)0)) {
  FUNC_1("malloc()");
  return (((void*)0));
 }
 VAR_1->type = VAR_0;
 return (VAR_1);
}
