
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct regional {int dummy; } ;
struct query_info {scalar_t__ qclass; scalar_t__ qtype; int qname; } ;
struct msg_parse {int qdcount; int flags; scalar_t__ qtype; scalar_t__ qclass; int qname; } ;
struct module_env {int dummy; } ;
struct iter_env {int dummy; } ;
typedef int sldns_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,char*,int *,int ,scalar_t__) ;
 int FUNC_3 (int *,struct msg_parse*,struct query_info*,struct regional*) ;
 int FUNC_4 (int *,struct msg_parse*,struct query_info*,int *,struct module_env*,struct iter_env*) ;

int
FUNC_5(sldns_buffer* VAR_7, struct msg_parse* VAR_8,
 struct query_info* VAR_9, uint8_t* VAR_10, struct regional* VAR_11,
 struct module_env* VAR_12, struct iter_env* VAR_13)
{

 FUNC_2(VAR_6, "scrub for", VAR_10, VAR_5,
  VAR_9->qclass);
 if(VAR_8->qdcount > 1)
  return 0;
 if( !(VAR_8->flags&VAR_1) )
  return 0;
 VAR_8->flags &= ~(VAR_0|VAR_2);




 if((FUNC_0(VAR_8->flags) == VAR_3 ||
  FUNC_0(VAR_8->flags) == VAR_4) &&
  VAR_8->qdcount == 0)
  return 0;



 if(VAR_8->qdcount == 1) {
  if(FUNC_1(VAR_7, VAR_8->qname, VAR_9->qname) != 0)
   return 0;
  if(VAR_8->qtype != VAR_9->qtype || VAR_8->qclass != VAR_9->qclass)
   return 0;
 }


 if(!FUNC_3(VAR_7, VAR_8, VAR_9, VAR_11))
  return 0;

 if(!FUNC_4(VAR_7, VAR_8, VAR_9, VAR_10, VAR_12, VAR_13))
  return 0;
 return 1;
}
