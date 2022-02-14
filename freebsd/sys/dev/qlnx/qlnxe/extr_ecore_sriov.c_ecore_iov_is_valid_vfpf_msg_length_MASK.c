
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union vfpf_tlvs {int dummy; } vfpf_tlvs ;
typedef int u32 ;
struct vfpf_first_tlv {int dummy; } ;



bool FUNC_0(u32 VAR_0)
{
 return (VAR_0 >= sizeof(struct vfpf_first_tlv) &&
  (VAR_0 <= sizeof(union vfpf_tlvs)));
}
