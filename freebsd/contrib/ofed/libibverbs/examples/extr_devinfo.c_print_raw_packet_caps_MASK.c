
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(uint32_t VAR_3)
{
 FUNC_0("\traw packet caps:\n");
 if (VAR_3 & VAR_0)
  FUNC_0("\t\t\t\t\tC-VLAN stripping offload\n");
 if (VAR_3 & VAR_2)
  FUNC_0("\t\t\t\t\tScatter FCS offload\n");
 if (VAR_3 & VAR_1)
  FUNC_0("\t\t\t\t\tIP csum offload\n");
}
