
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reply_info {int dummy; } ;
struct regional {int dummy; } ;
struct msg_parse {int rrset_count; int ar_rrsets; int ns_rrsets; int an_rrsets; int qdcount; int flags; } ;


 struct reply_info* FUNC_0 (struct regional*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct msg_parse* VAR_1, struct reply_info** VAR_2,
 struct regional* VAR_3)
{
 *VAR_2 = FUNC_0(VAR_3, VAR_1->flags, VAR_1->qdcount, 0,
  0, 0, VAR_1->an_rrsets, VAR_1->ns_rrsets, VAR_1->ar_rrsets,
  VAR_1->rrset_count, VAR_0);
 if(!*VAR_2)
  return 0;
 return 1;
}
