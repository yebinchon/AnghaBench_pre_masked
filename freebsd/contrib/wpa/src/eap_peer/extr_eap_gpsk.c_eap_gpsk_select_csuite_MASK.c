
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int msg_ctx; } ;
struct eap_gpsk_data {int vendor; int specifier; int forced_cipher; } ;
struct eap_gpsk_csuite {int specifier; int vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int ,char*,int,int,...) ;

__attribute__((used)) static int FUNC_5(struct eap_sm *VAR_4,
      struct eap_gpsk_data *VAR_5,
      const u8 *VAR_6,
      size_t VAR_7)
{
 struct eap_gpsk_csuite *VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = VAR_7 / sizeof(struct eap_gpsk_csuite);
 VAR_5->vendor = VAR_1;
 VAR_5->specifier = VAR_0;
 VAR_8 = (struct eap_gpsk_csuite *) VAR_6;
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  int VAR_11, VAR_12;
  VAR_11 = FUNC_1(VAR_8->vendor);
  VAR_12 = FUNC_0(VAR_8->specifier);
  FUNC_4(VAR_2, "EAP-GPSK: CSuite[%d]: %d:%d",
      VAR_9, VAR_11, VAR_12);
  if (VAR_5->vendor == VAR_1 &&
      VAR_5->specifier == VAR_0 &&
      FUNC_2(VAR_11, VAR_12) &&
      (!VAR_5->forced_cipher || VAR_5->forced_cipher == VAR_12))
  {
   VAR_5->vendor = VAR_11;
   VAR_5->specifier = VAR_12;
  }
  VAR_8++;
 }
 if (VAR_5->vendor == VAR_1 &&
     VAR_5->specifier == VAR_0) {
  FUNC_3(VAR_4->msg_ctx, VAR_3, "EAP-GPSK: No supported "
   "ciphersuite found");
  return -1;
 }
 FUNC_4(VAR_2, "EAP-GPSK: Selected ciphersuite %d:%d",
     VAR_5->vendor, VAR_5->specifier);

 return 0;
}
