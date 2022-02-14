
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 unsigned int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int *,int ,int ,int ,int ,int) ;
 int FUNC_9 (int *,int ,int) ;

int FUNC_10(adapter_t *VAR_8, int VAR_9, int VAR_10,
  int VAR_11, unsigned int *VAR_12)
{
 int VAR_13;
 u32 VAR_14 = FUNC_4(VAR_11) | FUNC_3(VAR_9);

 if (VAR_10)
  return -VAR_4;

 FUNC_0(VAR_8);
 FUNC_7(VAR_8, VAR_1, FUNC_5(VAR_7), FUNC_5(1));
 FUNC_9(VAR_8, VAR_0, VAR_14);
 FUNC_9(VAR_8, VAR_3, FUNC_2(2));
 VAR_13 = FUNC_8(VAR_8, VAR_3, VAR_5, 0, VAR_6, 10);
 if (!VAR_13)
  *VAR_12 = FUNC_6(VAR_8, VAR_2);
 FUNC_1(VAR_8);
 return VAR_13;
}
