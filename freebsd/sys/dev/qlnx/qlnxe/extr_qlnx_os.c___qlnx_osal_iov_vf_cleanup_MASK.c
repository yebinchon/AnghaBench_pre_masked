
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ecore_public_vf_info {scalar_t__ forced_vlan; int forced_mac; } ;
struct ecore_hwfn {int dummy; } ;


 int VAR_0 ;
 struct ecore_public_vf_info* FUNC_0 (struct ecore_hwfn*,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ecore_hwfn *VAR_1, uint8_t VAR_2)
{
        struct ecore_public_vf_info *VAR_3;

        VAR_3 = FUNC_0(VAR_1, VAR_2, 0);

        if (!VAR_3)
                return;


        FUNC_1(VAR_3->forced_mac, 0, VAR_0);

        VAR_3->forced_vlan = 0;

 return;
}
