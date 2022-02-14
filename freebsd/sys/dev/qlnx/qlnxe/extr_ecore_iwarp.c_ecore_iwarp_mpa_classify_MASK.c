
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ecore_iwarp_fpdu {int fpdu_length; scalar_t__ incomplete_bytes; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum ecore_iwarp_mpa_pkt_type { ____Placeholder_ecore_iwarp_mpa_pkt_type } ecore_iwarp_mpa_pkt_type ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ,int,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int * VAR_4 ;

__attribute__((used)) static enum ecore_iwarp_mpa_pkt_type
FUNC_3(struct ecore_hwfn *VAR_5,
    struct ecore_iwarp_fpdu *VAR_6,
    u16 VAR_7,
    u8 *VAR_8)

{
 enum ecore_iwarp_mpa_pkt_type VAR_9;
 u16 VAR_10;

 if (VAR_6->incomplete_bytes) {
  VAR_9 = VAR_2;
  goto out;
 }


 if (VAR_7 == 1) {

  VAR_6->fpdu_length = *VAR_8 << 8;
  VAR_9 = VAR_1;
  goto out;
 }

 VAR_10 = FUNC_2(*((u16 *)(VAR_8)));
 VAR_6->fpdu_length = FUNC_1(VAR_10);

 if (VAR_6->fpdu_length <= VAR_7)
  VAR_9 = VAR_0;
 else
  VAR_9 = VAR_1;

out:
 FUNC_0(VAR_5, VAR_3,
     "MPA_ALIGN: %s: fpdu_length=0x%x tcp_payload_len:0x%x\n",
     VAR_4[VAR_9], VAR_6->fpdu_length, VAR_7);

 return VAR_9;
}
