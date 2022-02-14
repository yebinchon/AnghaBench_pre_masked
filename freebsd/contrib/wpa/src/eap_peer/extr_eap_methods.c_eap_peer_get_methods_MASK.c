
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct eap_method {struct eap_method const* next; } const eap_method ;


 struct eap_method const* VAR_0 ;

const struct eap_method * FUNC_0(size_t *VAR_1)
{
 int VAR_2 = 0;
 struct eap_method *VAR_3;

 for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->next)
  VAR_2++;

 *VAR_1 = VAR_2;
 return VAR_0;
}
