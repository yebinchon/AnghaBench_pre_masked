
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uchar_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;
struct TYPE_3__ {int dde_key; int dde_phys; } ;
typedef TYPE_1__ ddt_entry_t ;
typedef int cbuf ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int,int) ;
 int FUNC_1 (int *,int ,int *,int ,int,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_2(objset_t *VAR_1, uint64_t VAR_2, ddt_entry_t *VAR_3, dmu_tx_t *VAR_4)
{
 uchar_t VAR_5[sizeof (VAR_3->dde_phys) + 1];
 uint64_t VAR_6;

 VAR_6 = FUNC_0(VAR_3->dde_phys, VAR_5,
     sizeof (VAR_3->dde_phys), sizeof (VAR_5));

 return (FUNC_1(VAR_1, VAR_2, (uint64_t *)&VAR_3->dde_key,
     VAR_0, 1, VAR_6, VAR_5, VAR_4));
}
