
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ lisp_hdr_flags ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline uint8_t FUNC_0(uint8_t VAR_4, uint8_t VAR_5)
{
 uint8_t VAR_6 = 0;

 if (VAR_4 == VAR_2)
  VAR_6 = (VAR_5) & VAR_3;
 else if (VAR_4 == VAR_0)
  VAR_6 = (VAR_5) & VAR_1;

 return VAR_6;
}
