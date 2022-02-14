
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
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int,int ,int ,int) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static int FUNC_6(adapter_t *VAR_6, unsigned int VAR_7, int VAR_8,
       u32 VAR_9)
{
 if (!VAR_7 || VAR_7 > 4)
  return -VAR_3;
 if (FUNC_3(VAR_6, VAR_1) & VAR_4)
  return -VAR_2;
 FUNC_5(VAR_6, VAR_0, VAR_9);
 FUNC_5(VAR_6, VAR_1,
       FUNC_1(VAR_8) | FUNC_0(VAR_7 - 1) | FUNC_2(1));
 return FUNC_4(VAR_6, VAR_1, VAR_4, 0, VAR_5, 10);
}
