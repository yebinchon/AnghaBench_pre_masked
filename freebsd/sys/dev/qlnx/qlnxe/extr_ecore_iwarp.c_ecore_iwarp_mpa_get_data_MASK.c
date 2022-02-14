
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct unaligned_opaque_data {int cid; int flags; scalar_t__ tcp_payload_offset; scalar_t__ first_mpa_offset; } ;
struct ecore_hwfn {int dummy; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ,int ,scalar_t__,scalar_t__,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct ecore_hwfn *VAR_1,
    struct unaligned_opaque_data *VAR_2,
    u32 VAR_3, u32 VAR_4)
{
 u64 VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_3);
 *VAR_2 = *((struct unaligned_opaque_data *)&VAR_5);


 VAR_2->first_mpa_offset = VAR_2->tcp_payload_offset +
  FUNC_2(VAR_2->first_mpa_offset);
 VAR_2->cid = FUNC_3(VAR_2->cid);

 FUNC_0(VAR_1, VAR_0,
     "OPAQUE0=0x%x OPAQUE1=0x%x first_mpa_offset:0x%x\ttcp_payload_offset:0x%x\tflags:0x%x\tcid:0x%x\n",
     VAR_3, VAR_4, VAR_2->first_mpa_offset,
     VAR_2->tcp_payload_offset, VAR_2->flags,
     VAR_2->cid);
}
