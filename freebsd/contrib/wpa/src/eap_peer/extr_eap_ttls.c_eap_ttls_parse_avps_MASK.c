
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct ttls_parse_avp {int dummy; } ;
struct ttls_avp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,size_t,struct ttls_parse_avp*) ;
 int FUNC_1 (struct ttls_parse_avp*,int ,int) ;
 int FUNC_2 (int ,char*,int *,size_t) ;
 int FUNC_3 (int ,char*,unsigned long,unsigned long) ;
 size_t FUNC_4 (struct wpabuf*) ;
 int * FUNC_5 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_6(struct wpabuf *VAR_2,
          struct ttls_parse_avp *VAR_3)
{
 u8 *VAR_4;
 size_t VAR_5, VAR_6;
 int VAR_7;

 VAR_4 = FUNC_5(VAR_2);
 VAR_5 = FUNC_4(VAR_2);
 FUNC_2(VAR_0, "EAP-TTLS: Decrypted Phase 2 AVPs", VAR_4, VAR_5);
 if (VAR_5 < sizeof(struct ttls_avp)) {
  FUNC_3(VAR_1, "EAP-TTLS: Too short Phase 2 AVP frame"
      " len=%lu expected %lu or more - dropped",
      (unsigned long) VAR_5,
      (unsigned long) sizeof(struct ttls_avp));
  return -1;
 }


 FUNC_1(VAR_3, 0, sizeof(*VAR_3));

 while (VAR_5 > 0) {
  VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_3);
  if (VAR_7 < 0)
   return -1;

  VAR_6 = (4 - (VAR_7 & 3)) & 3;
  VAR_4 += VAR_7 + VAR_6;
  if (VAR_5 < VAR_7 + VAR_6)
   VAR_5 = 0;
  else
   VAR_5 -= VAR_7 + VAR_6;
 }

 return 0;
}
