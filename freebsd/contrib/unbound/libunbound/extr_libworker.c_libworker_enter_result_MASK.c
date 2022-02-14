
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_result {int rcode; int havedata; int nxdomain; int secure; int bogus; scalar_t__* data; } ;
struct reply_info {int flags; } ;
struct regional {int dummy; } ;
struct query_info {int dummy; } ;
typedef int sldns_buffer ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ub_result*,int ,int ,struct query_info*,struct reply_info*) ;
 int FUNC_2 (char*) ;
 struct reply_info* FUNC_3 (int *,struct regional*,struct query_info*) ;
 int FUNC_4 (struct query_info*,struct reply_info*) ;
 int FUNC_5 (struct query_info*,struct reply_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_6(struct ub_result* VAR_5, sldns_buffer* VAR_6,
 struct regional* VAR_7, enum sec_status VAR_8)
{
 struct query_info VAR_9;
 struct reply_info* VAR_10;
 VAR_5->rcode = VAR_1;
 VAR_10 = FUNC_3(VAR_6, VAR_7, &VAR_9);
 if(!VAR_10) {
  FUNC_2("cannot parse buf");
  return;
 }
 if(!FUNC_1(VAR_5, FUNC_4(&VAR_9, VAR_10),
  FUNC_5(&VAR_9, VAR_10), &VAR_9, VAR_10))
  return;

 VAR_5->rcode = (int)FUNC_0(VAR_10->flags);
 if(VAR_5->data && VAR_5->data[0])
  VAR_5->havedata = 1;
 if(VAR_5->rcode == VAR_0)
  VAR_5->nxdomain = 1;
 if(VAR_8 == VAR_3)
  VAR_5->secure = 1;
 if(VAR_8 == VAR_2 ||
  VAR_8 == VAR_4)
  VAR_5->bogus = 1;
}
