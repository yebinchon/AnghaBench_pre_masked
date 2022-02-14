
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int tmp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,size_t,int const*,size_t,int *) ;
 int FUNC_1 (int const*,size_t,int const*,size_t,int *) ;
 int FUNC_2 (int const*,size_t,int const*,size_t,int *) ;
 int FUNC_3 (int *,int *,size_t) ;
 int FUNC_4 (int *,int ,size_t) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;

__attribute__((used)) static int FUNC_9(u16 VAR_2, const u8 *VAR_3, size_t VAR_4,
       const u8 *VAR_5, size_t VAR_6,
       u8 *VAR_7, size_t VAR_8)
{
 int VAR_9;
 u8 VAR_10[48];

 FUNC_4(VAR_10, 0, sizeof(VAR_10));
 FUNC_4(VAR_7, 0, VAR_8);

 if (FUNC_5(VAR_2)) {
  FUNC_8(VAR_0, "EAP-TEAP: MAC algorithm: HMAC-SHA1");
  VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_10);
 } else if (FUNC_6(VAR_2)) {
  FUNC_8(VAR_0, "EAP-TEAP: MAC algorithm: HMAC-SHA256");
  VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_10);
 } else if (FUNC_7(VAR_2)) {
  FUNC_8(VAR_0, "EAP-TEAP: MAC algorithm: HMAC-SHA384");
  VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_10);
 } else {
  FUNC_8(VAR_1,
      "EAP-TEAP: Unsupported TLS cipher suite 0x%04x",
      VAR_2);
  VAR_9 = -1;
 }
 if (VAR_9 < 0)
  return VAR_9;





 if (VAR_8 > sizeof(VAR_10))
  VAR_8 = sizeof(VAR_10);
 FUNC_3(VAR_7, VAR_10, VAR_8);
 return 0;
}
