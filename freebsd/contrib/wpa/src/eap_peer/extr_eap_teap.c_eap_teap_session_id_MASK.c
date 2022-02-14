
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int conn; } ;
struct eap_teap_data {int id_len; int * session_id; TYPE_1__ ssl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t const) ;
 int FUNC_2 (int ,int ,size_t const) ;
 int FUNC_3 (int ,char*,int *,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct eap_teap_data *VAR_3)
{
 const size_t VAR_4 = 100;
 int VAR_5;

 FUNC_0(VAR_3->session_id);
 VAR_3->session_id = FUNC_1(VAR_4);
 if (!VAR_3->session_id)
  return -1;

 VAR_3->session_id[0] = VAR_0;
 VAR_5 = FUNC_2(VAR_3->ssl.conn, *(VAR_3->session_id + 1),
     VAR_4 - 1);
 if (VAR_5 < 0) {
  FUNC_0(VAR_3->session_id);
  VAR_3->session_id = ((void*)0);
  FUNC_4(VAR_2, "EAP-TEAP: Failed to derive Session-Id");
  return -1;
 }

 VAR_3->id_len = 1 + VAR_5;
 FUNC_3(VAR_1, "EAP-TEAP: Derived Session-Id",
      VAR_3->session_id, VAR_3->id_len);
 return 0;
}
