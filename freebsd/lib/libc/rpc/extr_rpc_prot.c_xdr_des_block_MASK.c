
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int des_block ;
typedef int caddr_t ;
typedef int bool_t ;
typedef int XDR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;

bool_t
FUNC_2(XDR *VAR_0, des_block *VAR_1)
{

 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_1 != ((void*)0));

 return (FUNC_1(VAR_0, (caddr_t)(void *)VAR_1, sizeof(des_block)));
}
