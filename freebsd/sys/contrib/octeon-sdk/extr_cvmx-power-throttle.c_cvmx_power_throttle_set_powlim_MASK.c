
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static uint64_t FUNC_7(int VAR_5,
    uint8_t VAR_6)
{
    if (FUNC_0(VAR_4))
    {
        uint64_t VAR_7, VAR_8, VAR_9;

        FUNC_1(VAR_6 < 101);
        VAR_8 = FUNC_2(VAR_5);
        VAR_9 = FUNC_5(VAR_8);

        VAR_7 = FUNC_3(VAR_9, VAR_1);
 if (!FUNC_0(VAR_3))
 {
     uint64_t VAR_10;

     VAR_10 = FUNC_3(VAR_9, VAR_0);
     FUNC_1(VAR_7 > VAR_10);
     VAR_7 = VAR_7 - VAR_10;
 }

 VAR_7 = VAR_6 * VAR_7 / 100;
        VAR_9 = FUNC_4(VAR_2, VAR_9, VAR_7);

        FUNC_6(VAR_8, VAR_9);
        return VAR_9;
    }
    return 0;
}
