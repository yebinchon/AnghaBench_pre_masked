
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {scalar_t__ workaround; } ;
struct eap_mschapv2_hdr {int ms_length; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct eap_sm *VAR_1, size_t VAR_2,
        const struct eap_mschapv2_hdr *VAR_3)
{
 size_t VAR_4 = FUNC_0(VAR_3->ms_length);

 if (VAR_4 == VAR_2)
  return 0;

 FUNC_1(VAR_0, "EAP-MSCHAPV2: Invalid header: len=%lu "
     "ms_len=%lu", (unsigned long) VAR_2, (unsigned long) VAR_4);
 if (VAR_1->workaround) {


  FUNC_1(VAR_0, "EAP-MSCHAPV2: workaround, ignore"
      " invalid ms_len %lu (len %lu)",
      (unsigned long) VAR_4,
      (unsigned long) VAR_2);
  return 0;
 }

 return -1;
}
