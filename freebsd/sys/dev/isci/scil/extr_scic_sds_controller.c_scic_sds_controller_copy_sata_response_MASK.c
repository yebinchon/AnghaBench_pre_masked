
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int SATA_FIS_REG_D2H_T ;


 int FUNC_0 (char*,void*,int) ;

void FUNC_1(
   void * VAR_0,
   void * VAR_1,
   void * VAR_2
)
{
   FUNC_0(
      VAR_0,
      VAR_1,
      sizeof(U32)
   );

   FUNC_0(
      (char *)((char *)VAR_0 + sizeof(U32)),
      VAR_2,
      sizeof(SATA_FIS_REG_D2H_T) - sizeof(U32)
   );
}
