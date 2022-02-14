
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int spa_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *,char*,char**) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*,int **,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_9(const char *VAR_5, nvlist_t *VAR_6, nvlist_t *VAR_7)
{
 char *VAR_8;
 spa_t *VAR_9;
 int VAR_10;
 char *VAR_11;
 VAR_11 = FUNC_7(VAR_4);
 (void) FUNC_8(VAR_4, ((void*)0));
 VAR_10 = FUNC_4(VAR_11, &VAR_9, VAR_2);
 FUNC_6(VAR_11);
 if (VAR_10 != 0)
  return (VAR_10);

 if (FUNC_1(VAR_6, "message", &VAR_8) != 0) {
  FUNC_2(VAR_9, VAR_2);
  return (FUNC_0(VAR_0));
 }

 if (FUNC_5(VAR_9) < VAR_3) {
  FUNC_2(VAR_9, VAR_2);
  return (FUNC_0(VAR_1));
 }

 VAR_10 = FUNC_3(VAR_9, VAR_8);
 FUNC_2(VAR_9, VAR_2);
 return (VAR_10);
}
