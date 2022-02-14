
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int hash; void* key; void* data; } ;
struct TYPE_3__ {int rrset_class; int type; int * dname; int dname_len; int flags; } ;
struct ub_packed_rrset_key {TYPE_2__ entry; TYPE_1__ rk; } ;
struct rrset_parse {int hash; int rrset_class; int type; int dname; int dname_len; int flags; } ;
struct regional {int dummy; } ;
struct packed_rrset_data {int trust; } ;
struct msg_parse {int dummy; } ;
typedef int sldns_buffer ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (struct msg_parse*,struct rrset_parse*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,struct rrset_parse*,struct packed_rrset_data**,struct regional*) ;
 scalar_t__ FUNC_5 (struct regional*,int ) ;

int
FUNC_6(sldns_buffer* VAR_0, struct msg_parse* VAR_1,
 struct rrset_parse *VAR_2, struct regional* VAR_3,
 struct ub_packed_rrset_key* VAR_4)
{
 struct packed_rrset_data* VAR_5;
 VAR_4->rk.flags = VAR_2->flags;
 VAR_4->rk.dname_len = VAR_2->dname_len;
 if(VAR_3)
  VAR_4->rk.dname = (uint8_t*)FUNC_5(
   VAR_3, VAR_2->dname_len);
 else VAR_4->rk.dname =
   (uint8_t*)FUNC_3(VAR_2->dname_len);
 if(!VAR_4->rk.dname)
  return 0;

 FUNC_0(VAR_0, VAR_4->rk.dname, VAR_2->dname);

 VAR_4->rk.type = FUNC_2(VAR_2->type);
 VAR_4->rk.rrset_class = VAR_2->rrset_class;

 if(!FUNC_4(VAR_0, VAR_2, &VAR_5, VAR_3))
  return 0;
 VAR_4->entry.data = (void*)VAR_5;
 VAR_4->entry.key = (void*)VAR_4;
 VAR_4->entry.hash = VAR_2->hash;
 VAR_5->trust = FUNC_1(VAR_1, VAR_2);
 return 1;
}
