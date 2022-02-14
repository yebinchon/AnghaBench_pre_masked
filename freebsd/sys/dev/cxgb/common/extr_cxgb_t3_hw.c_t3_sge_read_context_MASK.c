
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
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ,int,int ,int ,int) ;
 int FUNC_4 (int *,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_9, adapter_t *VAR_10,
          unsigned int VAR_11, u32 VAR_12[4])
{
 if (FUNC_2(VAR_10, VAR_0) & VAR_7)
  return -VAR_5;

 FUNC_4(VAR_10, VAR_0,
       FUNC_1(0) | VAR_9 | FUNC_0(VAR_11));
 if (FUNC_3(VAR_10, VAR_0, VAR_7, 0,
       VAR_8, 1))
  return -VAR_6;
 VAR_12[0] = FUNC_2(VAR_10, VAR_1);
 VAR_12[1] = FUNC_2(VAR_10, VAR_2);
 VAR_12[2] = FUNC_2(VAR_10, VAR_3);
 VAR_12[3] = FUNC_2(VAR_10, VAR_4);
 return 0;
}
