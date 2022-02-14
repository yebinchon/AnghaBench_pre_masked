
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline uint32_t FUNC_0(uint16_t VAR_2, uint16_t VAR_3, uint8_t VAR_4)
{
 uint32_t VAR_5 = 0;

 struct {
  uint32_t eq_id_lo:9,
    ci:1,
    qt:1,
    eq_id_hi:5,
    number_popped:13,
    arm:1,
    :1,
    se:1;
 } * VAR_6 = (void *)&VAR_5;




 VAR_6->eq_id_lo = VAR_3 & VAR_0;
 VAR_6->qt = 1;
 VAR_6->eq_id_hi = (VAR_3 >> 9) & 0x1f;
 VAR_6->number_popped = VAR_2;
 VAR_6->arm = VAR_4;
 VAR_6->ci = VAR_1;

 return VAR_5;
}
