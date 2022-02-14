
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int ext_pw_buf; } ;
struct eap_peer_config {int flags; size_t password_len; int const* password; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct eap_peer_config* FUNC_0 (struct eap_sm*) ;
 scalar_t__ FUNC_1 (struct eap_sm*,struct eap_peer_config*) ;
 int const* FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;

const u8 * FUNC_4(struct eap_sm *VAR_2, size_t *VAR_3, int *VAR_4)
{
 struct eap_peer_config *VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 if (VAR_5->flags & VAR_0) {
  if (FUNC_1(VAR_2, VAR_5) < 0)
   return ((void*)0);
  if (VAR_4)
   *VAR_4 = 0;
  *VAR_3 = FUNC_3(VAR_2->ext_pw_buf);
  return FUNC_2(VAR_2->ext_pw_buf);
 }

 *VAR_3 = VAR_5->password_len;
 if (VAR_4)
  *VAR_4 = !!(VAR_5->flags & VAR_1);
 return VAR_5->password;
}
