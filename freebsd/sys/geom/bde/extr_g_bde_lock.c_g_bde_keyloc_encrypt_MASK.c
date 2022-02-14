
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_char ;
typedef int keyInstance ;
typedef int cipherInstance ;


 int FUNC_0 (int *,int *,int *,void*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;

int
FUNC_5(u_char *VAR_2, uint64_t VAR_3, uint64_t VAR_4, void *VAR_5)
{
 u_char VAR_6[16];
 keyInstance VAR_7;
 cipherInstance VAR_8;

 FUNC_4(VAR_6, VAR_3);
 FUNC_4(VAR_6 + 8, VAR_4);
 FUNC_1(&VAR_8);
 FUNC_2(&VAR_7, VAR_0, VAR_1, VAR_2 + 0);
 FUNC_0(&VAR_8, &VAR_7, VAR_6, VAR_5, sizeof VAR_6);
 FUNC_3(VAR_6, sizeof VAR_6);
 FUNC_3(&VAR_8, sizeof VAR_8);
 FUNC_3(&VAR_7, sizeof VAR_7);
 return (0);
}
