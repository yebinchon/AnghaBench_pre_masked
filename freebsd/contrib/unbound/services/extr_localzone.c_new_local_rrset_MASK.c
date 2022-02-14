
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {void* rrset_class; void* type; int dname_len; int dname; } ;
struct TYPE_3__ {struct packed_rrset_data* data; struct ub_packed_rrset_key* key; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; TYPE_1__ entry; } ;
struct regional {int dummy; } ;
struct packed_rrset_data {int security; int trust; } ;
struct local_rrset {struct ub_packed_rrset_key* rrset; struct local_rrset* next; } ;
struct local_data {int namelen; int name; struct local_rrset* rrsets; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct regional*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct local_rrset*
FUNC_3(struct regional* VAR_2, struct local_data* VAR_3,
 uint16_t VAR_4, uint16_t VAR_5)
{
 struct packed_rrset_data* VAR_6;
 struct local_rrset* VAR_7 = (struct local_rrset*)
  FUNC_2(VAR_2, sizeof(*VAR_7));
 if(!VAR_7) {
  FUNC_1("out of memory");
  return ((void*)0);
 }
 VAR_7->next = VAR_3->rrsets;
 VAR_3->rrsets = VAR_7;
 VAR_7->rrset = (struct ub_packed_rrset_key*)
  FUNC_2(VAR_2, sizeof(*VAR_7->rrset));
 if(!VAR_7->rrset) {
  FUNC_1("out of memory");
  return ((void*)0);
 }
 VAR_7->rrset->entry.key = VAR_7->rrset;
 VAR_6 = (struct packed_rrset_data*)FUNC_2(VAR_2,
  sizeof(*VAR_6));
 if(!VAR_6) {
  FUNC_1("out of memory");
  return ((void*)0);
 }
 VAR_6->trust = VAR_0;
 VAR_6->security = VAR_1;
 VAR_7->rrset->entry.data = VAR_6;
 VAR_7->rrset->rk.dname = VAR_3->name;
 VAR_7->rrset->rk.dname_len = VAR_3->namelen;
 VAR_7->rrset->rk.type = FUNC_0(VAR_4);
 VAR_7->rrset->rk.rrset_class = FUNC_0(VAR_5);
 return VAR_7;
}
