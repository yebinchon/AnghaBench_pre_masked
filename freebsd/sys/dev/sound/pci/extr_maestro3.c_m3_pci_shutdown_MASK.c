
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sc_info*) ;
 int FUNC_2 (struct sc_info*) ;
 int FUNC_3 (struct sc_info*,int) ;
 struct sc_info* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct sc_info *VAR_2 = FUNC_4(VAR_1);

 FUNC_0(VAR_0, ("m3_pci_shutdown\n"));

 FUNC_1(VAR_2);
 FUNC_3(VAR_2, 3);
 FUNC_2(VAR_2);

 return 0;
}
