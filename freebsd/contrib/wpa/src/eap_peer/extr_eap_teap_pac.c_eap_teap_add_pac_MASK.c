
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_teap_pac {struct eap_teap_pac* next; int a_id_info_len; int a_id_info; int i_id_len; int i_id; int a_id_len; int a_id; int pac_info_len; int pac_info; int pac_opaque_len; int pac_opaque; int pac_key; int pac_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (struct eap_teap_pac*) ;
 int FUNC_2 (struct eap_teap_pac**,struct eap_teap_pac**,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 struct eap_teap_pac* FUNC_4 (int) ;

int FUNC_5(struct eap_teap_pac **VAR_1,
       struct eap_teap_pac **VAR_2,
       struct eap_teap_pac *VAR_3)
{
 struct eap_teap_pac *VAR_4;

 if (!VAR_3 || !VAR_3->a_id)
  return -1;


 FUNC_2(VAR_1, VAR_2,
       VAR_3->a_id, VAR_3->a_id_len, VAR_3->pac_type);


 VAR_4 = FUNC_4(sizeof(*VAR_4));
 if (!VAR_4)
  return -1;

 VAR_4->pac_type = VAR_3->pac_type;
 FUNC_3(VAR_4->pac_key, VAR_3->pac_key, VAR_0);
 if (FUNC_0(&VAR_4->pac_opaque, &VAR_4->pac_opaque_len,
         VAR_3->pac_opaque, VAR_3->pac_opaque_len) < 0 ||
     FUNC_0(&VAR_4->pac_info, &VAR_4->pac_info_len,
         VAR_3->pac_info, VAR_3->pac_info_len) < 0 ||
     FUNC_0(&VAR_4->a_id, &VAR_4->a_id_len,
         VAR_3->a_id, VAR_3->a_id_len) < 0 ||
     FUNC_0(&VAR_4->i_id, &VAR_4->i_id_len,
         VAR_3->i_id, VAR_3->i_id_len) < 0 ||
     FUNC_0(&VAR_4->a_id_info, &VAR_4->a_id_info_len,
         VAR_3->a_id_info, VAR_3->a_id_info_len) < 0) {
  FUNC_1(VAR_4);
  return -1;
 }

 VAR_4->next = *VAR_1;
 *VAR_1 = VAR_4;

 return 0;
}
