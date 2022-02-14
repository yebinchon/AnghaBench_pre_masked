
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct regional {int dummy; } ;
struct query_info {int * local_alias; int qclass; int qtype; int qname_len; int * qname; } ;
struct msg_parse {int qclass; int qtype; int qname_len; scalar_t__ qname; } ;
typedef int sldns_buffer ;


 int FUNC_0 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct regional*,int ) ;

__attribute__((used)) static int
FUNC_3(sldns_buffer* VAR_0, struct msg_parse* VAR_1,
 struct query_info* VAR_2, struct regional* VAR_3)
{
 if(VAR_1->qname) {
  if(VAR_3)
   VAR_2->qname = (uint8_t*)FUNC_2(VAR_3,
    VAR_1->qname_len);
  else VAR_2->qname = (uint8_t*)FUNC_1(VAR_1->qname_len);
  if(!VAR_2->qname) return 0;
  FUNC_0(VAR_0, VAR_2->qname, VAR_1->qname);
 } else VAR_2->qname = 0;
 VAR_2->qname_len = VAR_1->qname_len;
 VAR_2->qtype = VAR_1->qtype;
 VAR_2->qclass = VAR_1->qclass;
 VAR_2->local_alias = ((void*)0);
 return 1;
}
