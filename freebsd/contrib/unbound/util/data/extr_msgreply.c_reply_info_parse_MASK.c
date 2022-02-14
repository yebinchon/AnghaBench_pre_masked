
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reply_info {int dummy; } ;
struct regional {int dummy; } ;
struct query_info {int * local_alias; int * qname; } ;
struct msg_parse {int dummy; } ;
struct edns_data {int dummy; } ;
struct alloc_cache {int dummy; } ;
typedef int sldns_buffer ;


 int VAR_0 ;
 int FUNC_0 (struct msg_parse*,int ,int) ;
 int FUNC_1 (int *,struct msg_parse*,struct alloc_cache*,struct query_info*,struct reply_info**,int *) ;
 int FUNC_2 (struct msg_parse*,struct edns_data*,struct regional*) ;
 int FUNC_3 (int *,struct msg_parse*,struct regional*) ;
 int FUNC_4 (struct query_info*) ;
 struct msg_parse* FUNC_5 (struct regional*,int) ;
 int FUNC_6 (struct reply_info*,struct alloc_cache*) ;
 int FUNC_7 (int *,int ) ;

int FUNC_8(sldns_buffer* VAR_1, struct alloc_cache* VAR_2,
        struct query_info* VAR_3, struct reply_info** VAR_4,
 struct regional* VAR_5, struct edns_data* VAR_6)
{

 struct msg_parse* VAR_7;
 int VAR_8;

 VAR_3->qname = ((void*)0);
 VAR_3->local_alias = ((void*)0);
 *VAR_4 = ((void*)0);
 if(!(VAR_7 = FUNC_5(VAR_5, sizeof(*VAR_7)))) {
  return VAR_0;
 }
 FUNC_0(VAR_7, 0, sizeof(*VAR_7));

 FUNC_7(VAR_1, 0);
 if((VAR_8 = FUNC_3(VAR_1, VAR_7, VAR_5)) != 0) {
  return VAR_8;
 }
 if((VAR_8 = FUNC_2(VAR_7, VAR_6, VAR_5)) != 0)
  return VAR_8;



 if(!FUNC_1(VAR_1, VAR_7, VAR_2, VAR_3, VAR_4, ((void*)0))) {
  FUNC_4(VAR_3);
  FUNC_6(*VAR_4, VAR_2);
  *VAR_4 = ((void*)0);
  return VAR_0;
 }
 return 0;
}
