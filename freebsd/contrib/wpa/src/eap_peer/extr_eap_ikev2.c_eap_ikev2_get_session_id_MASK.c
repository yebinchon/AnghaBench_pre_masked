
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct eap_sm {int dummy; } ;
struct TYPE_2__ {int i_nonce_len; int r_nonce_len; int r_nonce; int i_nonce; } ;
struct eap_ikev2_data {scalar_t__ state; TYPE_1__ ikev2; int keymat_ok; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (size_t) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,char*,int *,size_t) ;

__attribute__((used)) static u8 * FUNC_3(struct eap_sm *VAR_3, void *VAR_4, size_t *VAR_5)
{
 struct eap_ikev2_data *VAR_6 = VAR_4;
 u8 *VAR_7;
 size_t VAR_8;
 size_t VAR_9;

 if (VAR_6->state != VAR_0 || !VAR_6->keymat_ok)
  return ((void*)0);

 VAR_8 = 1 + VAR_6->ikev2.i_nonce_len + VAR_6->ikev2.r_nonce_len;
 VAR_7 = FUNC_0(VAR_8);
 if (VAR_7) {
  VAR_9 = 0;
  VAR_7[VAR_9] = VAR_1;
  VAR_9++;
  FUNC_1(VAR_7 + VAR_9, VAR_6->ikev2.i_nonce,
     VAR_6->ikev2.i_nonce_len);
  VAR_9 += VAR_6->ikev2.i_nonce_len;
  FUNC_1(VAR_7 + VAR_9, VAR_6->ikev2.r_nonce,
     VAR_6->ikev2.r_nonce_len);
  *VAR_5 = VAR_8;
  FUNC_2(VAR_2, "EAP-IKEV2: Derived Session-Id",
       VAR_7, VAR_8);
 }

 return VAR_7;
}
