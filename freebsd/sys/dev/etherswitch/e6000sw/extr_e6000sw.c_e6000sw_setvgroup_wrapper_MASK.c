
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int etherswitch_vlangroup_t ;
typedef int e6000sw_softc_t ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, etherswitch_vlangroup_t *VAR_2)
{
 e6000sw_softc_t *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_1);
 FUNC_1(VAR_3, VAR_0);

 FUNC_0(VAR_3);
 VAR_4 = FUNC_4(VAR_1, VAR_2);
 FUNC_2(VAR_3);

 return (VAR_4);
}
