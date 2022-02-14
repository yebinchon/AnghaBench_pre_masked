
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ v ;
typedef int UInt32 ;
typedef void* UInt16 ;
struct TYPE_3__ {void* SuccessorHigh; void* SuccessorLow; } ;
typedef scalar_t__ CPpmd_Void_Ref ;
typedef TYPE_1__ CPpmd_State ;



__attribute__((used)) static void FUNC_0(CPpmd_State *VAR_0, CPpmd_Void_Ref VAR_1)
{
  (VAR_0)->SuccessorLow = (UInt16)((UInt32)(VAR_1) & 0xFFFF);
  (VAR_0)->SuccessorHigh = (UInt16)(((UInt32)(VAR_1) >> 16) & 0xFFFF);
}
