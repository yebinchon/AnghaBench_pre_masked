
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ecore_hwfn {int p_dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static u8 FUNC_1(struct ecore_hwfn *VAR_4,
       u8 VAR_5,
       u8 VAR_6,
       u8 VAR_7)
{
 if (VAR_6 == VAR_3)
  return VAR_2 * (FUNC_0(VAR_4->p_dev) ? VAR_1 : VAR_0) + VAR_5;
 else
  return VAR_5 * (FUNC_0(VAR_4->p_dev) ? VAR_2 : VAR_7) + VAR_6;
}
