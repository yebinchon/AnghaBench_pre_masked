
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
typedef int adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 unsigned int FUNC_2 (int) ;
 unsigned int FUNC_3 (int) ;
 unsigned int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (int *,int ,int ,int ,int ,int) ;
 int FUNC_8 (int *,int ,unsigned int) ;

__attribute__((used)) static int FUNC_9(adapter_t *VAR_7, int VAR_8, int VAR_9,
    int VAR_10, unsigned int VAR_11)
{
 int VAR_12;
 u32 VAR_13 = FUNC_4(VAR_9) | FUNC_3(VAR_8);

 FUNC_0(VAR_7);
 FUNC_6(VAR_7, VAR_1, FUNC_5(VAR_6), 0);
 FUNC_8(VAR_7, VAR_0, VAR_13);
 FUNC_8(VAR_7, VAR_2, VAR_10);
 FUNC_8(VAR_7, VAR_3, FUNC_2(0));
 VAR_12 = FUNC_7(VAR_7, VAR_3, VAR_4, 0, VAR_5, 10);
 if (!VAR_12) {
  FUNC_8(VAR_7, VAR_2, VAR_11);
  FUNC_8(VAR_7, VAR_3, FUNC_2(1));
  VAR_12 = FUNC_7(VAR_7, VAR_3, VAR_4, 0,
          VAR_5, 10);
 }
 FUNC_1(VAR_7);
 return VAR_12;
}
