
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int16_t ;
typedef int cvmx_fau_tagwait16_t ;
typedef int cvmx_fau_reg_16_t ;


 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline cvmx_fau_tagwait16_t FUNC_2(cvmx_fau_reg_16_t VAR_0, int16_t VAR_1)
{
    union
    {
        uint64_t i16;
        cvmx_fau_tagwait16_t t;
    } VAR_2;
    VAR_2.i16 = FUNC_1(FUNC_0(1, VAR_0, VAR_1));
    return VAR_2.t;
}
