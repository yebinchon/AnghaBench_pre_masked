
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char const*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int ,char const*,int *,int **) ;
 int FUNC_3 (int *) ;

int
FUNC_4(const char *VAR_1, const char *VAR_2)
{
 nvlist_t *VAR_3;
 nvlist_t *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_1();
 FUNC_0(VAR_3, "target", VAR_2);
 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_3, &VAR_4);
 FUNC_3(VAR_3);
 FUNC_3(VAR_4);
 return (VAR_5);
}
