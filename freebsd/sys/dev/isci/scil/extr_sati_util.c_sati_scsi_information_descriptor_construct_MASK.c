
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;
typedef int U32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ,int,int) ;

__attribute__((used)) static
void FUNC_1(
    U8 * VAR_2,
    U32 VAR_3,
    U8 * VAR_4)
{
    U8 VAR_5;
    U8 VAR_6 = 1;

    FUNC_0(VAR_2, VAR_3, 0, VAR_1);
    FUNC_0(VAR_2, VAR_3, 1, VAR_0);
    FUNC_0(VAR_2, VAR_3, 2, (VAR_6 << 7));
    FUNC_0(VAR_2, VAR_3, 3, 0);


    for (VAR_5=0; VAR_5<8; VAR_5++)
        FUNC_0(VAR_2, VAR_3, 4 + VAR_5, VAR_4==((void*)0)?0:VAR_4[VAR_5]);
}
