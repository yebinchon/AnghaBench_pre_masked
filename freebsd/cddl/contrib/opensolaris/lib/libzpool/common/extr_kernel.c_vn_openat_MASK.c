
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*,char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 char* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (char*,int,int,int,int **,int,int) ;

int
FUNC_6(char *VAR_2, int VAR_3, int VAR_4, int VAR_5, vnode_t **VAR_6, int VAR_7,
    int VAR_8, vnode_t *VAR_9, int VAR_10)
{
 char *VAR_11 = FUNC_3(FUNC_2(VAR_2) + 2, VAR_0);
 int VAR_12;

 FUNC_0(VAR_9 == VAR_1);
 (void) FUNC_1(VAR_11, "/%s", VAR_2);


 VAR_12 = FUNC_5(VAR_11, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

 FUNC_4(VAR_11, FUNC_2(VAR_2) + 2);

 return (VAR_12);
}
