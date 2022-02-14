
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ib_portid_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int,int,int) ;
 int FUNC_3 (int *,int *,int ,unsigned int,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(ib_portid_t * VAR_2, uint8_t * VAR_3, int VAR_4,
     int VAR_5, int VAR_6)
{
 unsigned VAR_7;

 VAR_7 = VAR_4;
 if (VAR_5)
  VAR_7 |= 1<<31;
 if (!FUNC_3(VAR_3, VAR_2, VAR_0, VAR_7, 0, VAR_1))
  FUNC_0("smp set portinfo failed");

 FUNC_1("\nAfter PortInfo set:\n");
 FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
