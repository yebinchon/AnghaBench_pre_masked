
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct eap_sm {int dummy; } ;
struct TYPE_2__ {int nonce_len; } ;
struct eap_eke_data {scalar_t__ state; TYPE_1__ sess; int nonce_s; int nonce_p; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (size_t) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static u8 * FUNC_2(struct eap_sm *VAR_2, void *VAR_3, size_t *VAR_4)
{
 struct eap_eke_data *VAR_5 = VAR_3;
 u8 *VAR_6;
 size_t VAR_7;

 if (VAR_5->state != VAR_1)
  return ((void*)0);

 VAR_7 = 1 + 2 * VAR_5->sess.nonce_len;
 VAR_6 = FUNC_0(VAR_7);
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 VAR_6[0] = VAR_0;
 FUNC_1(VAR_6 + 1, VAR_5->nonce_p, VAR_5->sess.nonce_len);
 FUNC_1(VAR_6 + 1 + VAR_5->sess.nonce_len, VAR_5->nonce_s,
    VAR_5->sess.nonce_len);
 *VAR_4 = VAR_7;

 return VAR_6;
}
