
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct msg_parse {int qdcount; void* qclass; void* qtype; int qname_len; int qname; } ;
typedef int sldns_buffer ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(sldns_buffer* VAR_1, struct msg_parse* VAR_2)
{
 if(VAR_2->qdcount == 0)
  return 0;
 if(VAR_2->qdcount > 1)
  return VAR_0;
 FUNC_0(VAR_2->qdcount == 1);
 if(FUNC_4(VAR_1) <= 0)
  return VAR_0;
 VAR_2->qname = FUNC_2(VAR_1);
 if((VAR_2->qname_len = FUNC_1(VAR_1)) == 0)
  return VAR_0;
 if(FUNC_4(VAR_1) < sizeof(uint16_t)*2)
  return VAR_0;
 VAR_2->qtype = FUNC_3(VAR_1);
 VAR_2->qclass = FUNC_3(VAR_1);
 return 0;
}
