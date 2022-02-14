
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct eap_fast_data {TYPE_1__* current_pac; int pac; } ;
struct TYPE_2__ {int a_id_info_len; int a_id_info; int pac_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int const*,size_t,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct eap_fast_data *VAR_4,
    const u8 *VAR_5, size_t VAR_6)
{
 VAR_4->current_pac = FUNC_0(VAR_4->pac, VAR_5, VAR_6,
          VAR_3);
 if (VAR_4->current_pac == ((void*)0)) {




  VAR_4->current_pac = FUNC_0(
   VAR_4->pac, VAR_5, VAR_6,
   VAR_2);
 }

 if (VAR_4->current_pac) {
  FUNC_2(VAR_0, "EAP-FAST: PAC found for this A-ID "
      "(PAC-Type %d)", VAR_4->current_pac->pac_type);
  FUNC_1(VAR_1, "EAP-FAST: A-ID-Info",
      VAR_4->current_pac->a_id_info,
      VAR_4->current_pac->a_id_info_len);
 }
}
