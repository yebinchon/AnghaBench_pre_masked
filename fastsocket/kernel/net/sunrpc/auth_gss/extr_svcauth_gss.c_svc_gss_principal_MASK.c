
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {scalar_t__ rq_auth_data; } ;
struct gss_svc_data {TYPE_1__* rsci; } ;
struct TYPE_2__ {char* client_name; } ;



char *FUNC_0(struct svc_rqst *VAR_0)
{
 struct gss_svc_data *VAR_1 = (struct gss_svc_data *)VAR_0->rq_auth_data;

 if (VAR_1 && VAR_1->rsci)
  return VAR_1->rsci->client_name;
 return ((void*)0);
}
