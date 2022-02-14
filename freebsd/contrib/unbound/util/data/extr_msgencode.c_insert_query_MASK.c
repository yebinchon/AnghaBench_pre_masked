
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct regional {int dummy; } ;
struct query_info {size_t qname_len; int qclass; int qtype; TYPE_3__* local_alias; int * qname; } ;
struct compress_tree_node {int dummy; } ;
typedef int ssize_t ;
typedef int sldns_buffer ;
struct TYPE_6__ {TYPE_2__* rrset; } ;
struct TYPE_4__ {size_t dname_len; int * dname; } ;
struct TYPE_5__ {TYPE_1__ rk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,struct regional*,int *,struct compress_tree_node**) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *,size_t) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int
FUNC_8(struct query_info* VAR_3, struct compress_tree_node** VAR_4,
 sldns_buffer* VAR_5, struct regional* VAR_6)
{
 uint8_t* VAR_7 = VAR_3->local_alias ?
  VAR_3->local_alias->rrset->rk.dname : VAR_3->qname;
 size_t VAR_8 = VAR_3->local_alias ?
  VAR_3->local_alias->rrset->rk.dname_len : VAR_3->qname_len;
 if(FUNC_4(VAR_5) <
  VAR_3->qname_len+sizeof(uint16_t)*2)
  return VAR_2;

 if(!FUNC_0(VAR_7, FUNC_1(VAR_7),
  FUNC_3(VAR_5), VAR_6, ((void*)0), VAR_4))
  return VAR_1;
 if(FUNC_2(VAR_5) == VAR_7)
  FUNC_5(VAR_5, (ssize_t)VAR_8);
 else FUNC_6(VAR_5, VAR_7, VAR_8);
 FUNC_7(VAR_5, VAR_3->qtype);
 FUNC_7(VAR_5, VAR_3->qclass);
 return VAR_0;
}
