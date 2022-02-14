
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro {int length; int perm; struct macro* value; struct macro* name; } ;


 int FUNC_0 (int *,struct macro*,int ) ;
 int FUNC_1 (struct macro*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct macro*,char const*) ;
 int FUNC_4 (char const*) ;

int
FUNC_5(const char *VAR_2, const char *VAR_3)
{
 struct macro *VAR_4;

 if ((VAR_4 = FUNC_2(sizeof(*VAR_4))) == ((void*)0))
  return (-1);
 if ((VAR_4->name = FUNC_2(FUNC_4(VAR_2) + 1)) == ((void*)0)) {
  FUNC_1(VAR_4);
  return (-1);
 }
 FUNC_3(VAR_4->name, VAR_2);
 if ((VAR_4->value = FUNC_2(FUNC_4(VAR_3) + 1)) == ((void*)0)) {
  FUNC_1(VAR_4->name);
  FUNC_1(VAR_4);
  return (-1);
 }
 FUNC_3(VAR_4->value, VAR_3);
 VAR_4->length = FUNC_4(VAR_3);
 VAR_4->perm = 1;
 FUNC_0(&VAR_1, VAR_4, VAR_0);
 return (0);
}
