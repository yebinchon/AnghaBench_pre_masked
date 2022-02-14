
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tlsv1_client {int dummy; } ;
typedef enum tls_ocsp_result { ____Placeholder_tls_ocsp_result } tls_ocsp_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (struct tlsv1_client*,int ,int ) ;
 int FUNC_2 (struct tlsv1_client*,int const*,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static enum tls_ocsp_result
FUNC_4(struct tlsv1_client *VAR_4,
          const u8 *VAR_5, size_t VAR_6)
{
 const u8 *VAR_7 = VAR_5 + VAR_6;
 u32 VAR_8;


 if (VAR_7 - VAR_5 < 3) {
  FUNC_3(VAR_0, "TLSv1: Too short OCSPResponse");
  FUNC_1(VAR_4, VAR_2, VAR_1);
  return VAR_3;
 }
 VAR_8 = FUNC_0(VAR_5);
 VAR_5 += 3;
 if (VAR_7 - VAR_5 < VAR_8) {
  FUNC_3(VAR_0, "TLSv1: Truncated OCSPResponse");
  FUNC_1(VAR_4, VAR_2, VAR_1);
  return VAR_3;
 }

 return FUNC_2(VAR_4, VAR_5, VAR_8);
}
