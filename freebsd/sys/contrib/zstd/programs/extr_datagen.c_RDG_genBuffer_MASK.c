
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldt ;
typedef int fixedPoint_24_8 ;
typedef unsigned int U32 ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (void*,size_t,int ,double,int *,unsigned int*) ;
 int FUNC_2 (int *,int ,int) ;

void FUNC_3(void* VAR_1, size_t VAR_2, double VAR_3, double VAR_4, unsigned VAR_5)
{
    U32 VAR_6 = VAR_5;
    BYTE VAR_7[VAR_0];
    FUNC_2(VAR_7, '0', sizeof(VAR_7));
    if (VAR_4<=0.0) VAR_4 = VAR_3 / 4.5;
    FUNC_0(VAR_7, (fixedPoint_24_8)(VAR_4 * 256 + 0.001));
    FUNC_1(VAR_1, VAR_2, 0, VAR_3, VAR_7, &VAR_6);
}
