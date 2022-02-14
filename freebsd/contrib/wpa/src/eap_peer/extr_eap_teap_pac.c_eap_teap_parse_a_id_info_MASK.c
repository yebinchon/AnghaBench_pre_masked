
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_teap_pac {int a_id_info; int a_id_info_len; } ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static const char * FUNC_2(struct eap_teap_pac *VAR_0,
          char *VAR_1)
{
 FUNC_1(VAR_0->a_id_info);
 VAR_0->a_id_info = FUNC_0(VAR_1, &VAR_0->a_id_info_len);
 if (!VAR_0->a_id_info)
  return "Invalid A-ID-Info";
 return ((void*)0);
}
