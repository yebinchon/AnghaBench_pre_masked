
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regional {int dummy; } ;
struct msg_parse {int dummy; } ;
struct dns_msg {int rep; int qinfo; } ;
typedef int sldns_buffer ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct dns_msg*,int ,int) ;
 int FUNC_2 (int *,struct msg_parse*,int *,int *,int *,struct regional*) ;
 scalar_t__ FUNC_3 (struct regional*,int) ;

struct dns_msg*
FUNC_4(sldns_buffer* VAR_0, struct msg_parse* VAR_1,
 struct regional* VAR_2)
{
 struct dns_msg* VAR_3 = (struct dns_msg*)FUNC_3(VAR_2,
  sizeof(struct dns_msg));
 if(!VAR_3)
  return ((void*)0);
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 if(!FUNC_2(VAR_0, VAR_1, ((void*)0), &VAR_3->qinfo, &VAR_3->rep, VAR_2)) {
  FUNC_0("malloc failure: allocating incoming dns_msg");
  return ((void*)0);
 }
 return VAR_3;
}
