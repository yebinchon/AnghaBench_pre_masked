
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;
typedef int bpobj_phys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int ,int,int ,int,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;

uint64_t
FUNC_3(objset_t *VAR_6, int VAR_7, dmu_tx_t *VAR_8)
{
 int VAR_9;

 if (FUNC_2(FUNC_1(VAR_6)) < VAR_4)
  VAR_9 = VAR_0;
 else if (FUNC_2(FUNC_1(VAR_6)) < VAR_5)
  VAR_9 = VAR_1;
 else
  VAR_9 = sizeof (bpobj_phys_t);

 return (FUNC_0(VAR_6, VAR_2, VAR_7,
     VAR_3, VAR_9, VAR_8));
}
