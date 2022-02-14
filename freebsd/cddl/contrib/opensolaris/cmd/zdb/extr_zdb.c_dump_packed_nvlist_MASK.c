
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
typedef int objset_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,size_t,int ,size_t,char*,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,size_t,int **,int ) ;
 char* FUNC_5 (size_t,int ) ;
 int FUNC_6 (char*,size_t) ;

__attribute__((used)) static void
FUNC_7(objset_t *VAR_2, uint64_t VAR_3, void *VAR_4, size_t VAR_5)
{
 nvlist_t *VAR_6;
 size_t VAR_7 = *(uint64_t *)VAR_4;
 char *VAR_8 = FUNC_5(VAR_7, VAR_1);

 FUNC_0(0 == FUNC_1(VAR_2, VAR_3, 0, VAR_7, VAR_8, VAR_0));

 FUNC_0(FUNC_4(VAR_8, VAR_7, &VAR_6, 0) == 0);

 FUNC_6(VAR_8, VAR_7);

 FUNC_2(VAR_6, 8);

 FUNC_3(VAR_6);
}
