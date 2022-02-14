
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int adapter_t ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int *,int ,int) ;

int FUNC_2(adapter_t *VAR_0, u8 VAR_1[6], int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, FUNC_0(1, VAR_2, 3),
    (VAR_1[0] << 16) | (VAR_1[1] << 8) | VAR_1[2]);
 if (!VAR_3)
  VAR_3 = FUNC_1(VAR_0, FUNC_0(1, VAR_2, 4),
     (VAR_1[3] << 16) | (VAR_1[4] << 8) | VAR_1[5]);
 return VAR_3;
}
