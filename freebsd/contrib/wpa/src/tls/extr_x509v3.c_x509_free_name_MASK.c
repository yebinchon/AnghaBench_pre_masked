
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x509_name {size_t num_attr; int rid; scalar_t__ ip_len; int * ip; int * uri; int * dns; int * alt_email; int * email; TYPE_1__* attr; } ;
struct TYPE_2__ {int type; int * value; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;

void FUNC_2(struct x509_name *VAR_1)
{
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_attr; VAR_2++) {
  FUNC_0(VAR_1->attr[VAR_2].value);
  VAR_1->attr[VAR_2].value = ((void*)0);
  VAR_1->attr[VAR_2].type = VAR_0;
 }
 VAR_1->num_attr = 0;
 FUNC_0(VAR_1->email);
 VAR_1->email = ((void*)0);

 FUNC_0(VAR_1->alt_email);
 FUNC_0(VAR_1->dns);
 FUNC_0(VAR_1->uri);
 FUNC_0(VAR_1->ip);
 VAR_1->alt_email = VAR_1->dns = VAR_1->uri = ((void*)0);
 VAR_1->ip = ((void*)0);
 VAR_1->ip_len = 0;
 FUNC_1(&VAR_1->rid, 0, sizeof(VAR_1->rid));
}
