
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct pdata_ops {scalar_t__ v; } ;


 struct pdata_ops const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static inline const struct pdata_ops *FUNC_0(uint16_t VAR_4)
{
 int VAR_5;
 for (VAR_5 = VAR_2 + 1; VAR_5 <= VAR_1; VAR_5++) {
  const struct pdata_ops *VAR_6 = &VAR_0[VAR_5];
  if (VAR_6->v == VAR_4)
   return VAR_6;
 }
 return &VAR_0[VAR_3];
}
