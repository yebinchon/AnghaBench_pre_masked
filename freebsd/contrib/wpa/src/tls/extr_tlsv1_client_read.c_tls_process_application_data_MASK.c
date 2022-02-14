
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct tlsv1_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__* FUNC_0 (size_t) ;
 int FUNC_1 (scalar_t__*,scalar_t__ const*,size_t) ;
 int FUNC_2 (struct tlsv1_client*,int ,int ) ;
 int FUNC_3 (int ,char*,scalar_t__ const*,size_t) ;
 int FUNC_4 (int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct tlsv1_client *VAR_4, u8 VAR_5,
     const u8 *VAR_6, size_t *VAR_7,
     u8 **VAR_8, size_t *VAR_9)
{
 const u8 *VAR_10;
 size_t VAR_11;

 if (VAR_5 != VAR_3) {
  FUNC_4(VAR_0, "TLSv1: Expected Application Data; "
      "received content type 0x%x", VAR_5);
  FUNC_2(VAR_4, VAR_1,
     VAR_2);
  return -1;
 }

 VAR_10 = VAR_6;
 VAR_11 = *VAR_7;

 FUNC_3(VAR_0, "TLSv1: Application Data included in Handshake",
      VAR_10, VAR_11);

 *VAR_8 = FUNC_0(VAR_11);
 if (*VAR_8) {
  FUNC_1(*VAR_8, VAR_10, VAR_11);
  *VAR_9 = VAR_11;
 }

 return 0;
}
