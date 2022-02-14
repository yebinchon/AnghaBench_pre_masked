
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iwm_mvm_tx_resp {int frame_count; int status; } ;


 int FUNC_0 (int*) ;

__attribute__((used)) static inline uint32_t FUNC_1(struct iwm_mvm_tx_resp *VAR_0)
{
 return FUNC_0((uint32_t *)&VAR_0->status +
       VAR_0->frame_count) & 0xfff;
}
