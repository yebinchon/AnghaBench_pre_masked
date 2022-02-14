
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint16_t ;
struct query_info {char* qname; size_t qname_len; int qtype; int qclass; TYPE_3__* local_alias; } ;
typedef int sldns_buffer ;
struct TYPE_6__ {TYPE_2__* rrset; } ;
struct TYPE_4__ {char* dname; size_t dname_len; } ;
struct TYPE_5__ {TYPE_1__ rk; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char const*,size_t) ;
 int FUNC_6 (int *,int) ;

void
FUNC_7(sldns_buffer* VAR_0, struct query_info* VAR_1)
{
 uint16_t VAR_2 = 0;
 const uint8_t* VAR_3 = VAR_1->local_alias ?
  VAR_1->local_alias->rrset->rk.dname : VAR_1->qname;
 size_t VAR_4 = VAR_1->local_alias ?
  VAR_1->local_alias->rrset->rk.dname_len : VAR_1->qname_len;
 FUNC_1(VAR_0);
 FUNC_0(FUNC_3(VAR_0) >= 12+255+4 );
 FUNC_4(VAR_0, 2);
 FUNC_6(VAR_0, VAR_2);
 FUNC_6(VAR_0, 1);
 FUNC_5(VAR_0, "\000\000\000\000\000\000", 6);
 FUNC_5(VAR_0, VAR_3, VAR_4);
 FUNC_6(VAR_0, VAR_1->qtype);
 FUNC_6(VAR_0, VAR_1->qclass);
 FUNC_2(VAR_0);
}
