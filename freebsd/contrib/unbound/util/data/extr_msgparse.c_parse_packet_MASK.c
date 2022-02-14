
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct regional {int dummy; } ;
struct msg_parse {int qdcount; int ancount; int nscount; int arcount; scalar_t__ ar_rrsets; scalar_t__ ns_rrsets; scalar_t__ an_rrsets; scalar_t__ rrset_count; void* flags; int id; } ;
typedef int sldns_buffer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct msg_parse*) ;
 int FUNC_1 (int *,struct msg_parse*,struct regional*,int ,int,scalar_t__*) ;
 int FUNC_2 (int *,int *,int) ;
 void* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

int
FUNC_5(sldns_buffer* VAR_5, struct msg_parse* VAR_6, struct regional* VAR_7)
{
 int VAR_8;
 if(FUNC_4(VAR_5) < VAR_0)
  return VAR_1;

 FUNC_2(VAR_5, &VAR_6->id, sizeof(uint16_t));
 VAR_6->flags = FUNC_3(VAR_5);
 VAR_6->qdcount = FUNC_3(VAR_5);
 VAR_6->ancount = FUNC_3(VAR_5);
 VAR_6->nscount = FUNC_3(VAR_5);
 VAR_6->arcount = FUNC_3(VAR_5);
 if(VAR_6->qdcount > 1)
  return VAR_1;
 if((VAR_8 = FUNC_0(VAR_5, VAR_6)) != 0)
  return VAR_8;
 if((VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_3,
  VAR_6->ancount, &VAR_6->an_rrsets)) != 0)
  return VAR_8;
 if((VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_4,
  VAR_6->nscount, &VAR_6->ns_rrsets)) != 0)
  return VAR_8;
 if(FUNC_4(VAR_5) == 0 && VAR_6->arcount == 1) {


 } else if((VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_7,
  VAR_2, VAR_6->arcount, &VAR_6->ar_rrsets)) != 0)
  return VAR_8;



 VAR_6->rrset_count = VAR_6->an_rrsets + VAR_6->ns_rrsets + VAR_6->ar_rrsets;
 return 0;
}
