
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;

__attribute__((used)) static inline uint32_t FUNC_0(uint16_t VAR_1, uint16_t VAR_2, uint8_t VAR_3)
{
 uint32_t VAR_4 = 0;

 struct {
  uint32_t cq_id_lo:10,
    qt:1,
    cq_id_hi:5,
    number_popped:13,
    arm:1,
    :1,
    se:1;
 } * VAR_5 = (void *)&VAR_4;




 VAR_5->cq_id_lo = VAR_2 & VAR_0;
 VAR_5->qt = 0;
 VAR_5->cq_id_hi = (VAR_2 >> 10) & 0x1f;
 VAR_5->number_popped = VAR_1;
 VAR_5->arm = VAR_3;

 return VAR_4;
}
