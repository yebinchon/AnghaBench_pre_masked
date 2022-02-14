
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reply_info {int dummy; } ;
struct regional {int dummy; } ;
struct query_info {int dummy; } ;
struct msg_parse {int dummy; } ;
struct alloc_cache {int dummy; } ;
typedef int sldns_buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct msg_parse*,struct reply_info*,struct regional*) ;
 int FUNC_2 (int *,struct msg_parse*,struct query_info*,struct regional*) ;
 int FUNC_3 (struct msg_parse*,struct reply_info**,struct regional*) ;
 int FUNC_4 (struct reply_info*,struct alloc_cache*,struct regional*) ;
 int FUNC_5 (struct reply_info*,struct alloc_cache*) ;

int
FUNC_6(sldns_buffer* VAR_0, struct msg_parse* VAR_1,
 struct alloc_cache* VAR_2, struct query_info* VAR_3,
 struct reply_info** VAR_4, struct regional* VAR_5)
{
 FUNC_0(VAR_0 && VAR_1);
 if(!FUNC_2(VAR_0, VAR_1, VAR_3, VAR_5))
  return 0;
 if(!FUNC_3(VAR_1, VAR_4, VAR_5))
  return 0;
 if(!FUNC_4(*VAR_4, VAR_2, VAR_5)) {
  if(!VAR_5) FUNC_5(*VAR_4, VAR_2);
  return 0;
 }
 if(!FUNC_1(VAR_0, VAR_1, *VAR_4, VAR_5)) {
  if(!VAR_5) FUNC_5(*VAR_4, VAR_2);
  return 0;
 }
 return 1;
}
