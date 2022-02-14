
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_teap_pac {int pac_key; } ;


 size_t VAR_0 ;
 int * FUNC_0 (char*,size_t*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,size_t) ;

__attribute__((used)) static const char * FUNC_3(struct eap_teap_pac *VAR_1, char *VAR_2)
{
 u8 *VAR_3;
 size_t VAR_4;

 VAR_3 = FUNC_0(VAR_2, &VAR_4);
 if (!VAR_3 || VAR_4 != VAR_0) {
  FUNC_1(VAR_3);
  return "Invalid PAC-Key";
 }

 FUNC_2(VAR_1->pac_key, VAR_3, VAR_0);
 FUNC_1(VAR_3);

 return ((void*)0);
}
