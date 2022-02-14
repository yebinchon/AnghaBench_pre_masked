
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_peap_data {scalar_t__ state; scalar_t__ peap_version; int tlv_request; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct eap_peap_data*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct eap_sm *VAR_5,
     struct eap_peap_data *VAR_6)
{
 if (VAR_6->state == VAR_0 || VAR_6->state == VAR_1) {
  FUNC_0(VAR_6, VAR_0);
  return;
 }

 if (VAR_6->peap_version == 0) {
  VAR_6->tlv_request = VAR_4;
  FUNC_0(VAR_6, VAR_2);
 } else {
  FUNC_0(VAR_6, VAR_3);
 }
}
