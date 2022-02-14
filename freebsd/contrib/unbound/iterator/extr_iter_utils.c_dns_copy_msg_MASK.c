
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regional {int dummy; } ;
struct TYPE_2__ {int qname_len; int qname; } ;
struct dns_msg {int rep; TYPE_1__ qinfo; } ;


 scalar_t__ FUNC_0 (struct regional*,int) ;
 int FUNC_1 (struct regional*,int ,int ) ;
 int FUNC_2 (int ,int *,struct regional*) ;

struct dns_msg*
FUNC_3(struct dns_msg* VAR_0, struct regional* VAR_1)
{
 struct dns_msg* VAR_2 = (struct dns_msg*)FUNC_0(VAR_1,
  sizeof(struct dns_msg));
 if(!VAR_2)
  return ((void*)0);
 VAR_2->qinfo = VAR_0->qinfo;
 if(!(VAR_2->qinfo.qname = FUNC_1(VAR_1, VAR_0->qinfo.qname,
  VAR_0->qinfo.qname_len)))
  return ((void*)0);
 if(!(VAR_2->rep = FUNC_2(VAR_0->rep, ((void*)0), VAR_1)))
  return ((void*)0);
 return VAR_2;
}
