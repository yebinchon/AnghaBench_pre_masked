
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;
typedef int FUZZ_dataProducer_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,scalar_t__) ;

int32_t FUNC_2(FUZZ_dataProducer_t *VAR_0,
                                    int32_t VAR_1, int32_t VAR_2)
{
    FUNC_0(VAR_1 <= VAR_2);

    if (VAR_1 < 0)
      return (int)FUNC_1(VAR_0, 0, VAR_2 - VAR_1) + VAR_1;

    return FUNC_1(VAR_0, VAR_1, VAR_2);
}
