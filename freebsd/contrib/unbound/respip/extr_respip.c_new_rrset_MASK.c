
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int dname_len; void* rrset_class; void* type; void* dname; } ;
struct TYPE_3__ {struct packed_rrset_data* data; struct ub_packed_rrset_key* key; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; TYPE_1__ entry; } ;
struct regional {int dummy; } ;
struct packed_rrset_data {int security; int trust; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (struct regional*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct ub_packed_rrset_key*
FUNC_3(struct regional* VAR_2, uint16_t VAR_3, uint16_t VAR_4)
{
 struct packed_rrset_data* VAR_5;
 struct ub_packed_rrset_key* VAR_6 = FUNC_2(
  VAR_2, sizeof(*VAR_6));
 if(!VAR_6) {
  FUNC_1("out of memory");
  return ((void*)0);
 }
 VAR_6->entry.key = VAR_6;
 VAR_5 = FUNC_2(VAR_2, sizeof(*VAR_5));
 if(!VAR_5) {
  FUNC_1("out of memory");
  return ((void*)0);
 }
 VAR_5->trust = VAR_0;
 VAR_5->security = VAR_1;
 VAR_6->entry.data = VAR_5;
 VAR_6->rk.dname = FUNC_2(VAR_2, 1);
 if(!VAR_6->rk.dname) {
  FUNC_1("out of memory");
  return ((void*)0);
 }
 VAR_6->rk.dname_len = 1;
 VAR_6->rk.type = FUNC_0(VAR_3);
 VAR_6->rk.rrset_class = FUNC_0(VAR_4);
 return VAR_6;
}
