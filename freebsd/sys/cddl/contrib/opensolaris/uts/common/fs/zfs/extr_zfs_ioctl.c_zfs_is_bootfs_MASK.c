
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int objset_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ,int **) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static boolean_t
FUNC_5(const char *VAR_2)
{
 objset_t *VAR_3;

 if (FUNC_0(VAR_2, VAR_1, &VAR_3) == 0) {
  boolean_t VAR_4;
  VAR_4 = (FUNC_1(VAR_3) == FUNC_4(FUNC_3(VAR_3)));
  FUNC_2(VAR_3, VAR_1);
  return (VAR_4);
 }
 return (VAR_0);
}
