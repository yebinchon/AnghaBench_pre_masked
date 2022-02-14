
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reply_info {int dummy; } ;
struct regional {int dummy; } ;
struct query_info {int dummy; } ;
struct msg_parse {int dummy; } ;
typedef int sldns_buffer ;


 int FUNC_0 (struct msg_parse*,int ,int) ;
 int FUNC_1 (int *,struct msg_parse*,int *,struct query_info*,struct reply_info**,struct regional*) ;
 scalar_t__ FUNC_2 (int *,struct msg_parse*,struct regional*) ;
 struct msg_parse* FUNC_3 (struct regional*,int) ;
 int FUNC_4 (int *,int ) ;

struct reply_info*
FUNC_5(sldns_buffer* VAR_0, struct regional* VAR_1,
 struct query_info* VAR_2)
{
 struct reply_info* VAR_3;
 struct msg_parse* VAR_4;
 if(!(VAR_4 = FUNC_3(VAR_1, sizeof(*VAR_4)))) {
  return ((void*)0);
 }
 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 FUNC_4(VAR_0, 0);
 if(FUNC_2(VAR_0, VAR_4, VAR_1) != 0){
  return 0;
 }
 if(!FUNC_1(VAR_0, VAR_4, ((void*)0), VAR_2, &VAR_3, VAR_1)) {
  return 0;
 }
 return VAR_3;
}
