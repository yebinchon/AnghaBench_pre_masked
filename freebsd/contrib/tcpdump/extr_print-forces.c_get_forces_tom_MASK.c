
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct tom_h {scalar_t__ v; } ;


 struct tom_h const* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static inline const struct tom_h *FUNC_0(uint8_t VAR_3)
{
 int VAR_4;
 for (VAR_4 = VAR_2; VAR_4 <= VAR_1; VAR_4++) {
  const struct tom_h *VAR_5 = &VAR_0[VAR_4];
  if (VAR_5->v == VAR_3)
   return VAR_5;
 }
 return &VAR_0[VAR_2];
}
