
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct optlv_h {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct optlv_h const* VAR_2 ;

__attribute__((used)) static inline const struct optlv_h *FUNC_0(uint16_t VAR_3)
{
 if (VAR_3 > VAR_0 || VAR_3 <= VAR_1)
  return &VAR_2[VAR_1];

 return &VAR_2[VAR_3];
}
