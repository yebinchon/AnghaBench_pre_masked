
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_teap_pac {int i_id; int i_id_len; } ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static const char * FUNC_2(struct eap_teap_pac *VAR_0, char *VAR_1)
{
 FUNC_1(VAR_0->i_id);
 VAR_0->i_id = FUNC_0(VAR_1, &VAR_0->i_id_len);
 if (!VAR_0->i_id)
  return "Invalid I-ID";
 return ((void*)0);
}
