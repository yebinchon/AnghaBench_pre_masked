
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protoent_test_data {int dummy; } ;
struct protoent {int p_proto; } ;


 scalar_t__ FUNC_0 (struct protoent*,struct protoent*,int *) ;
 int FUNC_1 (struct protoent*) ;
 struct protoent* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct protoent_test_data*,struct protoent*) ;
 scalar_t__ FUNC_5 (struct protoent*,int *) ;

__attribute__((used)) static int
FUNC_6(struct protoent *VAR_0, void *VAR_1)
{
 struct protoent *VAR_2;

 FUNC_3("testing getprotobyport() with the following data...\n");
 FUNC_1(VAR_0);

 VAR_2 = FUNC_2(VAR_0->p_proto);
 if ((FUNC_5(VAR_2, ((void*)0)) != 0) ||
     ((FUNC_0(VAR_2, VAR_0, ((void*)0)) != 0) &&
     (FUNC_4((struct protoent_test_data *)VAR_1, VAR_2)
     != 0))) {
  FUNC_3("not ok\n");
  return (-1);
 } else {
  FUNC_3("ok\n");
  return (0);
 }
}
