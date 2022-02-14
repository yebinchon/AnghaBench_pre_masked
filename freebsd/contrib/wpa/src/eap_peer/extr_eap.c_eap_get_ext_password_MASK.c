
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int * ext_pw_buf; int ext_pw; } ;
struct eap_peer_config {int password_len; int * password; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int *,int ) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct eap_sm *VAR_0,
    struct eap_peer_config *VAR_1)
{
 char *VAR_2;

 if (VAR_1->password == ((void*)0))
  return -1;

 VAR_2 = FUNC_4(VAR_1->password_len + 1);
 if (VAR_2 == ((void*)0))
  return -1;
 FUNC_3(VAR_2, VAR_1->password, VAR_1->password_len);

 FUNC_0(VAR_0->ext_pw_buf);
 VAR_0->ext_pw_buf = FUNC_1(VAR_0->ext_pw, VAR_2);
 FUNC_2(VAR_2);

 return VAR_0->ext_pw_buf == ((void*)0) ? -1 : 0;
}
