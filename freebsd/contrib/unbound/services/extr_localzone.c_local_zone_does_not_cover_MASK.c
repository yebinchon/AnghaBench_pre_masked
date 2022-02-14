
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct query_info {int qtype; int qname_len; int qname; } ;
struct local_zone {scalar_t__ type; int data; } ;
struct local_rrset {int dummy; } ;
struct TYPE_2__ {struct local_data* key; } ;
struct local_data {int namelabs; TYPE_1__ node; int namelen; int name; } ;


 struct local_rrset* FUNC_0 (struct local_data*,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(struct local_zone* VAR_4, struct query_info* VAR_5,
 int VAR_6)
{
 struct local_data VAR_7;
 struct local_data* VAR_8 = ((void*)0);
 struct local_rrset* VAR_9 = ((void*)0);
 if(VAR_4->type == VAR_0)
  return 1;
 if(VAR_4->type != VAR_2
  && VAR_4->type != VAR_3
  && VAR_4->type != VAR_1)
  return 0;
 VAR_7.node.key = &VAR_7;
 VAR_7.name = VAR_5->qname;
 VAR_7.namelen = VAR_5->qname_len;
 VAR_7.namelabs = VAR_6;
 VAR_8 = (struct local_data*)FUNC_1(&VAR_4->data, &VAR_7.node);
 if(VAR_4->type == VAR_2 || VAR_4->type == VAR_1)
  return (VAR_8 == ((void*)0));
 if(VAR_8)
  VAR_9 = FUNC_0(VAR_8, VAR_5->qtype, 1);

 return (VAR_9 == ((void*)0));
}
