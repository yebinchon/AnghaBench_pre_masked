
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group_test_data {int dummy; } ;
struct group {int gr_gid; } ;


 scalar_t__ FUNC_0 (struct group*,struct group*,int *) ;
 int FUNC_1 (struct group*) ;
 struct group* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct group_test_data*,struct group*) ;
 scalar_t__ FUNC_4 (struct group*,int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(struct group *VAR_0, void *VAR_1)
{
 struct group *VAR_2;

 FUNC_5("testing getgrgid() with the following data...\n");
 FUNC_1(VAR_0);

 VAR_2 = FUNC_2(VAR_0->gr_gid);
 if (FUNC_4(VAR_2, ((void*)0)) != 0 ||
     (FUNC_0(VAR_2, VAR_0, ((void*)0)) != 0 &&
      FUNC_3((struct group_test_data *)VAR_1, VAR_2) != 0)) {
  return (-1);
 } else {
  return (0);
 }
}
