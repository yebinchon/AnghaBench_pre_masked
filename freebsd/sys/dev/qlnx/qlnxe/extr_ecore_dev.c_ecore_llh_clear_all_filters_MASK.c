
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ecore_dev {TYPE_1__* p_llh_info; int mf_bits; } ;
struct TYPE_2__ {scalar_t__ num_ppfid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ecore_dev*,scalar_t__) ;

void FUNC_2(struct ecore_dev *VAR_2)
{
 u8 VAR_3;

 if (!FUNC_0(VAR_1, &VAR_2->mf_bits) &&
     !FUNC_0(VAR_0, &VAR_2->mf_bits))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->p_llh_info->num_ppfid; VAR_3++)
  FUNC_1(VAR_2, VAR_3);
}
