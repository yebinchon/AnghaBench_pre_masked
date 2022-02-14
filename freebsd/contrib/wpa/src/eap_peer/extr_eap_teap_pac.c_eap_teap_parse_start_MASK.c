
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_teap_pac {int pac_type; } ;


 int VAR_0 ;
 struct eap_teap_pac* FUNC_0 (int) ;

__attribute__((used)) static const char * FUNC_1(struct eap_teap_pac **VAR_1)
{
 if (*VAR_1)
  return "START line without END";

 *VAR_1 = FUNC_0(sizeof(struct eap_teap_pac));
 if (!(*VAR_1))
  return "No memory for PAC entry";
 (*VAR_1)->pac_type = VAR_0;
 return ((void*)0);
}
