
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlsv1_server {int status_request_multi; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int const*,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(struct tlsv1_server *VAR_1,
         const u8 *VAR_2, size_t VAR_3)
{
 const u8 *VAR_4, *VAR_5;
 u8 VAR_6;

 VAR_4 = VAR_2;
 VAR_5 = VAR_2 + VAR_3;
 if (VAR_5 - VAR_4 < 1)
  return;

 VAR_6 = *VAR_4++;
 FUNC_1(VAR_0, "TLSv1: CertificateStatusType %u", VAR_6);
 if (VAR_6 != 1 && VAR_6 != 2)
  return;




 FUNC_0(VAR_0, "TLSv1: OCSPStatusRequest", VAR_4, VAR_5 - VAR_4);

 if (VAR_6 == 2)
  VAR_1->status_request_multi = 1;
}
