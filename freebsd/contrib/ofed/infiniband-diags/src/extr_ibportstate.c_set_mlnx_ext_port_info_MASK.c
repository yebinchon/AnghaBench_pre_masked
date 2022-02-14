
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ib_portid_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int ,int,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(ib_portid_t * VAR_2, uint8_t * VAR_3, int VAR_4)
{
 if (!FUNC_3(VAR_3, VAR_2, VAR_0,
    VAR_4, 0, VAR_1))
  FUNC_0("smp set MLNX ext portinfo failed");

 FUNC_1("\nAfter MLNXExtendedPortInfo set:\n");
 FUNC_2(VAR_2, VAR_3, VAR_4);
}
