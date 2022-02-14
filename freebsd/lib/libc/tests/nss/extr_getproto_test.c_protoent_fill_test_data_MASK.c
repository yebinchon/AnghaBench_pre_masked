
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protoent_test_data {int dummy; } ;
struct protoent {int dummy; } ;


 int FUNC_0 (int ,struct protoent_test_data*,struct protoent*) ;
 int FUNC_1 () ;
 struct protoent* FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct protoent*,int *) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct protoent_test_data *VAR_1)
{
 struct protoent *VAR_2;

 FUNC_4(1);
 while ((VAR_2 = FUNC_2()) != ((void*)0)) {
  if (FUNC_3(VAR_2, ((void*)0)) == 0)
   FUNC_0(VAR_0, VAR_1, VAR_2);
  else
   return (-1);
 }
 FUNC_1();

 return (0);
}
