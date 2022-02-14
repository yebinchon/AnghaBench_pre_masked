
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int,int,int,int) ;
 int FUNC_2 (int *,int ,int ) ;

int FUNC_3(adapter_t *VAR_2, u32 *VAR_3)
{
 int VAR_4;


 FUNC_2(VAR_2, VAR_0, 0);
 VAR_4 = FUNC_1(VAR_2, VAR_0,
         1, 1, 5, 1);
 if (VAR_4)
  return VAR_4;

 *VAR_3 = FUNC_0(VAR_2, VAR_1);

 return 0;
}
