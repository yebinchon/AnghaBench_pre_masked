
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t varInds_t ;
typedef scalar_t__ U32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;

 int VAR_0 ;
 int FUNC_3 (int ) ;



 int * VAR_1 ;
 scalar_t__* VAR_2 ;




 scalar_t__* VAR_3 ;


__attribute__((used)) static int FUNC_4(varInds_t VAR_4, U32 VAR_5)
{
    VAR_5 = FUNC_2(FUNC_1(VAR_2[VAR_4], VAR_5), VAR_1[VAR_4]);
    switch(VAR_4) {
        case 128:
        case 135:
        case 133:
        case 131:
        case 132:
        case 130:
            return (int)(VAR_5 - VAR_2[VAR_4]);
        case 129:
        {
            int VAR_6 = 0;
            int VAR_7 = VAR_0;
            while(VAR_6 < VAR_7) {
                int VAR_8 = (VAR_6 + VAR_7) / 2;
                if(VAR_3[VAR_8] < VAR_5) {
                    VAR_6 = VAR_8 + 1;
                } if(VAR_3[VAR_8] == VAR_5) {
                    return VAR_8;
                } else {
                    VAR_7 = VAR_8;
                }
            }
            return VAR_6;
        }
        case 134:
            return (int)VAR_5 + 1;
        case 136:
        default:;
    }
    FUNC_0("Error, not a valid param\n ");
    FUNC_3(0);
    return -2;
}
