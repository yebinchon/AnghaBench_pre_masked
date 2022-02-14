
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reply_info {int flags; } ;
struct regional {int dummy; } ;
struct query_info {int dummy; } ;
typedef int sldns_buffer ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,...) ;
 struct regional* FUNC_2 () ;
 int FUNC_3 (struct regional*) ;
 int FUNC_4 (struct query_info*,struct reply_info*,int ,int ,int *,int ,struct regional*,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int) ;
 char* FUNC_9 (int ,int ) ;

void
FUNC_10(const char* VAR_0, struct query_info* VAR_1, struct reply_info* VAR_2)
{

 sldns_buffer* VAR_3 = FUNC_8(65535);
 struct regional* VAR_4 = FUNC_2();
 if(!FUNC_4(VAR_1, VAR_2, 0, VAR_2->flags, VAR_3, 0,
  VAR_4, 65535, 1)) {
  FUNC_1("%s: log_dns_msg: out of memory", VAR_0);
 } else {
  char* VAR_5 = FUNC_9(FUNC_5(VAR_3),
   FUNC_7(VAR_3));
  if(!VAR_5) {
   FUNC_1("%s: log_dns_msg: ldns tostr failed", VAR_0);
  } else {
   FUNC_1("%s %s", VAR_0, VAR_5);
  }
  FUNC_0(VAR_5);
 }
 FUNC_6(VAR_3);
 FUNC_3(VAR_4);
}
