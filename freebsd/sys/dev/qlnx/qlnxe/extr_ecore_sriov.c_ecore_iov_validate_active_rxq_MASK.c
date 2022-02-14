
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ecore_vf_info {scalar_t__ num_rxqs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ecore_vf_info*,scalar_t__,int ,int) ;

__attribute__((used)) static bool FUNC_1(struct ecore_vf_info *VAR_1)
{
 u8 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_rxqs; VAR_2++)
  if (FUNC_0(VAR_1, VAR_2,
        VAR_0,
        0))
   return 1;

 return 0;
}
