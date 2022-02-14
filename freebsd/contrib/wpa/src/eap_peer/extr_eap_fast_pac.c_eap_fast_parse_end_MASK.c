
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_fast_pac {struct eap_fast_pac* next; } ;



__attribute__((used)) static const char * FUNC_0(struct eap_fast_pac **VAR_0,
           struct eap_fast_pac **VAR_1)
{
 if (*VAR_1 == ((void*)0))
  return "END line without START";
 if (*VAR_0) {
  struct eap_fast_pac *VAR_2 = *VAR_0;
  while (VAR_2->next)
   VAR_2 = VAR_2->next;
  VAR_2->next = *VAR_1;
 } else
  *VAR_0 = *VAR_1;

 *VAR_1 = ((void*)0);
 return ((void*)0);
}
