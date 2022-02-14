
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct query_info {int qclass; int qtype; int qname_len; int qname; } ;
struct auth_xfer {int dclass; int namelen; int name; } ;
typedef int sldns_buffer ;
typedef int qinfo ;


 int VAR_0 ;
 int FUNC_0 (struct query_info*,int ,int) ;
 int FUNC_1 (int *,struct query_info*) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct auth_xfer* VAR_1, sldns_buffer* VAR_2,
 uint16_t VAR_3)
{
 struct query_info VAR_4;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.qname = VAR_1->name;
 VAR_4.qname_len = VAR_1->namelen;
 VAR_4.qtype = VAR_0;
 VAR_4.qclass = VAR_1->dclass;
 FUNC_1(VAR_2, &VAR_4);
 FUNC_2(VAR_2, 0, VAR_3);
}
